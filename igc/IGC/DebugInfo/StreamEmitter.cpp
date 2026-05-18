/*========================== begin_copyright_notice ============================

Copyright (C) 2017-2023 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

/*========================== begin_copyright_notice ============================

This file is distributed under the University of Illinois Open Source License.
See LICENSE.TXT for details.

============================= end_copyright_notice ===========================*/

// clang-format off
#include "common/LLVMWarningsPush.hpp"
#include "llvmWrapper/ADT/STLExtras.h"
#include "llvmWrapper/MC/MCStreamer.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/GlobalValue.h"
#include "llvm/MC/MCAsmBackend.h"
#include "llvm/MC/MCAsmInfoELF.h"
#include "llvm/MC/MCCodeEmitter.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCELFObjectWriter.h"
#include "llvm/MC/MCExpr.h"
#include "llvm/MC/MCObjectFileInfo.h"
#include "llvm/MC/MCObjectWriter.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCSection.h"
#include "llvm/MC/MCStreamer.h"
#include "llvm/MC/MCSymbol.h"
#include "llvm/MC/MCValue.h"
#include "llvm/Support/SourceMgr.h"
#include "llvmWrapper/Support/TargetRegistry.h"
#include "common/LLVMWarningsPop.hpp"
#include "llvm/MC/MCFixup.h"

// clang-format on

#include "StreamEmitter.hpp"
#include "DIE.hpp"
#include "DwarfDebug.hpp"

#include "Probe/Assertion.h"

#define DEBUG_TYPE "dwarfdebug"


using namespace llvm;
using namespace IGC;

namespace IGC {

///////////////////////////////////////////////////////////////////////////////
// Following classes extend abstract MC classes.
// These classes are needed to create concrete instance of MCStreamer.
///////////////////////////////////////////////////////////////////////////////


class VISAMCAsmInfo : public MCAsmInfoELF {
public:
  VISAMCAsmInfo(unsigned int pointerSize) : MCAsmInfoELF() {
    DwarfUsesRelocationsAcrossSections = true;
    CodePointerSize = pointerSize;
  }
};

class VISAELFObjectWriter : public MCELFObjectTargetWriter {
public:
  VISAELFObjectWriter(bool is64Bit, uint8_t osABI, uint16_t eMachine,
                      bool hasRelocationAddend)
      : MCELFObjectTargetWriter(is64Bit, osABI, eMachine, hasRelocationAddend) {}

  unsigned getRelocType(const MCFixup &Fixup, const MCValue &Target,
                        bool IsPCRel) const override {
    uint32_t specifier = Target.getSpecifier();
    unsigned type = ELF::R_X86_64_NONE;

    if (is64Bit()) {
      if (IsPCRel) {
        switch (Fixup.getKind()) {
        default:
          IGC_ASSERT_EXIT_MESSAGE(0, "invalid fixup kind!");
        case FK_Data_8: type = ELF::R_X86_64_PC64; break;
        case FK_Data_4:
          if      (specifier == 0)  type = ELF::R_X86_64_PC32;
          else                      type = ELF::R_X86_64_PC32;
          break;
        case FK_Data_2: type = ELF::R_X86_64_PC16; break;
        case FK_Data_1: type = ELF::R_X86_64_PC8;  break;
        }
      } else {
        switch (Fixup.getKind()) {
        default:
          IGC_ASSERT_EXIT_MESSAGE(0, "invalid fixup kind!");
        case FK_Data_8: type = ELF::R_X86_64_64; break;
        case FK_Data_4: type = ELF::R_X86_64_32; break;
        case FK_Data_2: type = ELF::R_X86_64_16; break;
        case FK_Data_1: type = ELF::R_X86_64_8;  break;
        }
      }
    } else {
      if (IsPCRel) {
        switch (Fixup.getKind()) {
        case FK_Data_4: type = ELF::R_386_PC32; break;
        default: IGC_ASSERT_EXIT_MESSAGE(0, "invalid fixup kind!");
        }
      } else {
        switch (Fixup.getKind()) {
        case FK_Data_4: type = ELF::R_386_32; break;
        case FK_Data_2: type = ELF::R_386_16; break;
        case FK_Data_1: type = ELF::R_386_8;  break;
        default: IGC_ASSERT_EXIT_MESSAGE(0, "invalid fixup kind!");
        }
      }
    }
    return type;
  }
};

class VISAMCCodeEmitter : public MCCodeEmitter {
public:
  VISAMCCodeEmitter() = default;
  void encodeInstruction(const MCInst &Inst, SmallVectorImpl<char> &CB,
                       SmallVectorImpl<MCFixup> &Fixups,
                       const MCSubtargetInfo &STI) const override{
    IGC_ASSERT_EXIT_MESSAGE(0, "Unimplemented");
  }
};

} // namespace IGC