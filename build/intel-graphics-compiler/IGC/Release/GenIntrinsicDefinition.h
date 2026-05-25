/*========================== begin_copyright_notice ============================

Copyright (C) 2023 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/
#pragma once

#include "GenIntrinsicDescription.h"
#include "StringMacros.hpp"
#include "LlvmTypesMapping.h"

#include "common/LLVMWarningsPush.hpp"
#include "llvm/IR/Attributes.h"
#include "common/LLVMWarningsPop.hpp"

#include <string_view>
#include <array>

namespace IGC
{

static constexpr std::string_view scIntrinsicPrefix = "llvm.genx.GenISA.";

template<llvm::GenISAIntrinsic::ID id>
struct IntrinsicDefinition;

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_2fto2bf>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_2fto2bf;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_assume_uniform>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_assume_uniform;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bftof>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_bftof;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_CatchAllDebugLine>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_CatchAllDebugLine;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSCntrlPtInputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_DSCntrlPtInputVec;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSInputTessFactor>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_DSInputTessFactor;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSPatchConstInputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_DSPatchConstInputVec;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSinputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_GSinputVec;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSsystemValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_GSsystemValue;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSControlPointID>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_HSControlPointID;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSOutputCntrlPtInputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_HSOutputCntrlPtInputVec;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSPatchConstInputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_HSPatchConstInputVec;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSinputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_HSinputVec;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_ShaderInputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_ShaderInputVec;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_SystemValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_SystemValue;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        AnyTypeHolderT<FloatTypeHolderT<32>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_input>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_input;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_inputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_inputVec;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dpas>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dpas;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_EmitHitAttributes>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_EmitHitAttributes;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_EndPrimitive>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_EndPrimitive;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftobf>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftobf;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GetBufferPtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetImplicitBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GetImplicitBufferPtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetLocalIdBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GetLocalIdBufferPtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetGlobalBufferArg>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GetGlobalBufferArg;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetPixelMask>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GetPixelMask;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<1>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientX>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GradientX;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientXfine>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GradientXfine;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientY>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GradientY;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientYfine>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GradientYfine;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GsCutControlHeader>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GsCutControlHeader;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GsStreamHeader>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GsStreamHeader;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HSURBPatchHeaderRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_HSURBPatchHeaderRead;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 8>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Divide>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_IEEE_Divide;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Sqrt>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_IEEE_Sqrt;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InitDiscardMask>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_InitDiscardMask;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InnerScalarTessFactors>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_InnerScalarTessFactors;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolant>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_Interpolant;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolate>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_Interpolate;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolate2>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_Interpolate2;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType,
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IsHelperInvocation>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_IsHelperInvocation;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<1>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRead;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRectangleRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRectangleRead;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockWrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_MediaBlockWrite;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OUTPUT>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OUTPUT;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoDuplicate,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OUTPUTGS>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OUTPUTGS;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OuterScalarTessFactors>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OuterScalarTessFactors;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTessControlPoint>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputTessControlPoint;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUT>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUT;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUTVEC>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUTVEC;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<16>::scType,
        IntegerTypeHolderT<16>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUT>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUT;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUTVEC>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUTVEC;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PatchConstantOutput>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PatchConstantOutput;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PixelPositionX>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PixelPositionX;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<16>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PixelPositionY>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PixelPositionY;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<16>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullCentroidBarys>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PullCentroidBarys;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullSampleIndexBarys>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PullSampleIndexBarys;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullSnappedBarys>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PullSnappedBarys;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_QuadPrefix>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_QuadPrefix;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<8>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ROUNDNE>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ROUNDNE;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTDualBlendSource>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RTDualBlendSource;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType,
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTWrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RTWrite;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReadFromReservedArgSpace>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ReadFromReservedArgSpace;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        AnyTypeHolderT<>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RenderTargetRead;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetReadSampleFreq>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RenderTargetReadSampleFreq;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RuntimeValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RuntimeValue;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        AnyTypeHolderT<FloatTypeHolderT<32>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetX>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetX;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetY>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetY;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SaveInReservedArgSpace>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SaveInReservedArgSpace;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        AnyTypeHolderT<>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        AnyTypeHolderT<>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetStackCallsBaseAddress>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SetStackCallsBaseAddress;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetImplicitBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SetImplicitBufferPtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetGlobalBufferArg>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SetGlobalBufferArg;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetDebugReg>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SetDebugReg;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetLocalIdBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SetLocalIdBufferPtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetStream>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SetStream;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackAlloca>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_StackAlloca;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<IntegerTypeHolderT<8>, 0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_VLAStackAlloca>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_VLAStackAlloca;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<IntegerTypeHolderT<8>, 0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionBegin>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionBegin;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionEnd>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionEnd;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_URBRead;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 8>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBReadOutput>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_URBReadOutput;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 8>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBWrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_URBWrite;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UpdateDiscardMask>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_UpdateDiscardMask;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<1>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveAll>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveAll;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<8>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveBallot>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveBallot;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveClustered>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveClustered;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<8>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveInterleave>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveInterleave;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<8>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveClusteredInterleave>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveClusteredInterleave;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<8>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveInverseBallot>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveInverseBallot;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<1>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WavePrefix>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WavePrefix;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<8>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveShuffleIndex>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveShuffleIndex;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveBroadcast>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveBroadcast;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WorkGroupAny>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WorkGroupAny;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_add_pair>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_add_pair;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        StructTypeHolderT<MemberTypeListHolderT<IntegerTypeHolderT<32>, IntegerTypeHolderT<32>>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_add_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_add_rtz;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterinc>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_atomiccounterinc;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterpredec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_atomiccounterpredec;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bfi>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_bfi;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bfrev>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_bfrev;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhase>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhase;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhaseV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhaseV;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cmpSADs>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_cmpSADs;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cmpxchgatomicstructured>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_cmpxchgatomicstructured;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhases>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_createMessagePhases;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInit>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInit;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInitV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInitV;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesV;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cycleCounter>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_cycleCounter;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<64>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_discard>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_discard;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_ss>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dp4a_ss;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_su>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dp4a_su;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_us>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dp4a_us;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_uu>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dp4a_uu;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dummyInst>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dummyInst;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dummyInstID>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dummyInstID;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_launder>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_launder;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dwordatomicstructured>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dwordatomicstructured;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_eu_id;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_thread_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_eu_thread_id;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_thread_pause>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_eu_thread_pause;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_evaluateSampler>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_evaluateSampler;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_extractMVAndSAD>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_extractMVAndSAD;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_f32tof16_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_f32tof16_rtz;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicraw>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicraw;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicrawA64>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicrawA64;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicstructured>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicstructured;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitHi>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_firstbitHi;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitLo>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_firstbitLo;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitShi>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_firstbitShi;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicraw>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_floatatomicraw;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicrawA64>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_floatatomicrawA64;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicstructured>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_floatatomicstructured;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_flushsampler>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_flushsampler;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fma_rtz;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtp>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fma_rtp;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtn>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fma_rtn;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fsat>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fsat;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_usat>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_usat;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_isat>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_isat;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rte>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftof_rte;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtn>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftof_rtn;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtp>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftof_rtp;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftof_rtz;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rte>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftoi_rte;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtn>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtn;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtp>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtp;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rte>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftoui_rte;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtn>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtn;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtp>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtp;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleMlodptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleMlodptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleCMlodptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleCMlodptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBCMlodptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleBCMlodptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDCMlodptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleDCMlodptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_samplePOptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOBptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_samplePOBptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOLptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_samplePOLptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_samplePOCptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePODptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_samplePODptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Iptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4Iptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Bptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4Bptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Lptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4Lptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOLCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_samplePOLCptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ICptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4ICptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4LCptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedBptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedBptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedIptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedIptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedICptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedICptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLCptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedCptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4IPOptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4IPOptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4BPOptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4BPOptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LPOptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4LPOptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ICPOptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4ICPOptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LCPOptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4LCPOptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Cptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4Cptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POCptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4ptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhase>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getMessagePhase;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseV;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseX>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseX;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseXV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseXV;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getR0>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getR0;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getPayloadHeader>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getPayloadHeader;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getWorkDim>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getWorkDim;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getNumWorkGroups>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getNumWorkGroups;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getGlobalSize>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getGlobalSize;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalSize>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getLocalSize;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getEnqueuedLocalSize>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getEnqueuedLocalSize;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_X>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getLocalID_X;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<16>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Y>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Y;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<16>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Z>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Z;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<16>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getPrivateBase>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getPrivateBase;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getPrintfBuffer>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getPrintfBuffer;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStageInGridOrigin>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getStageInGridOrigin;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStageInGridSize>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getStageInGridSize;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSyncBuffer>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getSyncBuffer;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getRtGlobalBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getRtGlobalBufferPtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStackPointer>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getStackPointer;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<64>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStackSizePerThread>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getStackSizePerThread;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getAssertBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getAssertBufferPtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSR0>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getSR0;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSR0_0>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getSR0_0;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_globalSync>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_globalSync;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id_alloca>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id_alloca;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ibfe>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ibfe;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicraw>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicraw;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicrawA64>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicrawA64;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomictyped>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomictyped;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomictyped>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomictyped;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_imulH>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_imulH;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomicraw>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_intatomicraw;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomicrawA64>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_intatomicrawA64;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomictyped>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_intatomictyped;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomictyped>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_floatatomictyped;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_is_uniform>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_is_uniform;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<1>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        AnyTypeHolderT<>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtn>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_itof_rtn;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtp>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_itof_rtp;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_itof_rtz;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmcsptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldmcsptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldmsptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr16bit>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldmsptr16bit;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<16>::scType,
        IntegerTypeHolderT<16>::scType,
        IntegerTypeHolderT<16>::scType,
        IntegerTypeHolderT<16>::scType,
        IntegerTypeHolderT<16>::scType,
        IntegerTypeHolderT<16>::scType,
        IntegerTypeHolderT<16>::scType,
        IntegerTypeHolderT<16>::scType,
        IntegerTypeHolderT<16>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldlptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldlptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldraw_indexed>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldraw_indexed;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        AnyTypeHolderT<FloatTypeHolderT<32>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldrawvector_indexed>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldrawvector_indexed;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldstructured>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldstructured;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_lodptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_lodptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_memoryfence>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_memoryfence;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mov_identity>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_mov_identity;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_movcr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_movcr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_movflag>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_movflag;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_software_exception>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_software_exception;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_thread_exit>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_thread_exit;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mul_pair>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_mul_pair;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        StructTypeHolderT<MemberTypeListHolderT<IntegerTypeHolderT<32>, IntegerTypeHolderT<32>>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mul_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_mul_rtz;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_pair_to_ptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_pair_to_ptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_patchInstanceId>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_patchInstanceId;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ptr_to_pair>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ptr_to_pair;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        StructTypeHolderT<MemberTypeListHolderT<IntegerTypeHolderT<32>, IntegerTypeHolderT<32>>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_readsurfacetypeandformat>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_readsurfacetypeandformat;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<IntegerTypeHolderT<32>, 2>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_resinfoptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_resinfoptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<IntegerTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_rsq>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_rsq;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleBCptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleBptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleCptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleDCptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleDptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleKillPix>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleKillPix;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleLCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleLCptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleLptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleLptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleinfoptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleinfoptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<IntegerTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleptr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        ReferenceTypeHolderT<1>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseV;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseXV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseXV;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX_legacy>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX_legacy;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase_legacy>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase_legacy;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdBlockRead;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockReadBindless>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdBlockReadBindless;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdBlockWrite;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWriteBindless>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdBlockWriteBindless;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhase>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhase;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhaseV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhaseV;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdLaneId>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdLaneId;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<16>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdLaneIdReplicate>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdLaneIdReplicate;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<16>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockRead;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockWrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockWrite;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaRegionCopy>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdMediaRegionCopy;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhase>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhase;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhaseV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhaseV;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleDown>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdShuffleDown;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleXor>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdShuffleXor;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSize>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdSize;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_slice_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_slice_id;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_source_value>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_source_value;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storeraw_indexed>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_storeraw_indexed;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        AnyTypeHolderT<FloatTypeHolderT<32>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storerawvector_indexed>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_storerawvector_indexed;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured1>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_storestructured1;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured2>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_storestructured2;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured3>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_storestructured3;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured4>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_storestructured4;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sub_group_dpas>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sub_group_dpas;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory,
        llvm::Attribute::WillReturn
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sub_pair>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sub_pair;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        StructTypeHolderT<MemberTypeListHolderT<IntegerTypeHolderT<32>, IntegerTypeHolderT<32>>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_subslice_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_subslice_id;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_logical_subslice_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_logical_subslice_id;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dual_subslice_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dual_subslice_id;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_signal>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_signal;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_wait>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_wait;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedmemoryfence>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_typedmemoryfence;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedread>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_typedread;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedwrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_typedwrite;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uaddc>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_uaddc;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uavSerializeAll>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_uavSerializeAll;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uavSerializeOnResID>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_uavSerializeOnResID;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ubfe>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ubfe;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtn>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_uitof_rtn;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtp>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_uitof_rtp;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_uitof_rtz;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_umulH>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_umulH;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_usubb>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_usubb;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType,
        ReferenceTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaBoolCentroid>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaBoolCentroid;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<IntegerTypeHolderT<8>, 3>::scType,
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType,
        VectorTypeHolderT<IntegerTypeHolderT<32>, 2>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaBoolSum>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaBoolSum;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<IntegerTypeHolderT<8>, 3>::scType,
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType,
        VectorTypeHolderT<IntegerTypeHolderT<32>, 2>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaCentroid>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaCentroid;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<IntegerTypeHolderT<8>, 3>::scType,
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType,
        VectorTypeHolderT<IntegerTypeHolderT<32>, 2>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolve>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaConvolve;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<IntegerTypeHolderT<8>, 3>::scType,
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x1>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x1;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<16>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x4>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x4;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<IntegerTypeHolderT<16>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaDilate>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaDilate;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<IntegerTypeHolderT<8>, 3>::scType,
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaErode>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaErode;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<IntegerTypeHolderT<8>, 3>::scType,
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaMinMax>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaMinMax;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<IntegerTypeHolderT<8>, 3>::scType,
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaMinMaxFilter>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaMinMaxFilter;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<IntegerTypeHolderT<8>, 3>::scType,
        VectorTypeHolderT<FloatTypeHolderT<32>, 2>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vectorUniform>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vectorUniform;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR2>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR2;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<IntegerTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<IntegerTypeHolderT<32>, 4>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME2>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME2;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC2>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC2;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<IntegerTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<IntegerTypeHolderT<32>, 4>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_wavebarrier>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_wavebarrier;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_frc>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_frc;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_staticConstantPatchValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_staticConstantPatchValue;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        AnyTypeHolderT<>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HDCCCSFastClear>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_HDCCCSFastClear;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        VectorTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockRead;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<64>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWrite;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<64>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetch>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetch;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<64>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCreateAddrPayload>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCreateAddrPayload;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<64>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::WillReturn,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCopyAddrPayload>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCopyAddrPayload;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockSetAddrPayloadField>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockSetAddrPayloadField;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::WillReturn
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockReadAddrPayload>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockReadAddrPayload;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::WillReturn
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWriteAddrPayload>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWriteAddrPayload;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::WillReturn
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetchAddrPayload>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetchAddrPayload;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<1>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::WillReturn
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP32>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP32;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP64>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP64;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicInts>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicInts;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType,
        IntegerTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCFence>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCFence;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoad>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCLoad;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadWithSideEffects>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCLoadWithSideEffects;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadCmask>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCLoadCmask;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadBlock>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCLoadBlock;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadStatus>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCLoadStatus;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<1>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCPrefetch>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCPrefetch;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCSimdBlockPrefetch>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCSimdBlockPrefetch;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Memory,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStore>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCStore;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreCmask>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCStoreCmask;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreBlock>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCStoreBlock;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bf8tohf>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_bf8tohf;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HDCuncompressedwrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_HDCuncompressedwrite;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_systemmemoryfence>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_systemmemoryfence;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_urbfence>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_urbfence;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_signal>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_signal;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_wait>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_wait;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hftobf8>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_hftobf8;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftotf32>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftotf32;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_srnd_hftobf8>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_srnd_hftobf8;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        IntegerTypeHolderT<0>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_srnd_ftohf>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_srnd_ftohf;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<0>::scType,
        IntegerTypeHolderT<0>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveData>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveData;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveDataInput>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveDataInput;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshSivDataInput>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputMeshSivDataInput;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexData>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexData;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexDataInput>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexDataInput;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskData>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputTaskData;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskDataInput>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputTaskDataInput;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        VectorTypeHolderT<FloatTypeHolderT<32>, 4>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AcceptHitAndEndSearchHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_AcceptHitAndEndSearchHL;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AllocaNumber>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_AllocaNumber;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AllocateRayQuery>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_AllocateRayQuery;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AsyncStackID>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_AsyncStackID;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<16>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AsyncStackPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_AsyncStackPtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoDuplicate,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SyncStackPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SyncStackPtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoDuplicate,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_BindlessThreadDispatch>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_BindlessThreadDispatch;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<16>::scType,
        IntegerTypeHolderT<64>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_CallShaderHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_CallShaderHL;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DispatchDimensions>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DispatchDimensions;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DispatchRayIndex>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DispatchRayIndex;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_FillValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_FillValue;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<64>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetShaderRecordPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GetShaderRecordPtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<IntegerTypeHolderT<8>, 1>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<IntegerTypeHolderT<8>, 0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GlobalBufferPointer>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GlobalBufferPointer;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GlobalRootSignatureValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GlobalRootSignatureValue;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        AnyTypeHolderT<FloatTypeHolderT<32>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HitKind>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_HitKind;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IgnoreHitHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_IgnoreHitHL;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InlinedData>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_InlinedData;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LocalBufferPointer>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LocalBufferPointer;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LocalRootSignatureValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LocalRootSignatureValue;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        AnyTypeHolderT<FloatTypeHolderT<32>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PayloadPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PayloadPtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PreemptionEnable>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PreemptionEnable;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PreemptionDisable>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PreemptionDisable;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayQueryCheck>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RayQueryCheck;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayQueryRelease>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RayQueryRelease;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::Convergent,
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ContinuationSignpost>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ContinuationSignpost;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTStatefulBTIAndOffset>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RTStatefulBTIAndOffset;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayInfo>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RayInfo;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        AnyTypeHolderT<FloatTypeHolderT<32>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayTCurrent>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RayTCurrent;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        AnyTypeHolderT<FloatTypeHolderT<32>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReportHitHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ReportHitHL;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<1>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SpillValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SpillValue;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType,
        IntegerTypeHolderT<64>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackIDRelease>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_StackIDRelease;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<16>::scType,
        IntegerTypeHolderT<1>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackSize>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_StackSize;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<16>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SWHotZonePtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SWHotZonePtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoDuplicate,
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SWStackPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SWStackPtr;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsync>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsync;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySync>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRaySync;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceed>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceed;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ShadowMemoryToSyncStack>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ShadowMemoryToSyncStack;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SyncStackToShadowMemory>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SyncStackToShadowMemory;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<1>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReadTraceRaySync>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ReadTraceRaySync;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsyncHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsyncHL;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineAbort>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineAbort;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCandidateType>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCandidateType;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitNonOpaqueTriangleHit>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitNonOpaqueTriangleHit;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitProceduralPrimitiveHit>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitProceduralPrimitiveHit;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommittedStatus>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommittedStatus;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<32>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineHL;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        EmptyTypeHolderT::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        PointerTypeHolderT<AnyTypeHolderT<>>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        FloatTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceedHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceedHL;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<1>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineRayInfo>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineRayInfo;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        AnyTypeHolderT<FloatTypeHolderT<32>>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_rt_swstack_offset>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_rt_swstack_offset;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_FPBinaryOperator>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_FPBinaryOperator;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType,
        ReferenceTypeHolderT<0>::scType,
        IntegerTypeHolderT<32>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bitcastfromstruct>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_bitcastfromstruct;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        IntegerTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        AnyTypeHolderT<>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bitcasttostruct>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_bitcasttostruct;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        AnyTypeHolderT<>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        IntegerTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

template<>
class IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_inv>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_inv;
    using DescriptionT = IntrinsicDescription<scID>;
    using Argument = DescriptionT::Argument;

    static const char* scFunctionRootName;

    static constexpr TypeDescription scResTypes{
        FloatTypeHolderT<0>::scType
    };

    static constexpr std::array<TypeDescription, static_cast<uint32_t>(Argument::Count)> scArgumentTypes{
        ReferenceTypeHolderT<0>::scType
    };
    static const char* scMainComment;
    static const char* scResultComment;

    static const std::array<const char*, static_cast<uint32_t>(Argument::Count)> scArgumentComments;

    static constexpr std::array scAttributeKinds = {
        llvm::Attribute::NoUnwind,
        llvm::Attribute::Memory
    };
};

} // namespace IGC
