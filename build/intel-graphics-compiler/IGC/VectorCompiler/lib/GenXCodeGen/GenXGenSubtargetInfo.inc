/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {

namespace GenX {

enum {
  FeatureFDivFSqrt64Emulation = 0,
  FeatureFP64 = 1,
  FeatureFusedEU = 2,
  FeatureGRFByteSize64 = 3,
  FeatureHWTIDFromPredef = 4,
  FeatureHas7ThreadsPerEU = 5,
  FeatureHas8ThreadsPerEU = 6,
  FeatureHasAdd3 = 7,
  FeatureHasBfn = 8,
  FeatureHasHalfSIMDLSC = 9,
  FeatureHasL1ReadOnlyCache = 10,
  FeatureHasLSC = 11,
  FeatureHasLSCOffset = 12,
  FeatureHasLSCTyped = 13,
  FeatureHasLargeGRF = 14,
  FeatureHasMadSimd32 = 15,
  FeatureHasMediaWalker = 16,
  FeatureHasNamedBarriers = 17,
  FeatureHasOWordSLM = 18,
  FeatureHasPackedFloat = 19,
  FeatureHasSad2 = 20,
  FeatureIEEEDivSqrt = 21,
  FeatureIndirectByteGRFCrossing = 22,
  FeatureIndirectGRFCrossing = 23,
  FeatureInstr64BitRotate = 24,
  FeatureInstrAdd64 = 25,
  FeatureInstrBitRotate = 26,
  FeatureInstrGlobalAtomicAddF64 = 27,
  FeatureInstrLocalIntegerCas64 = 28,
  FeatureIntDivRem32 = 29,
  FeatureL3CacheCoherentCrossTiles = 30,
  FeatureL3FlushOnGPUScopeInvalidate = 31,
  FeatureLSCMaxWidth32 = 32,
  FeatureLongLong = 33,
  FeatureLongLongEmulation = 34,
  FeatureMultiIndirectByteRegioning = 35,
  FeatureMultiTile = 36,
  FeatureNoJmpi = 37,
  FeatureNoJumpTables = 38,
  FeatureNoLegacyDataport = 39,
  FeaturePartialI64Emulation = 40,
  FeaturePreemption = 41,
  FeatureSLM64K = 42,
  FeatureSLM128K = 43,
  FeatureSupressLocalMemFence = 44,
  FeatureSwitchjmp = 45,
  FeatureSystolicDenormControl = 46,
  FeatureThreadPayloadInMemory = 47,
  FeatureTransLegacy = 48,
  FeatureUseMulDDQ = 49,
  FeatureVectorDecomp = 50,
  FeatureWAFusedEUNoMask = 51,
  FeatureWaNoA32ByteScatter = 52,
  OCLRuntime = 53,
  WarnCallable = 54,
  NumSubtargetFeatures = 55
};

} // namespace GenX

} // namespace llvm

#endif // GET_SUBTARGETINFO_ENUM

#ifdef GET_SUBTARGETINFO_MACRO

GET_SUBTARGETINFO_MACRO(DisableJmpi, false, disableJmpi)
GET_SUBTARGETINFO_MACRO(DisableJumpTables, false, disableJumpTables)
GET_SUBTARGETINFO_MACRO(DisableVectorDecomposition, false, disableVectorDecomposition)
GET_SUBTARGETINFO_MACRO(EmulateLongLong, false, emulateLongLong)
GET_SUBTARGETINFO_MACRO(FDivFSqrt64Emu, false, fDivFSqrt64Emu)
GET_SUBTARGETINFO_MACRO(GetsHWTIDFromPredef, false, getsHWTIDFromPredef)
GET_SUBTARGETINFO_MACRO(Has64BitRotate, false, has64BitRotate)
GET_SUBTARGETINFO_MACRO(HasAdd3, false, hasAdd3)
GET_SUBTARGETINFO_MACRO(HasAdd64, false, hasAdd64)
GET_SUBTARGETINFO_MACRO(HasBfn, false, hasBfn)
GET_SUBTARGETINFO_MACRO(HasBitRotate, false, hasBitRotate)
GET_SUBTARGETINFO_MACRO(HasFP64, false, hasFP64)
GET_SUBTARGETINFO_MACRO(HasFusedEU, false, hasFusedEU)
GET_SUBTARGETINFO_MACRO(HasGlobalAtomicAddF64, false, hasGlobalAtomicAddF64)
GET_SUBTARGETINFO_MACRO(HasHalfSIMDLSC, false, hasHalfSIMDLSC)
GET_SUBTARGETINFO_MACRO(HasIEEEDivSqrt, false, hasIEEEDivSqrt)
GET_SUBTARGETINFO_MACRO(HasIndirectGRFCrossing, false, hasIndirectGRFCrossing)
GET_SUBTARGETINFO_MACRO(HasIndirectGRFCrossing, false, hasIndirectGRFCrossing)
GET_SUBTARGETINFO_MACRO(HasIntDivRem32, false, hasIntDivRem32)
GET_SUBTARGETINFO_MACRO(HasL1ReadOnlyCache, false, hasL1ReadOnlyCache)
GET_SUBTARGETINFO_MACRO(HasL3CacheCoherentCrossTiles, false, hasL3CacheCoherentCrossTiles)
GET_SUBTARGETINFO_MACRO(HasL3FlushOnGPUScopeInvalidate, false, hasL3FlushOnGPUScopeInvalidate)
GET_SUBTARGETINFO_MACRO(HasLSCMessages, false, hasLSCMessages)
GET_SUBTARGETINFO_MACRO(HasLSCOffset, false, hasLSCOffset)
GET_SUBTARGETINFO_MACRO(HasLSCTypedMessages, false, hasLSCTypedMessages)
GET_SUBTARGETINFO_MACRO(HasLargeGRF, false, hasLargeGRF)
GET_SUBTARGETINFO_MACRO(HasLocalIntegerCas64, false, hasLocalIntegerCas64)
GET_SUBTARGETINFO_MACRO(HasLocalMemFenceSupress, false, hasLocalMemFenceSupress)
GET_SUBTARGETINFO_MACRO(HasLongLong, false, hasLongLong)
GET_SUBTARGETINFO_MACRO(HasMadSimd32, false, hasMadSimd32)
GET_SUBTARGETINFO_MACRO(HasMediaWalker, false, hasMediaWalker)
GET_SUBTARGETINFO_MACRO(HasMultiIndirectByteRegioning, false, hasMultiIndirectByteRegioning)
GET_SUBTARGETINFO_MACRO(HasMultiTile, false, hasMultiTile)
GET_SUBTARGETINFO_MACRO(HasNamedBarriers, false, hasNamedBarriers)
GET_SUBTARGETINFO_MACRO(HasPackedFloat, false, hasPackedFloat)
GET_SUBTARGETINFO_MACRO(HasPreemption, false, hasPreemption)
GET_SUBTARGETINFO_MACRO(HasSLMOWord, false, hasSLMOWord)
GET_SUBTARGETINFO_MACRO(HasSad2, false, hasSad2)
GET_SUBTARGETINFO_MACRO(HasSwitchjmp, false, hasSwitchjmp)
GET_SUBTARGETINFO_MACRO(HasSystolicDenormControl, false, hasSystolicDenormControl)
GET_SUBTARGETINFO_MACRO(HasThreadPayloadInMemory, false, hasThreadPayloadInMemory)
GET_SUBTARGETINFO_MACRO(HasWaNoA32ByteScatter, false, hasWaNoA32ByteScatter)
GET_SUBTARGETINFO_MACRO(NoLegacyDataport, false, noLegacyDataport)
GET_SUBTARGETINFO_MACRO(OCLRuntime, false, oCLRuntime)
GET_SUBTARGETINFO_MACRO(PartialI64Emulation, false, partialI64Emulation)
GET_SUBTARGETINFO_MACRO(TranslateLegacyMessages, false, translateLegacyMessages)
GET_SUBTARGETINFO_MACRO(UseMulDDQ, false, useMulDDQ)
GET_SUBTARGETINFO_MACRO(WaNoMaskFusedEU, false, waNoMaskFusedEU)
GET_SUBTARGETINFO_MACRO(WarnCallable, false, warnCallable)

#undef GET_SUBTARGETINFO_MACRO
#endif // GET_SUBTARGETINFO_MACRO

#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {

// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV GenXFeatureKV[] = {
  { "add64", "enable support for native add64 instruction", GenX::FeatureInstrAdd64, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "bitrotate", "support of rol/ror instructions", GenX::FeatureInstrBitRotate, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "bitrotate64", "support of 64-bit rol/ror instructions", GenX::FeatureInstr64BitRotate, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "disable_jmpi", "disable jmpi", GenX::FeatureNoJmpi, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "disable_jump_tables", "disable switch to jump tables lowering", GenX::FeatureNoJumpTables, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "disable_vec_decomp", "disable vector decomposition pass", GenX::FeatureVectorDecomp, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "divrem32", "supports 32-bit integer division", GenX::FeatureIntDivRem32, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "emulate_i64", "emulate 64-bit operations", GenX::FeatureLongLongEmulation, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_7threads_per_eu", "Target has 7 threads per EU", GenX::FeatureHas7ThreadsPerEU, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_8threads_per_eu", "Target has 8 threads per EU", GenX::FeatureHas8ThreadsPerEU, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_has_add3", "Target supports 3-way addition", GenX::FeatureHasAdd3, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_has_bfn", "Target supports 3-way boolean function", GenX::FeatureHasBfn, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_has_half_simd_lsc", "Target supports half simd lsc", GenX::FeatureHasHalfSIMDLSC, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_has_large_grf", "Target supports large GRF mode", GenX::FeatureHasLargeGRF, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_has_lsc", "Target supports LSC messages", GenX::FeatureHasLSC, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_has_lsc_offset", "Target supports constant offset for LSC messages", GenX::FeatureHasLSCOffset, { { { 0x800ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_has_lsc_typed", "Target supports typed LSC messages", GenX::FeatureHasLSCTyped, { { { 0x800ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_has_mad_simd32", "Target supports SIMD32 mad instruction", GenX::FeatureHasMadSimd32, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_has_media_walker", "Target supports media walker interface", GenX::FeatureHasMediaWalker, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_has_named_barriers", "Target supports named barriers", GenX::FeatureHasNamedBarriers, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_has_sad2", "Target supports sad2/sad2a instructions", GenX::FeatureHasSad2, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "feature_has_slm_oword", "Target supports OWord block SLM messages", GenX::FeatureHasOWordSLM, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "fp64", "support for double types", GenX::FeatureFP64, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "fp64_fdiv_fsqrt_emu", "emulate double precision division and square root", GenX::FeatureFDivFSqrt64Emulation, { { { 0x2ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "fusedEU", "has fused EUs", GenX::FeatureFusedEU, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "globaldoubleaddsub", "support of global double precision atomic add/sub instructions", GenX::FeatureInstrGlobalAtomicAddF64, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "grf_byte_size_64", "Every GRF byte size is 64", GenX::FeatureGRFByteSize64, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "has_l1_read_only_cache", "Has L1 read-only cache", GenX::FeatureHasL1ReadOnlyCache, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "has_packed_float", "true if packed float immediate vector operands are supported", GenX::FeatureHasPackedFloat, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "hwtidfrompredef", "hwtid is obtained from predefined variable", GenX::FeatureHWTIDFromPredef, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "ieee_div_sqrt", "supports IEEE-754 div and sqrt", GenX::FeatureIEEEDivSqrt, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "indirect_byte_grf_crossing", "Target supports an indirect region crossing one GRF boundary", GenX::FeatureIndirectByteGRFCrossing, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "indirect_grf_crossing", "Target supports an indirect region crossing one GRF boundary", GenX::FeatureIndirectGRFCrossing, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "l3_cache_coherent_cross_tiles", "Has L3 cache coherent cross tiles", GenX::FeatureL3CacheCoherentCrossTiles, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "l3_flush_on_gpu_scope_invalidate", "Has L3 flush on GPU scope invalidate", GenX::FeatureL3FlushOnGPUScopeInvalidate, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "lightweight_i64_emulation", "emulate subset of 64-bit operations", GenX::FeaturePartialI64Emulation, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "localintegercas64", "support of local 64-bit integer compare exchange instruction", GenX::FeatureInstrLocalIntegerCas64, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "longlong", "supports long long", GenX::FeatureLongLong, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "lsc_max_width_32", "LSC messages have a maximum width of 32", GenX::FeatureLSCMaxWidth32, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "mul_ddq", "use native support for mul [U]Dx[U]D->Q", GenX::FeatureUseMulDDQ, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "multi_indirect_byte_regioning", "Vx1 and VxH indirect addressing for Byte datatypes", GenX::FeatureMultiIndirectByteRegioning, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "multi_tile", "Multi-tile", GenX::FeatureMultiTile, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "no_legacy_dataport", "true if platform has no legacy dataport", GenX::FeatureNoLegacyDataport, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "ocl_runtime", "Prepare structures for OCL runtime", GenX::OCLRuntime, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "preemption", "supports preemption", GenX::FeaturePreemption, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "slm_128k", "Target supports up to 128k of SLM", GenX::FeatureSLM128K, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "slm_64k", "Target supports up to 64k of SLM", GenX::FeatureSLM64K, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "supress_local_mem_fence", "Supresses local memory fence", GenX::FeatureSupressLocalMemFence, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "switchjmp", "supports switchjmp visa instruction", GenX::FeatureSwitchjmp, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "systolic_denorm_control", "supports control for systolic pipeline types denormal values", GenX::FeatureSystolicDenormControl, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "thread_payload_in_memory", "need to load thread payload from memory", GenX::FeatureThreadPayloadInMemory, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "translate_legacy_message", "translate legacy message to LSC", GenX::FeatureTransLegacy, { { { 0x800ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "wa_no_a32_byte_scatter_stateless", "Target doesn't support A32 byte scatter stateless message", GenX::FeatureWaNoA32ByteScatter, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "wa_nomask_fusedEU", "needs workaround for nomask operations under divergent control-flow", GenX::FeatureWAFusedEUNoMask, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
  { "warn_callable", "warn instead of error on callable violation", GenX::WarnCallable, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#define DBGVAL_OR_NULLPTR(x) x
#else
#define DBGFIELD(x)
#define DBGVAL_OR_NULLPTR(x) nullptr
#endif

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, ReleaseAtCycle, AcquireAtCycle}
extern const llvm::MCWriteProcResEntry GenXWriteProcResTable[] = {
  { 0,  0,  0 }, // Invalid
}; // GenXWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry GenXWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // GenXWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry GenXReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // GenXReadAdvanceTable

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
static constexpr char GenXSchedClassNamesStorage[] =
  "\0"
  "InvalidSchedClass\0"
  ;
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

static constexpr llvm::StringTable
GenXSchedClassNames = GenXSchedClassNamesStorage;

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  false, // EnableIntervals
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  DBGVAL_OR_NULLPTR(&GenXSchedClassNames), // SchedClassNames
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

#undef DBGFIELD

#undef DBGVAL_OR_NULLPTR

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetSubTypeKV GenXSubTypeKV[] = {
 { "Gen11", { { { 0x260c24ed8030ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "Gen8", { { { 0x10240a22390032ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "Gen9", { { { 0x12260a22f90032ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "Gen9LP", { { { 0x12260a22d90032ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "Xe2", { { { 0x1eb831ba6f9caULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "XeHP", { { { 0x880a06ecc1c6ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "XeHPC", { { { 0xa9031baec9caULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "XeHPCVG", { { { 0xa9031baec9caULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "XeHPG", { { { 0x880c04ccc9c4ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "XeLP", { { { 0x8060c24cd8034ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "XeLPG", { { { 0x880c04ccc9c7ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "XeLPGPlus", { { { 0x880c04ccc9c7ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
 { "generic", { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, { { { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, } } }, &NoSchedModel },
};

// Sorted array of names of CPU subtypes, including aliases.
extern const llvm::StringRef GenXNames[] = {
"Gen11",
"Gen8",
"Gen9",
"Gen9LP",
"Xe2",
"XeHP",
"XeHPC",
"XeHPCVG",
"XeHPG",
"XeLP",
"XeLPG",
"XeLPGPlus",
"generic"};

namespace GenX_MC {

unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, const MCInstrInfo *MCII, const MCSubtargetInfo &STI, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}

} // namespace GenX_MC
struct GenXGenMCSubtargetInfo : public MCSubtargetInfo {
  GenXGenMCSubtargetInfo(const Triple &TT,
    StringRef CPU, StringRef TuneCPU, StringRef FS,
    ArrayRef<StringRef> PN,
    ArrayRef<SubtargetFeatureKV> PF,
    ArrayRef<SubtargetSubTypeKV> PD,
    const MCWriteProcResEntry *WPR,
    const MCWriteLatencyEntry *WL,
    const MCReadAdvanceEntry *RA, const InstrStage *IS,
    const unsigned *OC, const unsigned *FP) :
      MCSubtargetInfo(TT, CPU, TuneCPU, FS, PN, PF, PD,
                      WPR, WL, RA, IS, OC, FP) { }

  unsigned resolveVariantSchedClass(unsigned SchedClass,
      const MCInst *MI, const MCInstrInfo *MCII,
      unsigned CPUID) const override {
    return GenX_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, *this, CPUID);
  }
};

static inline MCSubtargetInfo *createGenXMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS) {
  return new GenXGenMCSubtargetInfo(TT, CPU, TuneCPU, FS, GenXNames, GenXFeatureKV, GenXSubTypeKV, 
                      GenXWriteProcResTable, GenXWriteLatencyTable, GenXReadAdvanceTable, 
                      nullptr, nullptr, nullptr);
}


} // namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC

#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/ADT/BitmaskEnum.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::GenXSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef TuneCPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU);
  LLVM_DEBUG(dbgs() << "\nTuneCPU:" << TuneCPU << "\n\n");
  InitMCProcessorInfo(CPU, TuneCPU, FS);
  const FeatureBitset &Bits = getFeatureBits();
  if (Bits[GenX::FeatureFDivFSqrt64Emulation]) FDivFSqrt64Emu = true;
  if (Bits[GenX::FeatureFP64]) HasFP64 = true;
  if (Bits[GenX::FeatureFusedEU]) HasFusedEU = true;
  if (Bits[GenX::FeatureGRFByteSize64] && GRFByteSize < 64) GRFByteSize = 64;
  if (Bits[GenX::FeatureHWTIDFromPredef]) GetsHWTIDFromPredef = true;
  if (Bits[GenX::FeatureHas7ThreadsPerEU] && NumThreadsPerEU < 7) NumThreadsPerEU = 7;
  if (Bits[GenX::FeatureHas8ThreadsPerEU] && NumThreadsPerEU < 8) NumThreadsPerEU = 8;
  if (Bits[GenX::FeatureHasAdd3]) HasAdd3 = true;
  if (Bits[GenX::FeatureHasBfn]) HasBfn = true;
  if (Bits[GenX::FeatureHasHalfSIMDLSC]) HasHalfSIMDLSC = true;
  if (Bits[GenX::FeatureHasL1ReadOnlyCache]) HasL1ReadOnlyCache = true;
  if (Bits[GenX::FeatureHasLSC]) HasLSCMessages = true;
  if (Bits[GenX::FeatureHasLSCOffset]) HasLSCOffset = true;
  if (Bits[GenX::FeatureHasLSCTyped]) HasLSCTypedMessages = true;
  if (Bits[GenX::FeatureHasLargeGRF]) HasLargeGRF = true;
  if (Bits[GenX::FeatureHasMadSimd32]) HasMadSimd32 = true;
  if (Bits[GenX::FeatureHasMediaWalker]) HasMediaWalker = true;
  if (Bits[GenX::FeatureHasNamedBarriers]) HasNamedBarriers = true;
  if (Bits[GenX::FeatureHasOWordSLM]) HasSLMOWord = true;
  if (Bits[GenX::FeatureHasPackedFloat]) HasPackedFloat = true;
  if (Bits[GenX::FeatureHasSad2]) HasSad2 = true;
  if (Bits[GenX::FeatureIEEEDivSqrt]) HasIEEEDivSqrt = true;
  if (Bits[GenX::FeatureIndirectByteGRFCrossing]) HasIndirectGRFCrossing = true;
  if (Bits[GenX::FeatureIndirectGRFCrossing]) HasIndirectGRFCrossing = true;
  if (Bits[GenX::FeatureInstr64BitRotate]) Has64BitRotate = true;
  if (Bits[GenX::FeatureInstrAdd64]) HasAdd64 = true;
  if (Bits[GenX::FeatureInstrBitRotate]) HasBitRotate = true;
  if (Bits[GenX::FeatureInstrGlobalAtomicAddF64]) HasGlobalAtomicAddF64 = true;
  if (Bits[GenX::FeatureInstrLocalIntegerCas64]) HasLocalIntegerCas64 = true;
  if (Bits[GenX::FeatureIntDivRem32]) HasIntDivRem32 = true;
  if (Bits[GenX::FeatureL3CacheCoherentCrossTiles]) HasL3CacheCoherentCrossTiles = true;
  if (Bits[GenX::FeatureL3FlushOnGPUScopeInvalidate]) HasL3FlushOnGPUScopeInvalidate = true;
  if (Bits[GenX::FeatureLSCMaxWidth32] && LSCMaxWidth < 32) LSCMaxWidth = 32;
  if (Bits[GenX::FeatureLongLong]) HasLongLong = true;
  if (Bits[GenX::FeatureLongLongEmulation]) EmulateLongLong = true;
  if (Bits[GenX::FeatureMultiIndirectByteRegioning]) HasMultiIndirectByteRegioning = true;
  if (Bits[GenX::FeatureMultiTile]) HasMultiTile = true;
  if (Bits[GenX::FeatureNoJmpi]) DisableJmpi = true;
  if (Bits[GenX::FeatureNoJumpTables]) DisableJumpTables = true;
  if (Bits[GenX::FeatureNoLegacyDataport]) NoLegacyDataport = true;
  if (Bits[GenX::FeaturePartialI64Emulation]) PartialI64Emulation = true;
  if (Bits[GenX::FeaturePreemption]) HasPreemption = true;
  if (Bits[GenX::FeatureSLM64K] && MaxSLMSize < 64) MaxSLMSize = 64;
  if (Bits[GenX::FeatureSLM128K] && MaxSLMSize < 128) MaxSLMSize = 128;
  if (Bits[GenX::FeatureSupressLocalMemFence]) HasLocalMemFenceSupress = true;
  if (Bits[GenX::FeatureSwitchjmp]) HasSwitchjmp = true;
  if (Bits[GenX::FeatureSystolicDenormControl]) HasSystolicDenormControl = true;
  if (Bits[GenX::FeatureThreadPayloadInMemory]) HasThreadPayloadInMemory = true;
  if (Bits[GenX::FeatureTransLegacy]) TranslateLegacyMessages = true;
  if (Bits[GenX::FeatureUseMulDDQ]) UseMulDDQ = true;
  if (Bits[GenX::FeatureVectorDecomp]) DisableVectorDecomposition = true;
  if (Bits[GenX::FeatureWAFusedEUNoMask]) WaNoMaskFusedEU = true;
  if (Bits[GenX::FeatureWaNoA32ByteScatter]) HasWaNoA32ByteScatter = true;
  if (Bits[GenX::OCLRuntime]) OCLRuntime = true;
  if (Bits[GenX::WarnCallable]) WarnCallable = true;
}

#endif // GET_SUBTARGETINFO_TARGET_DESC

#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {

class DFAPacketizer;
namespace GenX_MC {

unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, const MCSubtargetInfo &STI, unsigned CPUID);

} // namespace GenX_MC
struct GenXGenSubtargetInfo : public TargetSubtargetInfo {
  explicit GenXGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  unsigned resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};

} // namespace llvm

#endif // GET_SUBTARGETINFO_HEADER

#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {

extern const llvm::StringRef GenXNames[];
extern const llvm::SubtargetFeatureKV GenXFeatureKV[];
extern const llvm::SubtargetSubTypeKV GenXSubTypeKV[];
extern const llvm::MCWriteProcResEntry GenXWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry GenXWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry GenXReadAdvanceTable[];
GenXGenSubtargetInfo::GenXGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef TuneCPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, TuneCPU, FS, ArrayRef(GenXNames, 13), ArrayRef(GenXFeatureKV, 55), ArrayRef(GenXSubTypeKV, 13), 
                        GenXWriteProcResTable, GenXWriteLatencyTable, GenXReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned GenXGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // GenXGenSubtargetInfo::resolveSchedClass

unsigned GenXGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, const MCInstrInfo *MCII, unsigned CPUID) const {
  return GenX_MC::resolveVariantSchedClassImpl(SchedClass, MI, MCII, *this, CPUID);
} // GenXGenSubtargetInfo::resolveVariantSchedClass


} // namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS


#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

