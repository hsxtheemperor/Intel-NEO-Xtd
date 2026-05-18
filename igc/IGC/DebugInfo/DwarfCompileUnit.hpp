/*========================== begin_copyright_notice ============================

Copyright (C) 2017-2023 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

/*========================== begin_copyright_notice ============================

This file is distributed under the University of Illinois Open Source License.
See LICENSE.TXT for details.

============================= end_copyright_notice ===========================*/

///////////////////////////////////////////////////////////////////////////////
// This file is based on llvm-3.4\lib\CodeGen\AsmPrinter\DwarfCompilerUnit.h
///////////////////////////////////////////////////////////////////////////////

#pragma once

// clang-format off
#include "common/LLVMWarningsPush.hpp"
#include "llvm/ADT/DenseMap.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/StringMap.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/Config/llvm-config.h"
#include "llvm/IR/DebugInfo.h"
#include "llvm/IR/GlobalValue.h"
#include "common/LLVMWarningsPop.hpp"
#include "llvm/IR/DebugInfoMetadata.h"
#include "llvm/Support/Allocator.h"
// clang-format on

#include "DIE.hpp"
#include "DwarfDebug.hpp"
#include "EmitterOpts.hpp"
#include "Utils.hpp"
#include <vector>
#include <optional>
#include <string>
#include <utility>

// At the top of DwarfCompileUnit.hpp, AFTER includes
namespace llvm {
  class MDNode;
  class ConstantInt;
  class ConstantFP;
  class MCExpr;
  class MCSymbol;
  class MCSection;
  class APInt;
  
  // Use the actual headers for these to avoid "using" vs "class" conflicts
  template <typename T, unsigned N> class SmallVector;

  namespace dwarf {
    enum Attribute : uint16_t;
    enum Form : uint16_t;
  }
}

namespace IGC {

//  using APInt = ::llvm::APInt;
//  using StringRef = ::llvm::StringRef;
//  using MDNode = ::llvm::MDNode;
//  using DICompileUnit = ::llvm::DICompileUnit;
//  using DIScope = ::llvm::DIScope;
//  using DINode = ::llvm::DINode;
//  using DISubprogram = ::llvm::DISubprogram;
//  using DIType = ::llvm::DIType;
//  using DIVariable = ::llvm::DIVariable;
//  using DIImportedEntity = ::llvm::DIImportedEntity;
// using ConstantInt = ::llvm::ConstantInt;
//  using ConstantFP = ::llvm::ConstantFP;
//  using MCExpr = ::llvm::MCExpr;
//  using MCSymbol = ::llvm::MCSymbol;
//  using MCSection = ::llvm::MCSection;
//  using BumpPtrAllocator = ::llvm::BumpPtrAllocator;

class DbgVariable;

//===----------------------------------------------------------------------===//
/// PieceBuilder - Helper class used to emit location info for register based
/// variables from pieces. Current implementation supports only consecutive
/// registers.
class PieceBuilder {
public:
  struct PieceInfo {
    unsigned regNum;
    uint64_t sizeBits;
    uint64_t offsetBits;
  };

  PieceBuilder(uint16_t RegNum, size_t NumGRFs, uint64_t RegSizeBits,
               uint64_t VarSizeBits, uint64_t SubRegOffsetBits);
  unsigned pieceCount() const;
  PieceInfo get(unsigned index) const;

private:
  unsigned RegNum;
  size_t NumGRFs;
  uint64_t RegSizeBits;
  uint64_t VariableSizeInBits;
  uint64_t SubRegOffsetInBits;
};

//===----------------------------------------------------------------------===//
/// CompileUnit - This dwarf writer support class manages information associated
/// with a source file.
class CompileUnit {
  /// UniqueID - a numeric ID unique among all CUs in the module
  ///
  unsigned UniqueID;

  /// Node - llvm::MDNode for the compile unit.
  ::llvm::DICompileUnit *Node;

  /// CUDie - Compile unit debug information entry.
  ///
  class DIE *CUDie;

  /// Asm - Target of Dwarf emission.
  StreamEmitter *Asm;

  const DebugEmitterOpts &EmitSettings;

  // Holders for some common dwarf information.
  DwarfDebug *DD;

  /// IndexTyDie - An anonymous type for index type.  Owned by CUDie.
  class DIE *IndexTyDie;

  /// MDNodeToDieMap - Tracks the mapping of unit level debug information
  /// variables to debug information entries.
  ::llvm::DenseMap<const llvm::MDNode *, class DIE *> MDNodeToDieMap;

  /// MDNodeToDIEEntryMap - Tracks the mapping of unit level debug information
  /// descriptors to debug information entries using a DIEEntry proxy.
  ::llvm::DenseMap<const ::llvm::MDNode *, ::IGC::DIEEntry *> MDNodeToDIEEntryMap;

  /// DIEBlocks - A list of all the DIEBlocks in use.
  ::std::vector<DIEBlock *> DIEBlocks;

  /// DIEInlinedStrings - A list of all the DIEInlinedStrings in use.
  ::std::vector<DIEInlinedString *> DIEInlinedStrings;

  /// ContainingTypeMap - This map is used to keep track of subprogram DIEs that
  /// need DW_AT_containing_type attribute. This attribute points to a class DIE that
  /// corresponds to the llvm::MDNode mapped with the subprogram class DIE.
  ::llvm::DenseMap<class DIE *, const llvm::MDNode *> ContainingTypeMap;

  // DIEValueAllocator - All DIEValues are allocated through this allocator.
  ::llvm::BumpPtrAllocator DIEValueAllocator;

  // DIEIntegerOne - A preallocated DIEValue because 1 is used frequently.
  DIEInteger *DIEIntegerOne;

public:
  CompileUnit(unsigned UID, class DIE *D, ::llvm::DICompileUnit *CU, StreamEmitter *A,
              DwarfDebug *DW);
  ~CompileUnit();
  CompileUnit(const CompileUnit &) = delete;
  CompileUnit &operator=(const CompileUnit &) = delete;

  using ImportedEntityList = ::llvm::SmallVector<const ::llvm::MDNode *, 8>;
  using ImportedEntityMap =
      ::llvm::DenseMap<const ::llvm::MDNode *, ImportedEntityList>;

  ImportedEntityMap ImportedEntities;

  // Accessors.
  unsigned getUniqueID() const { return UniqueID; }
  uint16_t getLanguage() const {
    return getSourceLanguage(Node, DD->GetVISAModule()->GetModule());
  }
  ::llvm::DICompileUnit *getNode() const { return Node; }
  class DIE *getCUDie() const { return CUDie; }

  CompileUnit &getCU() { return *this; }

  unsigned getDebugInfoOffset() const { return DebugInfoOffset; }
  void setDebugInfoOffset(unsigned DbgInfoOff) { DebugInfoOffset = DbgInfoOff; }

  /// hasContent - Return true if this compile unit has something to write out.
  ///
  bool hasContent() const { return !CUDie->getChildren().empty(); }

  /// getParentContextString - Get a string containing the language specific
  /// context for a global name.
  ::std::string getParentContextString(::llvm::DIScope *Context) const;

  /// getDIE - Returns the debug information entry map slot for the
  /// specified debug variable. We delegate the request to DwarfDebug
  /// when the ::llvm::MDNode can be part of the type system, since DIEs for
  /// the type system can be shared across CUs and the mappings are
  /// kept in DwarfDebug.
  class DIE *getDIE(::llvm::DINode *D) const;

  DIEBlock *getDIEBlock() { return new (DIEValueAllocator) DIEBlock(); }

  /// insertDIE - Insert class DIE into the map. We delegate the request to DwarfDebug
  /// when the ::llvm::MDNode can be part of the type system, since DIEs for
  /// the type system can be shared across CUs and the mappings are
  /// kept in DwarfDebug.
  void insertDIE(::llvm::MDNode *Desc, class DIE *D);

  /// addDie - Adds or interns the class DIE to the compile unit.
  ///
  void addDie(class DIE *Buffer) { CUDie->addChild(Buffer); }

  /// addFlag - Add a flag that is true to the class DIE.
  void addFlag(class DIE *DIE, ::llvm::dwarf::Attribute Attribute);

  /// addUInt - Add an unsigned integer attribute data and value.
  ///
  void addUInt(class DIE *DIE, ::llvm::dwarf::Attribute Attribute,
               ::std::optional<::llvm::dwarf::Form> Form, uint64_t Integer);

  void addUInt(DIEBlock *Block, ::llvm::dwarf::Form Form, uint64_t Integer);

  void addBitPiece(DIEBlock *Block, uint64_t SizeBits,
                   uint64_t OffsetBits);

  /// addSInt - Add an signed integer attribute data and value.
  ///
  void addSInt(class DIE *DIE, ::llvm::dwarf::Attribute Attribute,
               ::std::optional<::llvm::dwarf::Form> Form, int64_t Integer);

  void addSInt(DIEBlock *DIE, ::std::optional<::llvm::dwarf::Form> Form,
               int64_t Integer);

  /// addString - Add a string attribute data and value.
  ///
  void addString(class DIE *DIE, ::llvm::dwarf::Attribute Attribute,
                 const ::llvm::StringRef Str);

  /// addExpr - Add a Dwarf expression attribute data and value.
  ///
  void addExpr(DIEBlock *DIE, ::llvm::dwarf::Form Form, const llvm::MCExpr *Expr);

  /// addLabel - Add a Dwarf label attribute data and value.
  ///
  void addLabel(class DIE *DIE, ::llvm::dwarf::Attribute Attribute,
                ::llvm::dwarf::Form Form, const llvm::MCSymbol *Label);

  void addLabel(DIEBlock *DIE, ::llvm::dwarf::Form Form,
                const llvm::MCSymbol *Label);

  /// addLabelAddress - Add a dwarf label attribute data and value using
  /// either DW_FORM_addr or DW_FORM_GNU_addr_index.
  ///
  void addLabelAddress(class DIE *DIE, ::llvm::dwarf::Attribute Attribute,
                       llvm::MCSymbol *Label);

  // addLabelLoc - Add dwarf label attribute data and value using
  // DW_FORM_sec_offset.
  void addLabelLoc(class DIE *DIE, ::llvm::dwarf::Attribute Attribute,
                   llvm::MCSymbol *Label);

  /// addOpAddress - Add a dwarf op address data and value using the
  /// form given and an op of either DW_FORM_addr or DW_FORM_GNU_addr_index.
  ///
  void addOpAddress(DIEBlock *DIE, const llvm::MCSymbol *Label);

  /// addDelta - Add a label delta attribute data and value.
  ///
  void addDelta(class DIE *DIE, ::llvm::dwarf::Attribute Attribute,
                ::llvm::dwarf::Form Form, const llvm::MCSymbol *Hi,
                const llvm::MCSymbol *Lo);

  /// addDIEEntry - Add a class DIE attribute data and value.
  ///
  void addDIEEntry(class DIE *DIE, ::llvm::dwarf::Attribute Attribute, class DIE *Entry);

  /// addDIEEntry - Add a class DIE attribute data and value.
  ///
  void addDIEEntry(class DIE *DIE, ::llvm::dwarf::Attribute Attribute, DIEEntry *Entry);

  /// addBlock - Add block data.
  ///
  void addBlock(class DIE *DIE, ::llvm::dwarf::Attribute Attribute, DIEBlock *Block);

  /// addSourceLine - Add location information to specified debug information
  /// entry.
  void addSourceLine(class DIE *DIE, ::llvm::DIScope *S, unsigned Line);
  void addSourceLine(class DIE *DIE, ::llvm::DIImportedEntity *IE, unsigned Line);
  void addSourceLine(class DIE *DIE, ::llvm::DIVariable *V);
  void addSourceLine(class DIE *DIE, ::llvm::DISubprogram *SP);
  void addSourceLine(class DIE *DIE, ::llvm::DIType *Ty);

  /// addConstantValue - Add constant value entry in variable class DIE.
  void addConstantValue(class DIE *DIE, const ::llvm::ConstantInt *CI, bool Unsigned);
  void addConstantValue(class DIE *DIE, const ::llvm::APInt &Val, bool Unsigned);

  /// addConstantFPValue - Add constant value entry in variable class DIE.
  void addConstantFPValue(class DIE *DIE, const ::llvm::ConstantFP *CFP);

  /// addConstantUValue - Add constant unsigned value entry in variable
  /// DIEBlock.
  void addConstantUValue(DIEBlock *TheDie, uint64_t Val);

  /// addConstantData - Add constant data entry in variable class DIE.
  void addConstantData(class DIE *DIE, const unsigned char *Ptr8, int NumBytes);

  /// addTemplateParams - Add template parameters in buffer.
  void addTemplateParams(class DIE &Buffer, ::llvm::DINodeArray TParams);

  ///  addRegOrConst - Decide whether to emit regx or const
  void addRegOrConst(DIEBlock *TheDie, unsigned DWReg);

  /// addRegisterOp - Add register operand.
  void addRegisterOp(DIEBlock *TheDie, unsigned Reg);

  /// addRegisterOffset - Add register offset.
  void addRegisterOffset(DIEBlock *TheDie, unsigned Reg, int64_t Offset);

  /// addType - Add a new type attribute to the specified entity. This takes
  /// and attribute parameter because DW_AT_friend attributes are also
  /// type references.
  void addType(class DIE *Entity, ::llvm::DIType *Ty,
               ::llvm::dwarf::Attribute Attribute = ::llvm::dwarf::DW_AT_type);

  // addSimdWidth - add SIMD width
  void addSimdWidth(class DIE *DIE, uint16_t SimdWidth);

  // addBindlessOrStatelessLocation - add a sequence of attributes to calculate
  // stateless or bindless location of variable. baseAddr is one of the
  // following base addreses:
  // - General State Base Address when variable located in stateless surface
  // - Bindless Surface State Base Address when variable located in bindless
  // surface
  // - Bindless Sampler State Base Addres when variable located in bindless
  // sampler
  void addBindlessOrStatelessLocation(DIEBlock *Block,
                                      const VISAVariableLocation &Loc,
                                      uint32_t baseAddr);

  // addStatelessLocation - add a sequence of attributes to calculate stateless
  // surface location of variable
  void addStatelessLocation(DIEBlock *Block, const VISAVariableLocation &Loc);

  // addBindlessSurfaceLocation - add a sequence of attributes to calculate
  // bindless surface location of variable
  void addBindlessSurfaceLocation(DIEBlock *Block,
                                  const VISAVariableLocation &Loc);

  // addBindlessSamplerLocation - add a sequence of attributes to calculate
  // bindless sampler location of variable
  void addBindlessSamplerLocation(DIEBlock *Block,
                                  const VISAVariableLocation &Loc);

  // addBindlessScratchSpaceLocation - add a sequence of attributes to calculate
  // bindless scratch space location of variable
  void addBindlessScratchSpaceLocation(DIEBlock *Block,
                                       const VISAVariableLocation &Loc);

  // addBE_FP - emits operations to add contents of BE_FP to current top of
  // dwarf stack
  void addBE_FP(DIEBlock *Block);

  // addScratchLocation - add a sequence of attributes to emit scratch space
  // location of variable
  void addScratchLocation(DIEBlock *Block, uint32_t memoryOffset,
                          int32_t vectorOffset);

  // addSimdLane - add a sequence of attributes to calculate location of
  // variable among SIMD lanes, e.g. a GRF subregister.
  void addSimdLane(DIEBlock *Block, const DbgVariable &DV,
                   const VISAVariableLocation &Loc,
                   const DbgDecoder::LiveIntervalsVISA *lr, uint16_t regOffset,
                   bool isPacked, bool isSecondHalf);

  // addSimdLaneScalar - add a sequence of attributes to calculate location of
  // scalar variable e.g. a GRF subregister.
  void addSimdLaneScalar(DIEBlock *Block, const DbgVariable &DV,
                         const VISAVariableLocation &Loc,
                         const DbgDecoder::LiveIntervalsVISA &lr);

  // emitBitPiecesForRegVal - emit bitPieces DW_OP_bit_piece sequence for
  // register value. It is used to describe vector variables in registers.
  void emitBitPiecesForRegVal(DIEBlock *Block,
                              const PieceBuilder &pieceBuilder);

  // addSimdLaneRegionBase - add a sequence of attributes to calculate location
  // of region base address variable for vc-backend
  void addSimdLaneRegionBase(DIEBlock *Block, const DbgVariable &DV,
                             const VISAVariableLocation &Loc,
                             const DbgDecoder::LiveIntervalsVISA *lr);

  // emit expression to extract sub-reg value
  void extractSubRegValue(DIEBlock *Block, unsigned char Sz);

  // Decode line number, file name and location from a string, where a line no.
  // and file name (including directory) are separated by '-' character:
  // lineNumber-fileNameIncludingDirectory There is a workaround for DIModule
  // creation in earlier LLVM versions, where a line and a file parameters are
  // not supported in DIBuilder.
  void decodeLineAndFileForISysRoot(::llvm::StringRef &lineAndFile,
                                    unsigned int *line, ::std::string *file,
                                    ::std::string *directory);

  /// Construct import_module class DIE.
  class DIE *constructImportedEntityDIE(::llvm::DIImportedEntity *Module);

  /// getOrCreateNameSpace - Create a class DIE for DINameSpace.
  class DIE *getOrCreateNameSpace(::llvm::DINamespace *NS);

  /// getOrCreateSubprogramDIE - Create new class DIE using SP.
  class DIE *getOrCreateSubprogramDIE(::llvm::DISubprogram *SP);

  /// getOrCreateModuleDIE - Create new class DIE for DIModule.
  class DIE *getOrCreateModuleDIE(::llvm::DIModule *MD);

  /// getOrCreateTypeDIE - Find existing class DIE or create new class DIE for the
  /// given ::llvm::DIType.
  class DIE *getOrCreateTypeDIE(const ::llvm::MDNode *N);

  /// getOrCreateContextDIE - Get context owner's class DIE.
  class DIE *getOrCreateContextDIE(::llvm::DIScope *Context);

  /// constructContainingTypeDIEs - Construct DIEs for types that contain
  /// vtables.
  void constructContainingTypeDIEs();

  /// constructVariableDIE - Construct a class DIE for the given DbgVariable.
  class DIE *constructVariableDIE(DbgVariable &DV, bool isScopeAbstract);

  /// Create a class DIE with the given Tag, add the class DIE to its parent, and
  /// call insertDIE if MD is not null.
  class DIE *createAndAddDIE(unsigned Tag, class DIE &Parent, ::llvm::DINode *N = nullptr);

  void addImportedEntity(const ::llvm::DIImportedEntity *IE) {
    ::llvm::DIScope *Scope = IE->getScope();

    // Temporary workaround
    if (!Scope) {
      return;
    }
    // assert(Scope && "Invalid Scope encoding!");

    if (!::llvm::isa<::llvm::DILocalScope>(Scope)) {
      // No need to add imported enities that are not local declaration.
      return;
    }

    auto *LocalScope =
        ::llvm::cast<::llvm::DILocalScope>(Scope)->getNonLexicalBlockFileScope();
    ImportedEntities[LocalScope].push_back(IE);
  }

  /// Compute the size of a header for this unit, not including the initial
  /// length field.
  unsigned getHeaderSize() const {
    if (DD->getDwarfVersion() > 4) {
      return sizeof(int16_t) + // DWARF version number
             sizeof(int8_t) +  // Unit Type (in bytes)
             sizeof(int8_t) +  // Pointer Size (in bytes)
             sizeof(int32_t);  // Offset Into Abbrev. Section
    } else {
      return sizeof(int16_t) + // DWARF version number
             sizeof(int32_t) + // Offset Into Abbrev. Section
             sizeof(int8_t);   // Pointer Size (in bytes)
    }
  }

  /// Emit the header for this unit, not including the initial length field.
  void emitHeader(const ::llvm::MCSection *ASection,
                  const ::llvm::MCSymbol *ASectionSym);

private:
  /// constructTypeDIE - Construct basic type class DIE from ::llvm::DIBasicType.
  void constructTypeDIE(class DIE &Buffer, ::llvm::DIBasicType *BTy);

  /// constructTypeDIE - Construct derived type class DIE from ::llvm::DIDerivedType.
  void constructTypeDIE(class DIE &Buffer, ::llvm::DIDerivedType *DTy);

  /// constructTypeDIE - Construct type class DIE from ::llvm::DICompositeType.
  void constructTypeDIE(class DIE &Buffer, ::llvm::DICompositeType *CTy);

  /// constructTypeDIE - Construct type class DIE from ::llvm::DISubroutineType
  /// This was added for LLVM 3.8 since ::llvm::DISubroutineType is no longer
  /// derived from ::llvm::DICompositeType.
  void constructTypeDIE(class DIE &Buffer, ::llvm::DISubroutineType *STy);

  /// constructSubrangeDIE - Construct subrange class DIE from ::llvm::DISubrange.
  void constructSubrangeDIE(class DIE &Buffer, ::llvm::DISubrange *SR, class DIE *IndexTy);

  /// constructArrayTypeDIE - Construct array type class DIE from ::llvm::DICompositeType.
  void constructArrayTypeDIE(class DIE &Buffer, ::llvm::DICompositeType *CTy);

  /// constructEnumTypeDIE - Construct enum type class DIE from ::llvm::DIEnumerator.
  void constructEnumTypeDIE(class DIE &Buffer, ::llvm::DICompositeType *CTy);

  /// constructMemberDIE - Construct member class DIE from ::llvm::DIDerivedType.
  void constructMemberDIE(class DIE &Buffer, ::llvm::DIDerivedType *DT);

  /// constructTemplateTypeParameterDIE - Construct new class DIE for the given
  /// ::llvm::DITemplateTypeParameter.
  void constructTemplateTypeParameterDIE(class DIE &Buffer,
                                         ::llvm::DITemplateTypeParameter *TP);

  /// constructTemplateValueParameterDIE - Construct new class DIE for the given
  /// ::llvm::DITemplateValueParameter.
  void constructTemplateValueParameterDIE(class DIE &Buffer,
                                          ::llvm::DITemplateValueParameter *TVP);

  /// getOrCreateStaticMemberDIE - Create new static data member class DIE.
  class DIE *getOrCreateStaticMemberDIE(::llvm::DIDerivedType *DT);

  /// Offset of the CUDie from beginning of debug info section.
  unsigned DebugInfoOffset;

  /// getLowerBoundDefault - Return the default lower bound for an array. If the
  /// DWARF version doesn't handle the language, return -1.
  int64_t getDefaultLowerBound() const;

  /// getDIEEntry - Returns the debug information entry for the specified
  /// debug variable.
  DIEEntry *getDIEEntry(const ::llvm::MDNode *N) const {
    return MDNodeToDIEEntryMap.lookup(N);
  }

  /// insertDIEEntry - Insert debug information entry into the map.
  void insertDIEEntry(const ::llvm::MDNode *N, DIEEntry *E) {
    MDNodeToDIEEntryMap.insert(::std::make_pair(N, E));
  }

  // getIndexTyDie - Get an anonymous type for index type.
  class DIE *getIndexTyDie() { return IndexTyDie; }

  // setIndexTyDie - Set D as anonymous type for index which can be reused
  // later.
  void setIndexTyDie(class DIE *D) { IndexTyDie = D; }

  /// createDIEEntry - Creates a new DIEEntry to be a proxy for a debug
  /// information entry.
  DIEEntry *createDIEEntry(class DIE *Entry);

  /// resolve - Look in the DwarfDebug map for the ::llvm::MDNode that
  /// corresponds to the reference.
  template <typename T> inline T *resolve(T *Ref) const {
    return DD->resolve(Ref);
  }

public:
  // Added for 1-step elf
  void buildLocation(const ::llvm::Instruction *, IGC::DbgVariable &, class DIE *);
  DIEBlock *buildPointer(const DbgVariable &, const VISAVariableLocation &);
  DIEBlock *buildSampler(const DbgVariable &, const VISAVariableLocation &);

  // buildSLM - Build expression for location described as offset in SLM memory.
  DIEBlock *buildSLM(const DbgVariable &, const VISAVariableLocation &,
                     class DIE *);
  DIEBlock *buildGeneral(const DbgVariable &, const VISAVariableLocation &,
                         const ::std::vector<DbgDecoder::LiveIntervalsVISA> *,
                         class DIE *);

private:
  bool buildPrivateBaseRegBased(const DbgVariable &, DIEBlock *,
                                const VISAVariableLocation &);
  bool buildFpBasedLoc(const DbgVariable &, DIEBlock *,
                       const VISAVariableLocation &);
  bool buildSlicedLoc(const DbgVariable &, DIEBlock *,
                      const VISAVariableLocation &,
                      const ::std::vector<DbgDecoder::LiveIntervalsVISA> *);
  bool buildValidVar(const DbgVariable &, DIEBlock *,
                     const VISAVariableLocation &,
                     const ::std::vector<DbgDecoder::LiveIntervalsVISA> *, bool);

  // Variables, used in buildGeneral-algorithm:
  bool emitLocation = false;
  DIEValue *skipOff = nullptr;
  unsigned int offsetTaken = 0;

  // Hold DISubprogram nodes that correspond to functions with out-of-line
  // definition.
  ::llvm::SmallPtrSet<::llvm::DISubprogram *, 10> ExtFunc;
};

} // namespace IGC
