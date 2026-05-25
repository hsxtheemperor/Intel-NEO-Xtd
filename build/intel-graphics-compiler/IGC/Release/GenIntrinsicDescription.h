/*========================== begin_copyright_notice ============================

Copyright (C) 2023 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/
#pragma once

#include "GenIntrinsicEnum.h"

namespace IGC
{

template<llvm::GenISAIntrinsic::ID id>
struct IntrinsicDescription;

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_2fto2bf>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_2fto2bf;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_assume_uniform>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_assume_uniform;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_bftof>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_bftof;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_CatchAllDebugLine>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_CatchAllDebugLine;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSCntrlPtInputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_DSCntrlPtInputVec;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSInputTessFactor>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_DSInputTessFactor;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSPatchConstInputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_DSPatchConstInputVec;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSinputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_GSinputVec;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSsystemValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_GSsystemValue;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSControlPointID>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_HSControlPointID;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSOutputCntrlPtInputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_HSOutputCntrlPtInputVec;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSPatchConstInputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_HSPatchConstInputVec;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSinputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_HSinputVec;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_ShaderInputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_ShaderInputVec;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_SystemValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_SystemValue;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_input>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_input;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DCL_inputVec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DCL_inputVec;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_dpas>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dpas;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_EmitHitAttributes>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_EmitHitAttributes;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_EndPrimitive>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_EndPrimitive;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ftobf>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftobf;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GetBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GetBufferPtr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GetImplicitBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GetImplicitBufferPtr;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GetLocalIdBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GetLocalIdBufferPtr;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GetGlobalBufferArg>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GetGlobalBufferArg;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GetPixelMask>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GetPixelMask;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GradientX>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GradientX;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GradientXfine>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GradientXfine;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GradientY>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GradientY;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GradientYfine>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GradientYfine;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GsCutControlHeader>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GsCutControlHeader;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GsStreamHeader>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GsStreamHeader;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Arg19,
        Arg20,
        Arg21,
        Arg22,
        Arg23,
        Arg24,
        Arg25,
        Arg26,
        Arg27,
        Arg28,
        Arg29,
        Arg30,
        Arg31,
        Arg32,
        Arg33,
        Arg34,
        Arg35,
        Arg36,
        Arg37,
        Arg38,
        Arg39,
        Arg40,
        Arg41,
        Arg42,
        Arg43,
        Arg44,
        Arg45,
        Arg46,
        Arg47,
        Arg48,
        Arg49,
        Arg50,
        Arg51,
        Arg52,
        Arg53,
        Arg54,
        Arg55,
        Arg56,
        Arg57,
        Arg58,
        Arg59,
        Arg60,
        Arg61,
        Arg62,
        Arg63,
        Arg64,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_HSURBPatchHeaderRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_HSURBPatchHeaderRead;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Divide>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_IEEE_Divide;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Sqrt>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_IEEE_Sqrt;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_InitDiscardMask>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_InitDiscardMask;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_InnerScalarTessFactors>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_InnerScalarTessFactors;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_Interpolant>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_Interpolant;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_Interpolate>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_Interpolate;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_Interpolate2>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_Interpolate2;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_IsHelperInvocation>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_IsHelperInvocation;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRead;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRectangleRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRectangleRead;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockWrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_MediaBlockWrite;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_OUTPUT>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OUTPUT;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_OUTPUTGS>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OUTPUTGS;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_OuterScalarTessFactors>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OuterScalarTessFactors;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_OutputTessControlPoint>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputTessControlPoint;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUT>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUT;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUTVEC>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUTVEC;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUT>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUT;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUTVEC>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUTVEC;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PatchConstantOutput>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PatchConstantOutput;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PixelPositionX>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PixelPositionX;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PixelPositionY>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PixelPositionY;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PullCentroidBarys>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PullCentroidBarys;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PullSampleIndexBarys>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PullSampleIndexBarys;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PullSnappedBarys>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PullSnappedBarys;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_QuadPrefix>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_QuadPrefix;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ROUNDNE>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ROUNDNE;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_RTDualBlendSource>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RTDualBlendSource;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_RTWrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RTWrite;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ReadFromReservedArgSpace>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ReadFromReservedArgSpace;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RenderTargetRead;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetReadSampleFreq>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RenderTargetReadSampleFreq;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_RuntimeValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RuntimeValue;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetX>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetX;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetY>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetY;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SaveInReservedArgSpace>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SaveInReservedArgSpace;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SetStackCallsBaseAddress>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SetStackCallsBaseAddress;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SetImplicitBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SetImplicitBufferPtr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SetGlobalBufferArg>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SetGlobalBufferArg;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SetDebugReg>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SetDebugReg;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SetLocalIdBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SetLocalIdBufferPtr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SetStream>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SetStream;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_StackAlloca>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_StackAlloca;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_VLAStackAlloca>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_VLAStackAlloca;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionBegin>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionBegin;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionEnd>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionEnd;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_URBRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_URBRead;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_URBReadOutput>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_URBReadOutput;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_URBWrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_URBWrite;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_UpdateDiscardMask>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_UpdateDiscardMask;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_WaveAll>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveAll;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_WaveBallot>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveBallot;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_WaveClustered>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveClustered;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_WaveInterleave>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveInterleave;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_WaveClusteredInterleave>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveClusteredInterleave;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_WaveInverseBallot>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveInverseBallot;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_WavePrefix>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WavePrefix;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_WaveShuffleIndex>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveShuffleIndex;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_WaveBroadcast>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WaveBroadcast;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_WorkGroupAny>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_WorkGroupAny;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_add_pair>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_add_pair;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_add_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_add_rtz;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterinc>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_atomiccounterinc;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterpredec>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_atomiccounterpredec;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_bfi>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_bfi;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_bfrev>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_bfrev;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhase>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhase;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhaseV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhaseV;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_cmpSADs>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_cmpSADs;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_cmpxchgatomicstructured>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_cmpxchgatomicstructured;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhases>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_createMessagePhases;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInit>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInit;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInitV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInitV;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesV;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_cycleCounter>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_cycleCounter;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_discard>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_discard;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_dp4a_ss>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dp4a_ss;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_dp4a_su>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dp4a_su;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_dp4a_us>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dp4a_us;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_dp4a_uu>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dp4a_uu;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_dummyInst>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dummyInst;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_dummyInstID>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dummyInstID;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_launder>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_launder;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_dwordatomicstructured>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dwordatomicstructured;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_eu_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_eu_id;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_eu_thread_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_eu_thread_id;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_eu_thread_pause>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_eu_thread_pause;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_evaluateSampler>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_evaluateSampler;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_extractMVAndSAD>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_extractMVAndSAD;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_f32tof16_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_f32tof16_rtz;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicraw>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicraw;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicrawA64>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicrawA64;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicstructured>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicstructured;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_firstbitHi>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_firstbitHi;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_firstbitLo>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_firstbitLo;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_firstbitShi>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_firstbitShi;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_floatatomicraw>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_floatatomicraw;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_floatatomicrawA64>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_floatatomicrawA64;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_floatatomicstructured>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_floatatomicstructured;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_flushsampler>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_flushsampler;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_fma_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fma_rtz;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_fma_rtp>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fma_rtp;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_fma_rtn>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fma_rtn;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_fsat>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fsat;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_usat>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_usat;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_isat>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_isat;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ftof_rte>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftof_rte;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtn>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftof_rtn;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtp>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftof_rtp;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftof_rtz;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rte>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftoi_rte;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtn>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtn;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtp>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtp;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rte>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftoui_rte;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtn>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtn;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtp>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtp;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleMlodptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleMlodptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleCMlodptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleCMlodptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleBCMlodptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleBCMlodptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleDCMlodptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleDCMlodptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_samplePOptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_samplePOptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_samplePOBptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_samplePOBptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_samplePOLptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_samplePOLptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_samplePOCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_samplePOCptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_samplePODptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_samplePODptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4Iptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4Iptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4Bptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4Bptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4Lptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4Lptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_samplePOLCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_samplePOLCptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4ICptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4ICptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4LCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4LCptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedBptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedBptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedIptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedIptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedICptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedICptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLCptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedCptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4IPOptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4IPOptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4BPOptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4BPOptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4LPOptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4LPOptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4ICPOptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4ICPOptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4LCPOptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4LCPOptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4Cptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4Cptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4POCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POCptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4POptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4POptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_gather4ptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_gather4ptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhase>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getMessagePhase;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseV;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseX>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseX;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseXV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseXV;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getR0>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getR0;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getPayloadHeader>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getPayloadHeader;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getWorkDim>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getWorkDim;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getNumWorkGroups>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getNumWorkGroups;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getGlobalSize>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getGlobalSize;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getLocalSize>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getLocalSize;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getEnqueuedLocalSize>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getEnqueuedLocalSize;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_X>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getLocalID_X;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Y>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Y;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Z>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Z;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getPrivateBase>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getPrivateBase;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getPrintfBuffer>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getPrintfBuffer;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getStageInGridOrigin>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getStageInGridOrigin;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getStageInGridSize>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getStageInGridSize;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getSyncBuffer>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getSyncBuffer;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getRtGlobalBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getRtGlobalBufferPtr;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getStackPointer>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getStackPointer;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getStackSizePerThread>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getStackSizePerThread;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getAssertBufferPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getAssertBufferPtr;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getSR0>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getSR0;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_getSR0_0>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_getSR0_0;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_globalSync>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_globalSync;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id_alloca>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id_alloca;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ibfe>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ibfe;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicraw>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicraw;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicrawA64>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicrawA64;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomictyped>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomictyped;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomictyped>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomictyped;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_imulH>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_imulH;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_intatomicraw>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_intatomicraw;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_intatomicrawA64>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_intatomicrawA64;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_intatomictyped>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_intatomictyped;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_floatatomictyped>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_floatatomictyped;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_is_uniform>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_is_uniform;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_itof_rtn>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_itof_rtn;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_itof_rtp>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_itof_rtp;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_itof_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_itof_rtz;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ldmcsptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldmcsptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldmsptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr16bit>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldmsptr16bit;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ldptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ldlptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldlptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ldraw_indexed>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldraw_indexed;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ldrawvector_indexed>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldrawvector_indexed;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ldstructured>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ldstructured;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_lodptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_lodptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_memoryfence>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_memoryfence;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_mov_identity>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_mov_identity;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_movcr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_movcr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_movflag>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_movflag;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_software_exception>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_software_exception;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_thread_exit>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_thread_exit;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_mul_pair>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_mul_pair;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_mul_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_mul_rtz;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_pair_to_ptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_pair_to_ptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_patchInstanceId>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_patchInstanceId;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ptr_to_pair>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ptr_to_pair;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_readsurfacetypeandformat>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_readsurfacetypeandformat;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_resinfoptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_resinfoptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_rsq>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_rsq;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleBCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleBCptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleBptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleBptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleCptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleDCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleDCptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleDptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleDptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleKillPix>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleKillPix;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleLCptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleLCptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleLptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleLptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleinfoptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleinfoptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sampleptr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sampleptr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseV;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseXV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseXV;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX_legacy>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX_legacy;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase_legacy>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase_legacy;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdBlockRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdBlockRead;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdBlockReadBindless>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdBlockReadBindless;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdBlockWrite;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWriteBindless>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdBlockWriteBindless;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhase>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhase;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhaseV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhaseV;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdLaneId>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdLaneId;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdLaneIdReplicate>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdLaneIdReplicate;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockRead;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockWrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockWrite;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdMediaRegionCopy>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdMediaRegionCopy;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhase>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhase;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhaseV>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhaseV;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleDown>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdShuffleDown;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleXor>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdShuffleXor;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_simdSize>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_simdSize;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_slice_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_slice_id;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_source_value>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_source_value;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_storeraw_indexed>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_storeraw_indexed;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_storerawvector_indexed>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_storerawvector_indexed;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_storestructured1>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_storestructured1;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_storestructured2>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_storestructured2;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_storestructured3>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_storestructured3;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_storestructured4>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_storestructured4;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sub_group_dpas>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sub_group_dpas;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_sub_pair>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_sub_pair;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_subslice_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_subslice_id;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_logical_subslice_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_logical_subslice_id;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_dual_subslice_id>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_dual_subslice_id;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_signal>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_signal;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_wait>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_wait;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_typedmemoryfence>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_typedmemoryfence;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_typedread>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_typedread;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_typedwrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_typedwrite;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_uaddc>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_uaddc;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_uavSerializeAll>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_uavSerializeAll;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_uavSerializeOnResID>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_uavSerializeOnResID;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ubfe>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ubfe;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtn>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_uitof_rtn;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtp>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_uitof_rtp;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtz>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_uitof_rtz;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_umulH>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_umulH;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_usubb>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_usubb;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vaBoolCentroid>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaBoolCentroid;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vaBoolSum>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaBoolSum;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vaCentroid>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaCentroid;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vaConvolve>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaConvolve;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x1>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x1;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x4>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x4;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vaDilate>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaDilate;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vaErode>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaErode;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vaMinMax>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaMinMax;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vaMinMaxFilter>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vaMinMaxFilter;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vectorUniform>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vectorUniform;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR2>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR2;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME2>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME2;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC2>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC2;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_wavebarrier>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_wavebarrier;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_frc>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_frc;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_staticConstantPatchValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_staticConstantPatchValue;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_HDCCCSFastClear>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_HDCCCSFastClear;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockRead>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockRead;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWrite;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetch>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetch;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCreateAddrPayload>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCreateAddrPayload;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCopyAddrPayload>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCopyAddrPayload;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockSetAddrPayloadField>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockSetAddrPayloadField;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockReadAddrPayload>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockReadAddrPayload;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWriteAddrPayload>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWriteAddrPayload;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetchAddrPayload>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetchAddrPayload;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP32>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP32;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP64>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP64;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicInts>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicInts;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCFence>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCFence;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCLoad>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCLoad;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadWithSideEffects>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCLoadWithSideEffects;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadCmask>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCLoadCmask;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadBlock>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCLoadBlock;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadStatus>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCLoadStatus;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCPrefetch>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCPrefetch;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCSimdBlockPrefetch>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCSimdBlockPrefetch;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCStore>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCStore;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreCmask>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCStoreCmask;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreBlock>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LSCStoreBlock;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_bf8tohf>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_bf8tohf;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_HDCuncompressedwrite>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_HDCuncompressedwrite;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_systemmemoryfence>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_systemmemoryfence;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_urbfence>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_urbfence;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_signal>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_signal;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_wait>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_wait;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_hftobf8>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_hftobf8;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ftotf32>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ftotf32;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_srnd_hftobf8>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_srnd_hftobf8;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_srnd_ftohf>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_srnd_ftohf;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveData>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveData;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveDataInput>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveDataInput;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshSivDataInput>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputMeshSivDataInput;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexData>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexData;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexDataInput>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexDataInput;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskData>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputTaskData;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskDataInput>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_OutputTaskDataInput;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_AcceptHitAndEndSearchHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_AcceptHitAndEndSearchHL;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_AllocaNumber>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_AllocaNumber;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_AllocateRayQuery>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_AllocateRayQuery;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_AsyncStackID>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_AsyncStackID;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_AsyncStackPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_AsyncStackPtr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SyncStackPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SyncStackPtr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_BindlessThreadDispatch>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_BindlessThreadDispatch;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_CallShaderHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_CallShaderHL;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DispatchDimensions>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DispatchDimensions;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_DispatchRayIndex>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_DispatchRayIndex;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_FillValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_FillValue;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GetShaderRecordPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GetShaderRecordPtr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GlobalBufferPointer>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GlobalBufferPointer;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_GlobalRootSignatureValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_GlobalRootSignatureValue;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_HitKind>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_HitKind;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_IgnoreHitHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_IgnoreHitHL;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_InlinedData>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_InlinedData;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LocalBufferPointer>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LocalBufferPointer;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_LocalRootSignatureValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_LocalRootSignatureValue;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PayloadPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PayloadPtr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PreemptionEnable>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PreemptionEnable;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_PreemptionDisable>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_PreemptionDisable;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_RayQueryCheck>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RayQueryCheck;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_RayQueryRelease>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RayQueryRelease;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ContinuationSignpost>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ContinuationSignpost;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_RTStatefulBTIAndOffset>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RTStatefulBTIAndOffset;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_RayInfo>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RayInfo;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_RayTCurrent>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_RayTCurrent;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ReportHitHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ReportHitHL;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SpillValue>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SpillValue;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_StackIDRelease>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_StackIDRelease;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_StackSize>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_StackSize;

    enum class Argument : uint32_t
    {
        Count = 0
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SWHotZonePtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SWHotZonePtr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SWStackPtr>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SWStackPtr;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsync>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsync;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySync>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRaySync;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceed>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceed;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ShadowMemoryToSyncStack>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ShadowMemoryToSyncStack;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_SyncStackToShadowMemory>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_SyncStackToShadowMemory;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_ReadTraceRaySync>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_ReadTraceRaySync;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsyncHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsyncHL;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Arg13,
        Arg14,
        Arg15,
        Arg16,
        Arg17,
        Arg18,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineAbort>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineAbort;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCandidateType>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCandidateType;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitNonOpaqueTriangleHit>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitNonOpaqueTriangleHit;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitProceduralPrimitiveHit>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitProceduralPrimitiveHit;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommittedStatus>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommittedStatus;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineHL;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Arg3,
        Arg4,
        Arg5,
        Arg6,
        Arg7,
        Arg8,
        Arg9,
        Arg10,
        Arg11,
        Arg12,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceedHL>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceedHL;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineRayInfo>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineRayInfo;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_rt_swstack_offset>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_rt_swstack_offset;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_FPBinaryOperator>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_FPBinaryOperator;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Arg1,
        Arg2,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_bitcastfromstruct>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_bitcastfromstruct;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_bitcasttostruct>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_bitcasttostruct;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

template<>
class IntrinsicDescription<llvm::GenISAIntrinsic::ID::GenISA_inv>
{
public:
    static constexpr llvm::GenISAIntrinsic::ID scID = llvm::GenISAIntrinsic::ID::GenISA_inv;

    enum class Argument : uint32_t
    {
        Arg0 = 0,
        Count
    };
};

} // namespace IGC