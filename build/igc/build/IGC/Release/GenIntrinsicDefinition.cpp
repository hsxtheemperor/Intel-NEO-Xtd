/*========================== begin_copyright_notice ============================

Copyright (C) 2023 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

#include "GenIntrinsicDefinition.h"

namespace IGC
{

const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_2fto2bf>::scFunctionRootName =
    "llvm.genx.GenISA.2fto2bf";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_2fto2bf>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_2fto2bf>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_2fto2bf>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_2fto2bf>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_assume_uniform>::scFunctionRootName =
    "llvm.genx.GenISA.assume.uniform";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_assume_uniform>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_assume_uniform>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_assume_uniform>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_assume_uniform>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bftof>::scFunctionRootName =
    "llvm.genx.GenISA.bftof";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bftof>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bftof>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bftof>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bftof>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_CatchAllDebugLine>::scFunctionRootName =
    "llvm.genx.GenISA.CatchAllDebugLine";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_CatchAllDebugLine>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_CatchAllDebugLine>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSCntrlPtInputVec>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.DSCntrlPtInputVec";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSCntrlPtInputVec>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSCntrlPtInputVec>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSCntrlPtInputVec>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSCntrlPtInputVec>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSInputTessFactor>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.DSInputTessFactor";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSInputTessFactor>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSInputTessFactor>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSInputTessFactor>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSInputTessFactor>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSPatchConstInputVec>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.DSPatchConstInputVec";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSPatchConstInputVec>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSPatchConstInputVec>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSPatchConstInputVec>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_DSPatchConstInputVec>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSinputVec>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.GSinputVec";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSinputVec>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSinputVec>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSinputVec>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSinputVec>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSsystemValue>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.GSsystemValue";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSsystemValue>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSsystemValue>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSsystemValue>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_GSsystemValue>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSControlPointID>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.HSControlPointID";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSControlPointID>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSControlPointID>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSOutputCntrlPtInputVec>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.HSOutputCntrlPtInputVec";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSOutputCntrlPtInputVec>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSOutputCntrlPtInputVec>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSOutputCntrlPtInputVec>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSOutputCntrlPtInputVec>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSPatchConstInputVec>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.HSPatchConstInputVec";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSPatchConstInputVec>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSPatchConstInputVec>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSPatchConstInputVec>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSPatchConstInputVec>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSinputVec>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.HSinputVec";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSinputVec>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSinputVec>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSinputVec>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_HSinputVec>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_ShaderInputVec>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.ShaderInputVec";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_ShaderInputVec>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_ShaderInputVec>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_ShaderInputVec>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_ShaderInputVec>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_SystemValue>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.SystemValue";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_SystemValue>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_SystemValue>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_SystemValue>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_SystemValue>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_input>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.input";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_input>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_input>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_input>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_input>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_inputVec>::scFunctionRootName =
    "llvm.genx.GenISA.DCL.inputVec";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_inputVec>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_inputVec>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_inputVec>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DCL_inputVec>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dpas>::scFunctionRootName =
    "llvm.genx.GenISA.dpas";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dpas>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dpas>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dpas>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dpas>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_EmitHitAttributes>::scFunctionRootName =
    "llvm.genx.GenISA.EmitHitAttributes";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_EmitHitAttributes>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_EmitHitAttributes>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_EndPrimitive>::scFunctionRootName =
    "llvm.genx.GenISA.EndPrimitive";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_EndPrimitive>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_EndPrimitive>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_EndPrimitive>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_EndPrimitive>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftobf>::scFunctionRootName =
    "llvm.genx.GenISA.ftobf";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftobf>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftobf>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftobf>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftobf>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetBufferPtr>::scFunctionRootName =
    "llvm.genx.GenISA.GetBufferPtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetBufferPtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetBufferPtr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetBufferPtr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetBufferPtr>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetImplicitBufferPtr>::scFunctionRootName =
    "llvm.genx.GenISA.GetImplicitBufferPtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetImplicitBufferPtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetImplicitBufferPtr>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetLocalIdBufferPtr>::scFunctionRootName =
    "llvm.genx.GenISA.GetLocalIdBufferPtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetLocalIdBufferPtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetLocalIdBufferPtr>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetGlobalBufferArg>::scFunctionRootName =
    "llvm.genx.GenISA.GetGlobalBufferArg";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetGlobalBufferArg>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetGlobalBufferArg>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetPixelMask>::scFunctionRootName =
    "llvm.genx.GenISA.GetPixelMask";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetPixelMask>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetPixelMask>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetPixelMask>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetPixelMask>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientX>::scFunctionRootName =
    "llvm.genx.GenISA.GradientX";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientX>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientX>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientX>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientX>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientXfine>::scFunctionRootName =
    "llvm.genx.GenISA.GradientXfine";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientXfine>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientXfine>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientXfine>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientXfine>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientY>::scFunctionRootName =
    "llvm.genx.GenISA.GradientY";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientY>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientY>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientY>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientY>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientYfine>::scFunctionRootName =
    "llvm.genx.GenISA.GradientYfine";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientYfine>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientYfine>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientYfine>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GradientYfine>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GsCutControlHeader>::scFunctionRootName =
    "llvm.genx.GenISA.GsCutControlHeader";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GsCutControlHeader>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GsCutControlHeader>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GsCutControlHeader>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GsCutControlHeader>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GsStreamHeader>::scFunctionRootName =
    "llvm.genx.GenISA.GsStreamHeader";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GsStreamHeader>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GsStreamHeader>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GsStreamHeader>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GsStreamHeader>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HSURBPatchHeaderRead>::scFunctionRootName =
    "llvm.genx.GenISA.HSURBPatchHeaderRead";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HSURBPatchHeaderRead>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HSURBPatchHeaderRead>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Divide>::scFunctionRootName =
    "llvm.genx.GenISA.IEEE.Divide";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Divide>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Divide>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Divide>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Divide>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Sqrt>::scFunctionRootName =
    "llvm.genx.GenISA.IEEE.Sqrt";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Sqrt>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Sqrt>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Sqrt>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IEEE_Sqrt>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InitDiscardMask>::scFunctionRootName =
    "llvm.genx.GenISA.InitDiscardMask";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InitDiscardMask>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InitDiscardMask>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InnerScalarTessFactors>::scFunctionRootName =
    "llvm.genx.GenISA.InnerScalarTessFactors";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InnerScalarTessFactors>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InnerScalarTessFactors>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InnerScalarTessFactors>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InnerScalarTessFactors>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolant>::scFunctionRootName =
    "llvm.genx.GenISA.Interpolant";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolant>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolant>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolant>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolant>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolate>::scFunctionRootName =
    "llvm.genx.GenISA.Interpolate";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolate>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolate>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolate>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolate>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolate2>::scFunctionRootName =
    "llvm.genx.GenISA.Interpolate2";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolate2>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolate2>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolate2>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_Interpolate2>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IsHelperInvocation>::scFunctionRootName =
    "llvm.genx.GenISA.IsHelperInvocation";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IsHelperInvocation>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IsHelperInvocation>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IsHelperInvocation>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IsHelperInvocation>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRead>::scFunctionRootName =
    "llvm.genx.GenISA.MediaBlockRead";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRead>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRead>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRead>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRead>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRectangleRead>::scFunctionRootName =
    "llvm.genx.GenISA.MediaBlockRectangleRead";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRectangleRead>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRectangleRead>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRectangleRead>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockRectangleRead>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockWrite>::scFunctionRootName =
    "llvm.genx.GenISA.MediaBlockWrite";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockWrite>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockWrite>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockWrite>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_MediaBlockWrite>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OUTPUT>::scFunctionRootName =
    "llvm.genx.GenISA.OUTPUT";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OUTPUT>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OUTPUT>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OUTPUT>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OUTPUT>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OUTPUTGS>::scFunctionRootName =
    "llvm.genx.GenISA.OUTPUTGS";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OUTPUTGS>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OUTPUTGS>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OUTPUTGS>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OUTPUTGS>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OuterScalarTessFactors>::scFunctionRootName =
    "llvm.genx.GenISA.OuterScalarTessFactors";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OuterScalarTessFactors>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OuterScalarTessFactors>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OuterScalarTessFactors>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OuterScalarTessFactors>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTessControlPoint>::scFunctionRootName =
    "llvm.genx.GenISA.OutputTessControlPoint";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTessControlPoint>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTessControlPoint>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTessControlPoint>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTessControlPoint>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUT>::scFunctionRootName =
    "llvm.genx.GenISA.PHASE.INPUT";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUT>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUT>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUT>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUT>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUTVEC>::scFunctionRootName =
    "llvm.genx.GenISA.PHASE.INPUTVEC";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUTVEC>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUTVEC>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUTVEC>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_INPUTVEC>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUT>::scFunctionRootName =
    "llvm.genx.GenISA.PHASE.OUTPUT";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUT>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUT>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUT>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUT>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUTVEC>::scFunctionRootName =
    "llvm.genx.GenISA.PHASE.OUTPUTVEC";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUTVEC>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUTVEC>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUTVEC>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PHASE_OUTPUTVEC>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PatchConstantOutput>::scFunctionRootName =
    "llvm.genx.GenISA.PatchConstantOutput";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PatchConstantOutput>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PatchConstantOutput>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PatchConstantOutput>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PatchConstantOutput>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PixelPositionX>::scFunctionRootName =
    "llvm.genx.GenISA.PixelPositionX";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PixelPositionX>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PixelPositionX>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PixelPositionY>::scFunctionRootName =
    "llvm.genx.GenISA.PixelPositionY";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PixelPositionY>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PixelPositionY>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullCentroidBarys>::scFunctionRootName =
    "llvm.genx.GenISA.PullCentroidBarys";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullCentroidBarys>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullCentroidBarys>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullCentroidBarys>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullCentroidBarys>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullSampleIndexBarys>::scFunctionRootName =
    "llvm.genx.GenISA.PullSampleIndexBarys";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullSampleIndexBarys>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullSampleIndexBarys>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullSampleIndexBarys>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullSampleIndexBarys>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullSnappedBarys>::scFunctionRootName =
    "llvm.genx.GenISA.PullSnappedBarys";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullSnappedBarys>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullSnappedBarys>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullSnappedBarys>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PullSnappedBarys>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_QuadPrefix>::scFunctionRootName =
    "llvm.genx.GenISA.QuadPrefix";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_QuadPrefix>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_QuadPrefix>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_QuadPrefix>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_QuadPrefix>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ROUNDNE>::scFunctionRootName =
    "llvm.genx.GenISA.ROUNDNE";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ROUNDNE>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ROUNDNE>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ROUNDNE>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ROUNDNE>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTDualBlendSource>::scFunctionRootName =
    "llvm.genx.GenISA.RTDualBlendSource";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTDualBlendSource>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTDualBlendSource>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTDualBlendSource>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTDualBlendSource>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTWrite>::scFunctionRootName =
    "llvm.genx.GenISA.RTWrite";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTWrite>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTWrite>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTWrite>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTWrite>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReadFromReservedArgSpace>::scFunctionRootName =
    "llvm.genx.GenISA.ReadFromReservedArgSpace";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReadFromReservedArgSpace>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReadFromReservedArgSpace>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReadFromReservedArgSpace>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReadFromReservedArgSpace>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetRead>::scFunctionRootName =
    "llvm.genx.GenISA.RenderTargetRead";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetRead>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetRead>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetRead>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetRead>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetReadSampleFreq>::scFunctionRootName =
    "llvm.genx.GenISA.RenderTargetReadSampleFreq";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetReadSampleFreq>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetReadSampleFreq>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetReadSampleFreq>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RenderTargetReadSampleFreq>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RuntimeValue>::scFunctionRootName =
    "llvm.genx.GenISA.RuntimeValue";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RuntimeValue>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RuntimeValue>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RuntimeValue>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RuntimeValue>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetX>::scFunctionRootName =
    "llvm.genx.GenISA.SampleOffsetX";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetX>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetX>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetX>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetX>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetY>::scFunctionRootName =
    "llvm.genx.GenISA.SampleOffsetY";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetY>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetY>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetY>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SampleOffsetY>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SaveInReservedArgSpace>::scFunctionRootName =
    "llvm.genx.GenISA.SaveInReservedArgSpace";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SaveInReservedArgSpace>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SaveInReservedArgSpace>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SaveInReservedArgSpace>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SaveInReservedArgSpace>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetStackCallsBaseAddress>::scFunctionRootName =
    "llvm.genx.GenISA.SetStackCallsBaseAddress";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetStackCallsBaseAddress>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetStackCallsBaseAddress>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetStackCallsBaseAddress>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetStackCallsBaseAddress>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetImplicitBufferPtr>::scFunctionRootName =
    "llvm.genx.GenISA.SetImplicitBufferPtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetImplicitBufferPtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetImplicitBufferPtr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetImplicitBufferPtr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetImplicitBufferPtr>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetGlobalBufferArg>::scFunctionRootName =
    "llvm.genx.GenISA.SetGlobalBufferArg";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetGlobalBufferArg>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetGlobalBufferArg>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetGlobalBufferArg>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetGlobalBufferArg>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetDebugReg>::scFunctionRootName =
    "llvm.genx.GenISA.SetDebugReg";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetDebugReg>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetDebugReg>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetDebugReg>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetDebugReg>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetLocalIdBufferPtr>::scFunctionRootName =
    "llvm.genx.GenISA.SetLocalIdBufferPtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetLocalIdBufferPtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetLocalIdBufferPtr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetLocalIdBufferPtr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetLocalIdBufferPtr>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetStream>::scFunctionRootName =
    "llvm.genx.GenISA.SetStream";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetStream>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetStream>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetStream>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SetStream>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackAlloca>::scFunctionRootName =
    "llvm.genx.GenISA.StackAlloca";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackAlloca>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackAlloca>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackAlloca>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackAlloca>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_VLAStackAlloca>::scFunctionRootName =
    "llvm.genx.GenISA.VLAStackAlloca";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_VLAStackAlloca>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_VLAStackAlloca>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_VLAStackAlloca>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_VLAStackAlloca>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionBegin>::scFunctionRootName =
    "llvm.genx.GenISA.UnmaskedRegionBegin";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionBegin>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionBegin>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionBegin>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionBegin>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionEnd>::scFunctionRootName =
    "llvm.genx.GenISA.UnmaskedRegionEnd";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionEnd>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionEnd>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionEnd>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UnmaskedRegionEnd>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBRead>::scFunctionRootName =
    "llvm.genx.GenISA.URBRead";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBRead>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBRead>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBRead>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBRead>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBReadOutput>::scFunctionRootName =
    "llvm.genx.GenISA.URBReadOutput";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBReadOutput>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBReadOutput>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBReadOutput>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBReadOutput>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBWrite>::scFunctionRootName =
    "llvm.genx.GenISA.URBWrite";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBWrite>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBWrite>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBWrite>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_URBWrite>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UpdateDiscardMask>::scFunctionRootName =
    "llvm.genx.GenISA.UpdateDiscardMask";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UpdateDiscardMask>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UpdateDiscardMask>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UpdateDiscardMask>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_UpdateDiscardMask>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveAll>::scFunctionRootName =
    "llvm.genx.GenISA.WaveAll";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveAll>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveAll>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveAll>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveAll>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveBallot>::scFunctionRootName =
    "llvm.genx.GenISA.WaveBallot";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveBallot>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveBallot>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveBallot>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveBallot>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveClustered>::scFunctionRootName =
    "llvm.genx.GenISA.WaveClustered";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveClustered>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveClustered>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveClustered>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveClustered>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveInterleave>::scFunctionRootName =
    "llvm.genx.GenISA.WaveInterleave";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveInterleave>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveInterleave>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveInterleave>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveInterleave>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveClusteredInterleave>::scFunctionRootName =
    "llvm.genx.GenISA.WaveClusteredInterleave";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveClusteredInterleave>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveClusteredInterleave>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveClusteredInterleave>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveClusteredInterleave>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveInverseBallot>::scFunctionRootName =
    "llvm.genx.GenISA.WaveInverseBallot";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveInverseBallot>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveInverseBallot>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveInverseBallot>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveInverseBallot>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WavePrefix>::scFunctionRootName =
    "llvm.genx.GenISA.WavePrefix";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WavePrefix>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WavePrefix>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WavePrefix>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WavePrefix>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveShuffleIndex>::scFunctionRootName =
    "llvm.genx.GenISA.WaveShuffleIndex";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveShuffleIndex>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveShuffleIndex>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveShuffleIndex>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveShuffleIndex>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveBroadcast>::scFunctionRootName =
    "llvm.genx.GenISA.WaveBroadcast";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveBroadcast>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveBroadcast>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveBroadcast>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WaveBroadcast>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WorkGroupAny>::scFunctionRootName =
    "llvm.genx.GenISA.WorkGroupAny";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WorkGroupAny>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WorkGroupAny>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WorkGroupAny>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_WorkGroupAny>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_add_pair>::scFunctionRootName =
    "llvm.genx.GenISA.add.pair";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_add_pair>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_add_pair>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_add_pair>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_add_pair>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_add_rtz>::scFunctionRootName =
    "llvm.genx.GenISA.add.rtz";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_add_rtz>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_add_rtz>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_add_rtz>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_add_rtz>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterinc>::scFunctionRootName =
    "llvm.genx.GenISA.atomiccounterinc";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterinc>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterinc>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterinc>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterinc>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterpredec>::scFunctionRootName =
    "llvm.genx.GenISA.atomiccounterpredec";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterpredec>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterpredec>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterpredec>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_atomiccounterpredec>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bfi>::scFunctionRootName =
    "llvm.genx.GenISA.bfi";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bfi>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bfi>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bfi>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bfi>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bfrev>::scFunctionRootName =
    "llvm.genx.GenISA.bfrev";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bfrev>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bfrev>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bfrev>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bfrev>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhase>::scFunctionRootName =
    "llvm.genx.GenISA.broadcastMessagePhase";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhase>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhase>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhase>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhase>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhaseV>::scFunctionRootName =
    "llvm.genx.GenISA.broadcastMessagePhaseV";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhaseV>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhaseV>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhaseV>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_broadcastMessagePhaseV>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cmpSADs>::scFunctionRootName =
    "llvm.genx.GenISA.cmpSADs";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cmpSADs>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cmpSADs>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cmpSADs>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cmpSADs>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cmpxchgatomicstructured>::scFunctionRootName =
    "llvm.genx.GenISA.cmpxchgatomicstructured";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cmpxchgatomicstructured>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cmpxchgatomicstructured>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cmpxchgatomicstructured>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cmpxchgatomicstructured>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhases>::scFunctionRootName =
    "llvm.genx.GenISA.createMessagePhases";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhases>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhases>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhases>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhases>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInit>::scFunctionRootName =
    "llvm.genx.GenISA.createMessagePhasesNoInit";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInit>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInit>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInit>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInit>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInitV>::scFunctionRootName =
    "llvm.genx.GenISA.createMessagePhasesNoInitV";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInitV>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInitV>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInitV>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesNoInitV>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesV>::scFunctionRootName =
    "llvm.genx.GenISA.createMessagePhasesV";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesV>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesV>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesV>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_createMessagePhasesV>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cycleCounter>::scFunctionRootName =
    "llvm.genx.GenISA.cycleCounter";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cycleCounter>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_cycleCounter>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_discard>::scFunctionRootName =
    "llvm.genx.GenISA.discard";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_discard>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_discard>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_discard>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_discard>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_ss>::scFunctionRootName =
    "llvm.genx.GenISA.dp4a.ss";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_ss>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_ss>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_ss>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_ss>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_su>::scFunctionRootName =
    "llvm.genx.GenISA.dp4a.su";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_su>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_su>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_su>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_su>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_us>::scFunctionRootName =
    "llvm.genx.GenISA.dp4a.us";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_us>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_us>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_us>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_us>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_uu>::scFunctionRootName =
    "llvm.genx.GenISA.dp4a.uu";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_uu>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_uu>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_uu>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dp4a_uu>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dummyInst>::scFunctionRootName =
    "llvm.genx.GenISA.dummyInst";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dummyInst>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dummyInst>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dummyInstID>::scFunctionRootName =
    "llvm.genx.GenISA.dummyInstID";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dummyInstID>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dummyInstID>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dummyInstID>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dummyInstID>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_launder>::scFunctionRootName =
    "llvm.genx.GenISA.launder";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_launder>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_launder>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_launder>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_launder>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dwordatomicstructured>::scFunctionRootName =
    "llvm.genx.GenISA.dwordatomicstructured";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dwordatomicstructured>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dwordatomicstructured>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dwordatomicstructured>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dwordatomicstructured>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_id>::scFunctionRootName =
    "llvm.genx.GenISA.eu.id";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_id>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_id>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_thread_id>::scFunctionRootName =
    "llvm.genx.GenISA.eu.thread.id";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_thread_id>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_thread_id>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_thread_pause>::scFunctionRootName =
    "llvm.genx.GenISA.eu.thread.pause";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_thread_pause>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_thread_pause>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_thread_pause>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_eu_thread_pause>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_evaluateSampler>::scFunctionRootName =
    "llvm.genx.GenISA.evaluateSampler";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_evaluateSampler>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_evaluateSampler>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_evaluateSampler>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_evaluateSampler>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_extractMVAndSAD>::scFunctionRootName =
    "llvm.genx.GenISA.extractMVAndSAD";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_extractMVAndSAD>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_extractMVAndSAD>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_extractMVAndSAD>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_extractMVAndSAD>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_f32tof16_rtz>::scFunctionRootName =
    "llvm.genx.GenISA.f32tof16.rtz";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_f32tof16_rtz>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_f32tof16_rtz>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_f32tof16_rtz>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_f32tof16_rtz>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicraw>::scFunctionRootName =
    "llvm.genx.GenISA.fcmpxchgatomicraw";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicraw>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicraw>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicraw>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicraw>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicrawA64>::scFunctionRootName =
    "llvm.genx.GenISA.fcmpxchgatomicrawA64";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicrawA64>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicrawA64>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicrawA64>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicrawA64>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicstructured>::scFunctionRootName =
    "llvm.genx.GenISA.fcmpxchgatomicstructured";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicstructured>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicstructured>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicstructured>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomicstructured>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitHi>::scFunctionRootName =
    "llvm.genx.GenISA.firstbitHi";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitHi>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitHi>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitHi>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitHi>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitLo>::scFunctionRootName =
    "llvm.genx.GenISA.firstbitLo";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitLo>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitLo>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitLo>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitLo>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitShi>::scFunctionRootName =
    "llvm.genx.GenISA.firstbitShi";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitShi>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitShi>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitShi>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_firstbitShi>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicraw>::scFunctionRootName =
    "llvm.genx.GenISA.floatatomicraw";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicraw>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicraw>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicraw>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicraw>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicrawA64>::scFunctionRootName =
    "llvm.genx.GenISA.floatatomicrawA64";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicrawA64>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicrawA64>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicrawA64>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicrawA64>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicstructured>::scFunctionRootName =
    "llvm.genx.GenISA.floatatomicstructured";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicstructured>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicstructured>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicstructured>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomicstructured>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_flushsampler>::scFunctionRootName =
    "llvm.genx.GenISA.flushsampler";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_flushsampler>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_flushsampler>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtz>::scFunctionRootName =
    "llvm.genx.GenISA.fma.rtz";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtz>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtz>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtz>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtz>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtp>::scFunctionRootName =
    "llvm.genx.GenISA.fma.rtp";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtp>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtp>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtp>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtp>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtn>::scFunctionRootName =
    "llvm.genx.GenISA.fma.rtn";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtn>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtn>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtn>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fma_rtn>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fsat>::scFunctionRootName =
    "llvm.genx.GenISA.fsat";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fsat>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fsat>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fsat>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fsat>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_usat>::scFunctionRootName =
    "llvm.genx.GenISA.usat";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_usat>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_usat>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_usat>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_usat>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_isat>::scFunctionRootName =
    "llvm.genx.GenISA.isat";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_isat>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_isat>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_isat>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_isat>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rte>::scFunctionRootName =
    "llvm.genx.GenISA.ftof.rte";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rte>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rte>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rte>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rte>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtn>::scFunctionRootName =
    "llvm.genx.GenISA.ftof.rtn";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtn>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtn>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtn>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtn>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtp>::scFunctionRootName =
    "llvm.genx.GenISA.ftof.rtp";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtp>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtp>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtp>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtp>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtz>::scFunctionRootName =
    "llvm.genx.GenISA.ftof.rtz";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtz>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtz>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtz>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftof_rtz>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rte>::scFunctionRootName =
    "llvm.genx.GenISA.ftoi.rte";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rte>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rte>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rte>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rte>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtn>::scFunctionRootName =
    "llvm.genx.GenISA.ftoi.rtn";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtn>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtn>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtn>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtn>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtp>::scFunctionRootName =
    "llvm.genx.GenISA.ftoi.rtp";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtp>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtp>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtp>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoi_rtp>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rte>::scFunctionRootName =
    "llvm.genx.GenISA.ftoui.rte";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rte>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rte>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rte>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rte>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtn>::scFunctionRootName =
    "llvm.genx.GenISA.ftoui.rtn";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtn>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtn>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtn>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtn>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtp>::scFunctionRootName =
    "llvm.genx.GenISA.ftoui.rtp";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtp>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtp>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtp>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftoui_rtp>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleMlodptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleMlodptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleMlodptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleMlodptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleMlodptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleMlodptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleCMlodptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleCMlodptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleCMlodptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleCMlodptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleCMlodptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleCMlodptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBCMlodptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleBCMlodptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBCMlodptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBCMlodptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBCMlodptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBCMlodptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDCMlodptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleDCMlodptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDCMlodptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDCMlodptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDCMlodptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDCMlodptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOptr>::scFunctionRootName =
    "llvm.genx.GenISA.samplePOptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOBptr>::scFunctionRootName =
    "llvm.genx.GenISA.samplePOBptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOBptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOBptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOBptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOBptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOLptr>::scFunctionRootName =
    "llvm.genx.GenISA.samplePOLptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOLptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOLptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOLptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOLptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOCptr>::scFunctionRootName =
    "llvm.genx.GenISA.samplePOCptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOCptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOCptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOCptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOCptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePODptr>::scFunctionRootName =
    "llvm.genx.GenISA.samplePODptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePODptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePODptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePODptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePODptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Iptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4Iptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Iptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Iptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Iptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Iptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Bptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4Bptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Bptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Bptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Bptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Bptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Lptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4Lptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Lptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Lptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Lptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Lptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOLCptr>::scFunctionRootName =
    "llvm.genx.GenISA.samplePOLCptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOLCptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOLCptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOLCptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_samplePOLCptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ICptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4ICptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ICptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ICptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ICptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ICptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LCptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4LCptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LCptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LCptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LCptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LCptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4POPackedptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4POPackedLptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedBptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4POPackedBptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedBptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedBptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedBptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedBptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedIptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4POPackedIptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedIptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedIptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedIptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedIptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedICptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4POPackedICptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedICptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedICptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedICptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedICptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLCptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4POPackedLCptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLCptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLCptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLCptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedLCptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedCptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4POPackedCptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedCptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedCptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedCptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POPackedCptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4IPOptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4IPOptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4IPOptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4IPOptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4IPOptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4IPOptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4BPOptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4BPOptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4BPOptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4BPOptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4BPOptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4BPOptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LPOptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4LPOptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LPOptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LPOptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LPOptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LPOptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ICPOptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4ICPOptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ICPOptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ICPOptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ICPOptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ICPOptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LCPOptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4LCPOptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LCPOptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LCPOptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LCPOptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4LCPOptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Cptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4Cptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Cptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Cptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Cptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4Cptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POCptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4POCptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POCptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POCptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POCptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POCptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4POptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4POptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ptr>::scFunctionRootName =
    "llvm.genx.GenISA.gather4ptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_gather4ptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhase>::scFunctionRootName =
    "llvm.genx.GenISA.getMessagePhase";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhase>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhase>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhase>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhase>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseV>::scFunctionRootName =
    "llvm.genx.GenISA.getMessagePhaseV";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseV>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseV>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseV>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseV>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseX>::scFunctionRootName =
    "llvm.genx.GenISA.getMessagePhaseX";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseX>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseX>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseX>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseX>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseXV>::scFunctionRootName =
    "llvm.genx.GenISA.getMessagePhaseXV";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseXV>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseXV>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseXV>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getMessagePhaseXV>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getR0>::scFunctionRootName =
    "llvm.genx.GenISA.getR0";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getR0>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getR0>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getPayloadHeader>::scFunctionRootName =
    "llvm.genx.GenISA.getPayloadHeader";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getPayloadHeader>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getPayloadHeader>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getWorkDim>::scFunctionRootName =
    "llvm.genx.GenISA.getWorkDim";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getWorkDim>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getWorkDim>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getNumWorkGroups>::scFunctionRootName =
    "llvm.genx.GenISA.getNumWorkGroups";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getNumWorkGroups>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getNumWorkGroups>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getGlobalSize>::scFunctionRootName =
    "llvm.genx.GenISA.getGlobalSize";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getGlobalSize>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getGlobalSize>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalSize>::scFunctionRootName =
    "llvm.genx.GenISA.getLocalSize";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalSize>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalSize>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getEnqueuedLocalSize>::scFunctionRootName =
    "llvm.genx.GenISA.getEnqueuedLocalSize";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getEnqueuedLocalSize>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getEnqueuedLocalSize>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_X>::scFunctionRootName =
    "llvm.genx.GenISA.getLocalID.X";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_X>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_X>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Y>::scFunctionRootName =
    "llvm.genx.GenISA.getLocalID.Y";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Y>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Y>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Z>::scFunctionRootName =
    "llvm.genx.GenISA.getLocalID.Z";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Z>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getLocalID_Z>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getPrivateBase>::scFunctionRootName =
    "llvm.genx.GenISA.getPrivateBase";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getPrivateBase>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getPrivateBase>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getPrintfBuffer>::scFunctionRootName =
    "llvm.genx.GenISA.getPrintfBuffer";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getPrintfBuffer>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getPrintfBuffer>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStageInGridOrigin>::scFunctionRootName =
    "llvm.genx.GenISA.getStageInGridOrigin";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStageInGridOrigin>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStageInGridOrigin>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStageInGridSize>::scFunctionRootName =
    "llvm.genx.GenISA.getStageInGridSize";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStageInGridSize>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStageInGridSize>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSyncBuffer>::scFunctionRootName =
    "llvm.genx.GenISA.getSyncBuffer";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSyncBuffer>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSyncBuffer>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getRtGlobalBufferPtr>::scFunctionRootName =
    "llvm.genx.GenISA.getRtGlobalBufferPtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getRtGlobalBufferPtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getRtGlobalBufferPtr>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStackPointer>::scFunctionRootName =
    "llvm.genx.GenISA.getStackPointer";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStackPointer>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStackPointer>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStackSizePerThread>::scFunctionRootName =
    "llvm.genx.GenISA.getStackSizePerThread";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStackSizePerThread>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getStackSizePerThread>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getAssertBufferPtr>::scFunctionRootName =
    "llvm.genx.GenISA.getAssertBufferPtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getAssertBufferPtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getAssertBufferPtr>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSR0>::scFunctionRootName =
    "llvm.genx.GenISA.getSR0";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSR0>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSR0>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSR0>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSR0>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSR0_0>::scFunctionRootName =
    "llvm.genx.GenISA.getSR0.0";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSR0_0>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_getSR0_0>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_globalSync>::scFunctionRootName =
    "llvm.genx.GenISA.globalSync";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_globalSync>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_globalSync>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id>::scFunctionRootName =
    "llvm.genx.GenISA.hw.thread.id";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id_alloca>::scFunctionRootName =
    "llvm.genx.GenISA.hw.thread.id.alloca";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id_alloca>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hw_thread_id_alloca>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ibfe>::scFunctionRootName =
    "llvm.genx.GenISA.ibfe";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ibfe>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ibfe>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ibfe>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ibfe>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicraw>::scFunctionRootName =
    "llvm.genx.GenISA.icmpxchgatomicraw";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicraw>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicraw>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicraw>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicraw>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicrawA64>::scFunctionRootName =
    "llvm.genx.GenISA.icmpxchgatomicrawA64";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicrawA64>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicrawA64>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicrawA64>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomicrawA64>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomictyped>::scFunctionRootName =
    "llvm.genx.GenISA.icmpxchgatomictyped";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomictyped>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomictyped>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomictyped>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_icmpxchgatomictyped>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomictyped>::scFunctionRootName =
    "llvm.genx.GenISA.fcmpxchgatomictyped";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomictyped>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomictyped>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomictyped>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_fcmpxchgatomictyped>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_imulH>::scFunctionRootName =
    "llvm.genx.GenISA.imulH";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_imulH>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_imulH>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_imulH>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_imulH>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomicraw>::scFunctionRootName =
    "llvm.genx.GenISA.intatomicraw";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomicraw>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomicraw>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomicraw>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomicraw>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomicrawA64>::scFunctionRootName =
    "llvm.genx.GenISA.intatomicrawA64";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomicrawA64>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomicrawA64>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomicrawA64>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomicrawA64>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomictyped>::scFunctionRootName =
    "llvm.genx.GenISA.intatomictyped";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomictyped>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomictyped>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomictyped>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_intatomictyped>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomictyped>::scFunctionRootName =
    "llvm.genx.GenISA.floatatomictyped";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomictyped>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomictyped>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomictyped>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_floatatomictyped>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_is_uniform>::scFunctionRootName =
    "llvm.genx.GenISA.is.uniform";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_is_uniform>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_is_uniform>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_is_uniform>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_is_uniform>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtn>::scFunctionRootName =
    "llvm.genx.GenISA.itof.rtn";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtn>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtn>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtn>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtn>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtp>::scFunctionRootName =
    "llvm.genx.GenISA.itof.rtp";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtp>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtp>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtp>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtp>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtz>::scFunctionRootName =
    "llvm.genx.GenISA.itof.rtz";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtz>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtz>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtz>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_itof_rtz>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmcsptr>::scFunctionRootName =
    "llvm.genx.GenISA.ldmcsptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmcsptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmcsptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmcsptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmcsptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr>::scFunctionRootName =
    "llvm.genx.GenISA.ldmsptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr16bit>::scFunctionRootName =
    "llvm.genx.GenISA.ldmsptr16bit";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr16bit>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr16bit>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr16bit>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldmsptr16bit>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldptr>::scFunctionRootName =
    "llvm.genx.GenISA.ldptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldlptr>::scFunctionRootName =
    "llvm.genx.GenISA.ldlptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldlptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldlptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldlptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldlptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldraw_indexed>::scFunctionRootName =
    "llvm.genx.GenISA.ldraw.indexed";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldraw_indexed>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldraw_indexed>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldraw_indexed>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldraw_indexed>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldrawvector_indexed>::scFunctionRootName =
    "llvm.genx.GenISA.ldrawvector.indexed";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldrawvector_indexed>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldrawvector_indexed>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldrawvector_indexed>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldrawvector_indexed>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldstructured>::scFunctionRootName =
    "llvm.genx.GenISA.ldstructured";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldstructured>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldstructured>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldstructured>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ldstructured>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_lodptr>::scFunctionRootName =
    "llvm.genx.GenISA.lodptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_lodptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_lodptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_lodptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_lodptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_memoryfence>::scFunctionRootName =
    "llvm.genx.GenISA.memoryfence";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_memoryfence>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_memoryfence>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_memoryfence>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_memoryfence>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mov_identity>::scFunctionRootName =
    "llvm.genx.GenISA.mov.identity";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mov_identity>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mov_identity>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mov_identity>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mov_identity>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_movcr>::scFunctionRootName =
    "llvm.genx.GenISA.movcr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_movcr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_movcr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_movcr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_movcr>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_movflag>::scFunctionRootName =
    "llvm.genx.GenISA.movflag";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_movflag>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_movflag>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_movflag>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_movflag>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_software_exception>::scFunctionRootName =
    "llvm.genx.GenISA.software.exception";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_software_exception>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_software_exception>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_thread_exit>::scFunctionRootName =
    "llvm.genx.GenISA.thread.exit";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_thread_exit>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_thread_exit>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mul_pair>::scFunctionRootName =
    "llvm.genx.GenISA.mul.pair";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mul_pair>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mul_pair>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mul_pair>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mul_pair>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mul_rtz>::scFunctionRootName =
    "llvm.genx.GenISA.mul.rtz";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mul_rtz>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mul_rtz>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mul_rtz>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_mul_rtz>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_pair_to_ptr>::scFunctionRootName =
    "llvm.genx.GenISA.pair.to.ptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_pair_to_ptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_pair_to_ptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_pair_to_ptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_pair_to_ptr>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_patchInstanceId>::scFunctionRootName =
    "llvm.genx.GenISA.patchInstanceId";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_patchInstanceId>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_patchInstanceId>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ptr_to_pair>::scFunctionRootName =
    "llvm.genx.GenISA.ptr.to.pair";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ptr_to_pair>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ptr_to_pair>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ptr_to_pair>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ptr_to_pair>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_readsurfacetypeandformat>::scFunctionRootName =
    "llvm.genx.GenISA.readsurfacetypeandformat";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_readsurfacetypeandformat>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_readsurfacetypeandformat>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_readsurfacetypeandformat>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_readsurfacetypeandformat>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_resinfoptr>::scFunctionRootName =
    "llvm.genx.GenISA.resinfoptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_resinfoptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_resinfoptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_resinfoptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_resinfoptr>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_rsq>::scFunctionRootName =
    "llvm.genx.GenISA.rsq";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_rsq>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_rsq>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_rsq>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_rsq>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBCptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleBCptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBCptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBCptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBCptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBCptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleBptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleBptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleCptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleCptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleCptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleCptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleCptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleCptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDCptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleDCptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDCptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDCptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDCptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDCptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleDptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleDptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleKillPix>::scFunctionRootName =
    "llvm.genx.GenISA.sampleKillPix";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleKillPix>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleKillPix>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleKillPix>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleKillPix>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleLCptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleLCptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleLCptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleLCptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleLCptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleLCptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleLptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleLptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleLptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleLptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleLptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleLptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleinfoptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleinfoptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleinfoptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleinfoptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleinfoptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleinfoptr>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleptr>::scFunctionRootName =
    "llvm.genx.GenISA.sampleptr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleptr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleptr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleptr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sampleptr>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase>::scFunctionRootName =
    "llvm.genx.GenISA.setMessagePhase";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseV>::scFunctionRootName =
    "llvm.genx.GenISA.setMessagePhaseV";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseV>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseV>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseV>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseV>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX>::scFunctionRootName =
    "llvm.genx.GenISA.setMessagePhaseX";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseXV>::scFunctionRootName =
    "llvm.genx.GenISA.setMessagePhaseXV";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseXV>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseXV>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseXV>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseXV>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX_legacy>::scFunctionRootName =
    "llvm.genx.GenISA.setMessagePhaseX.legacy";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX_legacy>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX_legacy>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX_legacy>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhaseX_legacy>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase_legacy>::scFunctionRootName =
    "llvm.genx.GenISA.setMessagePhase.legacy";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase_legacy>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase_legacy>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase_legacy>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_setMessagePhase_legacy>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockRead>::scFunctionRootName =
    "llvm.genx.GenISA.simdBlockRead";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockRead>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockRead>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockRead>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockRead>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockReadBindless>::scFunctionRootName =
    "llvm.genx.GenISA.simdBlockReadBindless";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockReadBindless>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockReadBindless>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockReadBindless>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockReadBindless>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWrite>::scFunctionRootName =
    "llvm.genx.GenISA.simdBlockWrite";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWrite>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWrite>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWrite>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWrite>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWriteBindless>::scFunctionRootName =
    "llvm.genx.GenISA.simdBlockWriteBindless";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWriteBindless>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWriteBindless>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWriteBindless>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdBlockWriteBindless>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhase>::scFunctionRootName =
    "llvm.genx.GenISA.simdGetMessagePhase";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhase>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhase>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhase>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhase>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhaseV>::scFunctionRootName =
    "llvm.genx.GenISA.simdGetMessagePhaseV";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhaseV>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhaseV>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhaseV>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdGetMessagePhaseV>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdLaneId>::scFunctionRootName =
    "llvm.genx.GenISA.simdLaneId";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdLaneId>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdLaneId>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdLaneIdReplicate>::scFunctionRootName =
    "llvm.genx.GenISA.simdLaneIdReplicate";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdLaneIdReplicate>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdLaneIdReplicate>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockRead>::scFunctionRootName =
    "llvm.genx.GenISA.simdMediaBlockRead";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockRead>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockRead>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockRead>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockRead>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockWrite>::scFunctionRootName =
    "llvm.genx.GenISA.simdMediaBlockWrite";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockWrite>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockWrite>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockWrite>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaBlockWrite>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaRegionCopy>::scFunctionRootName =
    "llvm.genx.GenISA.simdMediaRegionCopy";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaRegionCopy>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaRegionCopy>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaRegionCopy>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdMediaRegionCopy>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhase>::scFunctionRootName =
    "llvm.genx.GenISA.simdSetMessagePhase";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhase>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhase>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhase>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhase>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhaseV>::scFunctionRootName =
    "llvm.genx.GenISA.simdSetMessagePhaseV";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhaseV>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhaseV>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhaseV>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSetMessagePhaseV>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleDown>::scFunctionRootName =
    "llvm.genx.GenISA.simdShuffleDown";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleDown>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleDown>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleDown>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleDown>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleXor>::scFunctionRootName =
    "llvm.genx.GenISA.simdShuffleXor";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleXor>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleXor>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleXor>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdShuffleXor>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSize>::scFunctionRootName =
    "llvm.genx.GenISA.simdSize";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSize>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_simdSize>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_slice_id>::scFunctionRootName =
    "llvm.genx.GenISA.slice.id";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_slice_id>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_slice_id>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_source_value>::scFunctionRootName =
    "llvm.genx.GenISA.source.value";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_source_value>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_source_value>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_source_value>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_source_value>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storeraw_indexed>::scFunctionRootName =
    "llvm.genx.GenISA.storeraw.indexed";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storeraw_indexed>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storeraw_indexed>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storeraw_indexed>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storeraw_indexed>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storerawvector_indexed>::scFunctionRootName =
    "llvm.genx.GenISA.storerawvector.indexed";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storerawvector_indexed>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storerawvector_indexed>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storerawvector_indexed>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storerawvector_indexed>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured1>::scFunctionRootName =
    "llvm.genx.GenISA.storestructured1";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured1>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured1>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured1>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured1>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured2>::scFunctionRootName =
    "llvm.genx.GenISA.storestructured2";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured2>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured2>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured2>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured2>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured3>::scFunctionRootName =
    "llvm.genx.GenISA.storestructured3";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured3>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured3>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured3>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured3>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured4>::scFunctionRootName =
    "llvm.genx.GenISA.storestructured4";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured4>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured4>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured4>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_storestructured4>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sub_group_dpas>::scFunctionRootName =
    "llvm.genx.GenISA.sub.group.dpas";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sub_group_dpas>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sub_group_dpas>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sub_group_dpas>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sub_group_dpas>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sub_pair>::scFunctionRootName =
    "llvm.genx.GenISA.sub.pair";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sub_pair>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sub_pair>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sub_pair>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_sub_pair>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_subslice_id>::scFunctionRootName =
    "llvm.genx.GenISA.subslice.id";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_subslice_id>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_subslice_id>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_logical_subslice_id>::scFunctionRootName =
    "llvm.genx.GenISA.logical.subslice.id";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_logical_subslice_id>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_logical_subslice_id>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dual_subslice_id>::scFunctionRootName =
    "llvm.genx.GenISA.dual.subslice.id";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dual_subslice_id>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_dual_subslice_id>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier>::scFunctionRootName =
    "llvm.genx.GenISA.threadgroupbarrier";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_signal>::scFunctionRootName =
    "llvm.genx.GenISA.threadgroupbarrier.signal";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_signal>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_signal>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_wait>::scFunctionRootName =
    "llvm.genx.GenISA.threadgroupbarrier.wait";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_wait>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupbarrier_wait>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedmemoryfence>::scFunctionRootName =
    "llvm.genx.GenISA.typedmemoryfence";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedmemoryfence>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedmemoryfence>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedmemoryfence>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedmemoryfence>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedread>::scFunctionRootName =
    "llvm.genx.GenISA.typedread";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedread>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedread>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedread>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedread>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedwrite>::scFunctionRootName =
    "llvm.genx.GenISA.typedwrite";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedwrite>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedwrite>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedwrite>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_typedwrite>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uaddc>::scFunctionRootName =
    "llvm.genx.GenISA.uaddc";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uaddc>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uaddc>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uaddc>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uaddc>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uavSerializeAll>::scFunctionRootName =
    "llvm.genx.GenISA.uavSerializeAll";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uavSerializeAll>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uavSerializeAll>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uavSerializeOnResID>::scFunctionRootName =
    "llvm.genx.GenISA.uavSerializeOnResID";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uavSerializeOnResID>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uavSerializeOnResID>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uavSerializeOnResID>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uavSerializeOnResID>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ubfe>::scFunctionRootName =
    "llvm.genx.GenISA.ubfe";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ubfe>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ubfe>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ubfe>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ubfe>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtn>::scFunctionRootName =
    "llvm.genx.GenISA.uitof.rtn";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtn>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtn>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtn>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtn>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtp>::scFunctionRootName =
    "llvm.genx.GenISA.uitof.rtp";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtp>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtp>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtp>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtp>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtz>::scFunctionRootName =
    "llvm.genx.GenISA.uitof.rtz";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtz>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtz>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtz>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_uitof_rtz>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_umulH>::scFunctionRootName =
    "llvm.genx.GenISA.umulH";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_umulH>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_umulH>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_umulH>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_umulH>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_usubb>::scFunctionRootName =
    "llvm.genx.GenISA.usubb";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_usubb>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_usubb>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_usubb>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_usubb>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaBoolCentroid>::scFunctionRootName =
    "llvm.genx.GenISA.vaBoolCentroid";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaBoolCentroid>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaBoolCentroid>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaBoolCentroid>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaBoolCentroid>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaBoolSum>::scFunctionRootName =
    "llvm.genx.GenISA.vaBoolSum";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaBoolSum>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaBoolSum>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaBoolSum>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaBoolSum>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaCentroid>::scFunctionRootName =
    "llvm.genx.GenISA.vaCentroid";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaCentroid>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaCentroid>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaCentroid>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaCentroid>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolve>::scFunctionRootName =
    "llvm.genx.GenISA.vaConvolve";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolve>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolve>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolve>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolve>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x1>::scFunctionRootName =
    "llvm.genx.GenISA.vaConvolveGRF.16x1";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x1>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x1>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x1>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x1>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x4>::scFunctionRootName =
    "llvm.genx.GenISA.vaConvolveGRF.16x4";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x4>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x4>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x4>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaConvolveGRF_16x4>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaDilate>::scFunctionRootName =
    "llvm.genx.GenISA.vaDilate";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaDilate>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaDilate>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaDilate>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaDilate>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaErode>::scFunctionRootName =
    "llvm.genx.GenISA.vaErode";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaErode>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaErode>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaErode>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaErode>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaMinMax>::scFunctionRootName =
    "llvm.genx.GenISA.vaMinMax";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaMinMax>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaMinMax>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaMinMax>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaMinMax>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaMinMaxFilter>::scFunctionRootName =
    "llvm.genx.GenISA.vaMinMaxFilter";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaMinMaxFilter>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaMinMaxFilter>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaMinMaxFilter>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vaMinMaxFilter>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vectorUniform>::scFunctionRootName =
    "llvm.genx.GenISA.vectorUniform";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vectorUniform>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vectorUniform>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR>::scFunctionRootName =
    "llvm.genx.GenISA.vmeSendFBR";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR2>::scFunctionRootName =
    "llvm.genx.GenISA.vmeSendFBR2";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR2>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR2>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR2>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendFBR2>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME>::scFunctionRootName =
    "llvm.genx.GenISA.vmeSendIME";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME2>::scFunctionRootName =
    "llvm.genx.GenISA.vmeSendIME2";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME2>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME2>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME2>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendIME2>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC>::scFunctionRootName =
    "llvm.genx.GenISA.vmeSendSIC";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC2>::scFunctionRootName =
    "llvm.genx.GenISA.vmeSendSIC2";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC2>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC2>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC2>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_vmeSendSIC2>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_wavebarrier>::scFunctionRootName =
    "llvm.genx.GenISA.wavebarrier";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_wavebarrier>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_wavebarrier>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_frc>::scFunctionRootName =
    "llvm.genx.GenISA.frc";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_frc>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_frc>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_frc>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_frc>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_staticConstantPatchValue>::scFunctionRootName =
    "llvm.genx.GenISA.staticConstantPatchValue";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_staticConstantPatchValue>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_staticConstantPatchValue>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_staticConstantPatchValue>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_staticConstantPatchValue>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HDCCCSFastClear>::scFunctionRootName =
    "llvm.genx.GenISA.HDCCCSFastClear";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HDCCCSFastClear>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HDCCCSFastClear>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HDCCCSFastClear>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HDCCCSFastClear>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockRead>::scFunctionRootName =
    "llvm.genx.GenISA.LSC2DBlockRead";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockRead>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockRead>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockRead>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockRead>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWrite>::scFunctionRootName =
    "llvm.genx.GenISA.LSC2DBlockWrite";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWrite>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWrite>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWrite>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWrite>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetch>::scFunctionRootName =
    "llvm.genx.GenISA.LSC2DBlockPrefetch";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetch>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetch>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetch>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetch>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCreateAddrPayload>::scFunctionRootName =
    "llvm.genx.GenISA.LSC2DBlockCreateAddrPayload";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCreateAddrPayload>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCreateAddrPayload>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCreateAddrPayload>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCreateAddrPayload>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCopyAddrPayload>::scFunctionRootName =
    "llvm.genx.GenISA.LSC2DBlockCopyAddrPayload";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCopyAddrPayload>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCopyAddrPayload>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCopyAddrPayload>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockCopyAddrPayload>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockSetAddrPayloadField>::scFunctionRootName =
    "llvm.genx.GenISA.LSC2DBlockSetAddrPayloadField";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockSetAddrPayloadField>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockSetAddrPayloadField>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockSetAddrPayloadField>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockSetAddrPayloadField>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockReadAddrPayload>::scFunctionRootName =
    "llvm.genx.GenISA.LSC2DBlockReadAddrPayload";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockReadAddrPayload>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockReadAddrPayload>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockReadAddrPayload>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockReadAddrPayload>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWriteAddrPayload>::scFunctionRootName =
    "llvm.genx.GenISA.LSC2DBlockWriteAddrPayload";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWriteAddrPayload>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWriteAddrPayload>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWriteAddrPayload>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockWriteAddrPayload>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetchAddrPayload>::scFunctionRootName =
    "llvm.genx.GenISA.LSC2DBlockPrefetchAddrPayload";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetchAddrPayload>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetchAddrPayload>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetchAddrPayload>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSC2DBlockPrefetchAddrPayload>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP32>::scFunctionRootName =
    "llvm.genx.GenISA.LSCAtomicFP32";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP32>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP32>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP32>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP32>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP64>::scFunctionRootName =
    "llvm.genx.GenISA.LSCAtomicFP64";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP64>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP64>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP64>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicFP64>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicInts>::scFunctionRootName =
    "llvm.genx.GenISA.LSCAtomicInts";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicInts>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicInts>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicInts>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCAtomicInts>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCFence>::scFunctionRootName =
    "llvm.genx.GenISA.LSCFence";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCFence>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCFence>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCFence>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCFence>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoad>::scFunctionRootName =
    "llvm.genx.GenISA.LSCLoad";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoad>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoad>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoad>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoad>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadWithSideEffects>::scFunctionRootName =
    "llvm.genx.GenISA.LSCLoadWithSideEffects";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadWithSideEffects>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadWithSideEffects>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadWithSideEffects>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadWithSideEffects>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadCmask>::scFunctionRootName =
    "llvm.genx.GenISA.LSCLoadCmask";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadCmask>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadCmask>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadCmask>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadCmask>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadBlock>::scFunctionRootName =
    "llvm.genx.GenISA.LSCLoadBlock";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadBlock>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadBlock>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadBlock>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadBlock>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadStatus>::scFunctionRootName =
    "llvm.genx.GenISA.LSCLoadStatus";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadStatus>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadStatus>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadStatus>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCLoadStatus>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCPrefetch>::scFunctionRootName =
    "llvm.genx.GenISA.LSCPrefetch";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCPrefetch>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCPrefetch>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCPrefetch>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCPrefetch>::scArgumentComments {
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCSimdBlockPrefetch>::scFunctionRootName =
    "llvm.genx.GenISA.LSCSimdBlockPrefetch";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCSimdBlockPrefetch>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCSimdBlockPrefetch>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCSimdBlockPrefetch>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCSimdBlockPrefetch>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStore>::scFunctionRootName =
    "llvm.genx.GenISA.LSCStore";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStore>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStore>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStore>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStore>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreCmask>::scFunctionRootName =
    "llvm.genx.GenISA.LSCStoreCmask";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreCmask>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreCmask>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreCmask>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreCmask>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreBlock>::scFunctionRootName =
    "llvm.genx.GenISA.LSCStoreBlock";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreBlock>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreBlock>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreBlock>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LSCStoreBlock>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bf8tohf>::scFunctionRootName =
    "llvm.genx.GenISA.bf8tohf";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bf8tohf>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bf8tohf>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bf8tohf>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bf8tohf>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HDCuncompressedwrite>::scFunctionRootName =
    "llvm.genx.GenISA.HDCuncompressedwrite";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HDCuncompressedwrite>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HDCuncompressedwrite>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HDCuncompressedwrite>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HDCuncompressedwrite>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_systemmemoryfence>::scFunctionRootName =
    "llvm.genx.GenISA.systemmemoryfence";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_systemmemoryfence>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_systemmemoryfence>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_systemmemoryfence>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_systemmemoryfence>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_urbfence>::scFunctionRootName =
    "llvm.genx.GenISA.urbfence";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_urbfence>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_urbfence>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_signal>::scFunctionRootName =
    "llvm.genx.GenISA.threadgroupnamedbarriers.signal";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_signal>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_signal>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_signal>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_signal>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_wait>::scFunctionRootName =
    "llvm.genx.GenISA.threadgroupnamedbarriers.wait";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_wait>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_wait>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_wait>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_threadgroupnamedbarriers_wait>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hftobf8>::scFunctionRootName =
    "llvm.genx.GenISA.hftobf8";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hftobf8>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hftobf8>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hftobf8>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_hftobf8>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftotf32>::scFunctionRootName =
    "llvm.genx.GenISA.ftotf32";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftotf32>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftotf32>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftotf32>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ftotf32>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_srnd_hftobf8>::scFunctionRootName =
    "llvm.genx.GenISA.srnd.hftobf8";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_srnd_hftobf8>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_srnd_hftobf8>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_srnd_hftobf8>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_srnd_hftobf8>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_srnd_ftohf>::scFunctionRootName =
    "llvm.genx.GenISA.srnd.ftohf";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_srnd_ftohf>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_srnd_ftohf>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_srnd_ftohf>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_srnd_ftohf>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveData>::scFunctionRootName =
    "llvm.genx.GenISA.OutputMeshPrimitiveData";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveData>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveData>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveData>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveData>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveDataInput>::scFunctionRootName =
    "llvm.genx.GenISA.OutputMeshPrimitiveDataInput";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveDataInput>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveDataInput>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveDataInput>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshPrimitiveDataInput>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshSivDataInput>::scFunctionRootName =
    "llvm.genx.GenISA.OutputMeshSivDataInput";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshSivDataInput>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshSivDataInput>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshSivDataInput>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshSivDataInput>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexData>::scFunctionRootName =
    "llvm.genx.GenISA.OutputMeshVertexData";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexData>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexData>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexData>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexData>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexDataInput>::scFunctionRootName =
    "llvm.genx.GenISA.OutputMeshVertexDataInput";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexDataInput>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexDataInput>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexDataInput>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputMeshVertexDataInput>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskData>::scFunctionRootName =
    "llvm.genx.GenISA.OutputTaskData";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskData>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskData>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskData>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskData>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskDataInput>::scFunctionRootName =
    "llvm.genx.GenISA.OutputTaskDataInput";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskDataInput>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskDataInput>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskDataInput>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_OutputTaskDataInput>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AcceptHitAndEndSearchHL>::scFunctionRootName =
    "llvm.genx.GenISA.AcceptHitAndEndSearchHL";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AcceptHitAndEndSearchHL>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AcceptHitAndEndSearchHL>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AllocaNumber>::scFunctionRootName =
    "llvm.genx.GenISA.AllocaNumber";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AllocaNumber>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AllocaNumber>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AllocaNumber>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AllocaNumber>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AllocateRayQuery>::scFunctionRootName =
    "llvm.genx.GenISA.AllocateRayQuery";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AllocateRayQuery>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AllocateRayQuery>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AllocateRayQuery>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AllocateRayQuery>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AsyncStackID>::scFunctionRootName =
    "llvm.genx.GenISA.AsyncStackID";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AsyncStackID>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AsyncStackID>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AsyncStackPtr>::scFunctionRootName =
    "llvm.genx.GenISA.AsyncStackPtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AsyncStackPtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AsyncStackPtr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AsyncStackPtr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_AsyncStackPtr>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SyncStackPtr>::scFunctionRootName =
    "llvm.genx.GenISA.SyncStackPtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SyncStackPtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SyncStackPtr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SyncStackPtr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SyncStackPtr>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_BindlessThreadDispatch>::scFunctionRootName =
    "llvm.genx.GenISA.BindlessThreadDispatch";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_BindlessThreadDispatch>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_BindlessThreadDispatch>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_BindlessThreadDispatch>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_BindlessThreadDispatch>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_CallShaderHL>::scFunctionRootName =
    "llvm.genx.GenISA.CallShaderHL";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_CallShaderHL>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_CallShaderHL>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_CallShaderHL>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_CallShaderHL>::scArgumentComments {
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DispatchDimensions>::scFunctionRootName =
    "llvm.genx.GenISA.DispatchDimensions";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DispatchDimensions>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DispatchDimensions>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DispatchDimensions>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DispatchDimensions>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DispatchRayIndex>::scFunctionRootName =
    "llvm.genx.GenISA.DispatchRayIndex";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DispatchRayIndex>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DispatchRayIndex>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DispatchRayIndex>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_DispatchRayIndex>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_FillValue>::scFunctionRootName =
    "llvm.genx.GenISA.FillValue";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_FillValue>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_FillValue>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_FillValue>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_FillValue>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetShaderRecordPtr>::scFunctionRootName =
    "llvm.genx.GenISA.GetShaderRecordPtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetShaderRecordPtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetShaderRecordPtr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetShaderRecordPtr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GetShaderRecordPtr>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GlobalBufferPointer>::scFunctionRootName =
    "llvm.genx.GenISA.GlobalBufferPointer";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GlobalBufferPointer>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GlobalBufferPointer>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GlobalRootSignatureValue>::scFunctionRootName =
    "llvm.genx.GenISA.GlobalRootSignatureValue";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GlobalRootSignatureValue>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GlobalRootSignatureValue>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GlobalRootSignatureValue>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_GlobalRootSignatureValue>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HitKind>::scFunctionRootName =
    "llvm.genx.GenISA.HitKind";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HitKind>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_HitKind>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IgnoreHitHL>::scFunctionRootName =
    "llvm.genx.GenISA.IgnoreHitHL";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IgnoreHitHL>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_IgnoreHitHL>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InlinedData>::scFunctionRootName =
    "llvm.genx.GenISA.InlinedData";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InlinedData>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InlinedData>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InlinedData>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_InlinedData>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LocalBufferPointer>::scFunctionRootName =
    "llvm.genx.GenISA.LocalBufferPointer";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LocalBufferPointer>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LocalBufferPointer>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LocalRootSignatureValue>::scFunctionRootName =
    "llvm.genx.GenISA.LocalRootSignatureValue";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LocalRootSignatureValue>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LocalRootSignatureValue>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LocalRootSignatureValue>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_LocalRootSignatureValue>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PayloadPtr>::scFunctionRootName =
    "llvm.genx.GenISA.PayloadPtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PayloadPtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PayloadPtr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PayloadPtr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PayloadPtr>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PreemptionEnable>::scFunctionRootName =
    "llvm.genx.GenISA.PreemptionEnable";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PreemptionEnable>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PreemptionEnable>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PreemptionEnable>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PreemptionEnable>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PreemptionDisable>::scFunctionRootName =
    "llvm.genx.GenISA.PreemptionDisable";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PreemptionDisable>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_PreemptionDisable>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayQueryCheck>::scFunctionRootName =
    "llvm.genx.GenISA.RayQueryCheck";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayQueryCheck>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayQueryCheck>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayQueryCheck>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayQueryCheck>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayQueryRelease>::scFunctionRootName =
    "llvm.genx.GenISA.RayQueryRelease";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayQueryRelease>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayQueryRelease>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayQueryRelease>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayQueryRelease>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ContinuationSignpost>::scFunctionRootName =
    "llvm.genx.GenISA.ContinuationSignpost";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ContinuationSignpost>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ContinuationSignpost>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ContinuationSignpost>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ContinuationSignpost>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTStatefulBTIAndOffset>::scFunctionRootName =
    "llvm.genx.GenISA.RTStatefulBTIAndOffset";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTStatefulBTIAndOffset>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTStatefulBTIAndOffset>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTStatefulBTIAndOffset>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RTStatefulBTIAndOffset>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayInfo>::scFunctionRootName =
    "llvm.genx.GenISA.RayInfo";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayInfo>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayInfo>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayInfo>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayInfo>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayTCurrent>::scFunctionRootName =
    "llvm.genx.GenISA.RayTCurrent";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayTCurrent>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayTCurrent>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayTCurrent>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_RayTCurrent>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReportHitHL>::scFunctionRootName =
    "llvm.genx.GenISA.ReportHitHL";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReportHitHL>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReportHitHL>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReportHitHL>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReportHitHL>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SpillValue>::scFunctionRootName =
    "llvm.genx.GenISA.SpillValue";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SpillValue>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SpillValue>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SpillValue>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SpillValue>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackIDRelease>::scFunctionRootName =
    "llvm.genx.GenISA.StackIDRelease";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackIDRelease>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackIDRelease>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackIDRelease>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackIDRelease>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackSize>::scFunctionRootName =
    "llvm.genx.GenISA.StackSize";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackSize>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_StackSize>::scResultComment =
    "";


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SWHotZonePtr>::scFunctionRootName =
    "llvm.genx.GenISA.SWHotZonePtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SWHotZonePtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SWHotZonePtr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SWHotZonePtr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SWHotZonePtr>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SWStackPtr>::scFunctionRootName =
    "llvm.genx.GenISA.SWStackPtr";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SWStackPtr>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SWStackPtr>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SWStackPtr>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SWStackPtr>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsync>::scFunctionRootName =
    "llvm.genx.GenISA.TraceRayAsync";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsync>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsync>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsync>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsync>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySync>::scFunctionRootName =
    "llvm.genx.GenISA.TraceRaySync";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySync>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySync>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySync>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySync>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceed>::scFunctionRootName =
    "llvm.genx.GenISA.TraceRaySyncProceed";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceed>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceed>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceed>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceed>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ShadowMemoryToSyncStack>::scFunctionRootName =
    "llvm.genx.GenISA.ShadowMemoryToSyncStack";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ShadowMemoryToSyncStack>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ShadowMemoryToSyncStack>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ShadowMemoryToSyncStack>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ShadowMemoryToSyncStack>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SyncStackToShadowMemory>::scFunctionRootName =
    "llvm.genx.GenISA.SyncStackToShadowMemory";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SyncStackToShadowMemory>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SyncStackToShadowMemory>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SyncStackToShadowMemory>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_SyncStackToShadowMemory>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReadTraceRaySync>::scFunctionRootName =
    "llvm.genx.GenISA.ReadTraceRaySync";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReadTraceRaySync>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReadTraceRaySync>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReadTraceRaySync>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_ReadTraceRaySync>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsyncHL>::scFunctionRootName =
    "llvm.genx.GenISA.TraceRayAsyncHL";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsyncHL>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsyncHL>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsyncHL>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayAsyncHL>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineAbort>::scFunctionRootName =
    "llvm.genx.GenISA.TraceRayInlineAbort";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineAbort>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineAbort>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineAbort>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineAbort>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCandidateType>::scFunctionRootName =
    "llvm.genx.GenISA.TraceRayInlineCandidateType";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCandidateType>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCandidateType>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCandidateType>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCandidateType>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitNonOpaqueTriangleHit>::scFunctionRootName =
    "llvm.genx.GenISA.TraceRayInlineCommitNonOpaqueTriangleHit";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitNonOpaqueTriangleHit>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitNonOpaqueTriangleHit>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitNonOpaqueTriangleHit>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitNonOpaqueTriangleHit>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitProceduralPrimitiveHit>::scFunctionRootName =
    "llvm.genx.GenISA.TraceRayInlineCommitProceduralPrimitiveHit";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitProceduralPrimitiveHit>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitProceduralPrimitiveHit>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitProceduralPrimitiveHit>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommitProceduralPrimitiveHit>::scArgumentComments {
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommittedStatus>::scFunctionRootName =
    "llvm.genx.GenISA.TraceRayInlineCommittedStatus";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommittedStatus>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommittedStatus>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommittedStatus>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineCommittedStatus>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineHL>::scFunctionRootName =
    "llvm.genx.GenISA.TraceRayInlineHL";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineHL>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineHL>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineHL>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineHL>::scArgumentComments {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceedHL>::scFunctionRootName =
    "llvm.genx.GenISA.TraceRaySyncProceedHL";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceedHL>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceedHL>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceedHL>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRaySyncProceedHL>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineRayInfo>::scFunctionRootName =
    "llvm.genx.GenISA.TraceRayInlineRayInfo";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineRayInfo>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineRayInfo>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineRayInfo>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_TraceRayInlineRayInfo>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_rt_swstack_offset>::scFunctionRootName =
    "llvm.genx.GenISA.rt.swstack.offset";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_rt_swstack_offset>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_rt_swstack_offset>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_rt_swstack_offset>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_rt_swstack_offset>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_FPBinaryOperator>::scFunctionRootName =
    "llvm.genx.GenISA.FPBinaryOperator";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_FPBinaryOperator>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_FPBinaryOperator>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_FPBinaryOperator>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_FPBinaryOperator>::scArgumentComments {
        "",
        "",
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bitcastfromstruct>::scFunctionRootName =
    "llvm.genx.GenISA.bitcastfromstruct";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bitcastfromstruct>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bitcastfromstruct>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bitcastfromstruct>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bitcastfromstruct>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bitcasttostruct>::scFunctionRootName =
    "llvm.genx.GenISA.bitcasttostruct";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bitcasttostruct>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bitcasttostruct>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bitcasttostruct>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_bitcasttostruct>::scArgumentComments {
        ""
    };


const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_inv>::scFunctionRootName =
    "llvm.genx.GenISA.inv";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_inv>::scMainComment =
    "";
const char* IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_inv>::scResultComment =
    "";
const std::array<const char*, static_cast<uint32_t>(IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_inv>::Argument::Count)>
    IntrinsicDefinition<llvm::GenISAIntrinsic::ID::GenISA_inv>::scArgumentComments {
        ""
    };

} // namespace IGC
