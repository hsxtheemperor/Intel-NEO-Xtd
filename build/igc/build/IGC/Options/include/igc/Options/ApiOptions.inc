/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// String table

#ifdef OPTTABLE_STR_TABLE_CODE

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
static constexpr char OptionStrTableStorage[] =
  "\0"
  "-\0"
  "<input>\0"
  "<unknown>\0"
  "-128-GRF-per-thread\0"
  "-256-GRF-per-thread\0"
  "-cl-128-GRF-per-thread\0"
  "-cl-256-GRF-per-thread\0"
  "-cl-denorms-are-zero\0"
  "-cl-disable-compaction\0"
  "-cl-emit-lib-compile-errors\0"
  "-cl-enable-auto-large-GRF-mode\0"
  "-cl-exp-register-file-size=\0"
  "-cl-exp-register-file-size\0"
  "-cl-fast-relaxed-math\0"
  "-cl-finite-math-only\0"
  "-cl-fp32-correctly-rounded-divide-sqrt\0"
  "-cl-fp64-gen-conv-emu\0"
  "-cl-fp64-gen-emu\0"
  "-cl-greater-than-4GB-buffer-required\0"
  "-cl-gtpin-grf-info\0"
  "-cl-gtpin-indir-ref\0"
  "-cl-gtpin-rera\0"
  "-cl-gtpin-scratch-area-size=\0"
  "-cl-gtpin-scratch-area-size\0"
  "-cl-intel-128-GRF-per-thread\0"
  "-cl-intel-256-GRF-per-thread\0"
  "-cl-intel-debug-info\0"
  "-cl-intel-disable-a64WA\0"
  "-cl-intel-disable-compaction\0"
  "-cl-intel-emit-lib-compile-errors\0"
  "-cl-intel-enable-auto-large-GRF-mode\0"
  "-cl-intel-exp-register-file-size=\0"
  "-cl-intel-exp-register-file-size\0"
  "-cl-intel-fp32-correctly-rounded-divide-sqrt\0"
  "-cl-intel-fp64-gen-conv-emu\0"
  "-cl-intel-fp64-gen-emu\0"
  "-cl-intel-greater-than-4GB-buffer-required\0"
  "-cl-intel-gtpin-grf-info\0"
  "-cl-intel-gtpin-indir-ref\0"
  "-cl-intel-gtpin-rera\0"
  "-cl-intel-gtpin-scratch-area-size=\0"
  "-cl-intel-gtpin-scratch-area-size\0"
  "-cl-intel-large-grf-kernel\0"
  "-cl-intel-large-register-file\0"
  "-cl-intel-library-compilation\0"
  "-cl-intel-library-compile-simd=\0"
  "-cl-intel-library-compile-simd\0"
  "-cl-intel-no-fusedCallWA\0"
  "-cl-intel-no-local-to-generic\0"
  "-cl-intel-no-subgroup-ifp\0"
  "-cl-intel-opt-disable\0"
  "-cl-intel-poison-unsupported-fp64-kernels\0"
  "-cl-intel-regular-grf-kernel\0"
  "-cl-intel-reqd-eu-thread-count=\0"
  "-cl-intel-reqd-eu-thread-count\0"
  "-cl-intel-skip-fde\0"
  "-cl-intel-static-profile-guided-trimming\0"
  "-cl-intel-take-global-address\0"
  "-cl-intel-uniform-work-group-size\0"
  "-cl-kernel-arg-info\0"
  "-cl-large-grf-kernel\0"
  "-cl-large-register-file\0"
  "-cl-library-compilation\0"
  "-cl-library-compile-simd=\0"
  "-cl-library-compile-simd\0"
  "-cl-mad-enable\0"
  "-cl-match-sincospi\0"
  "-cl-no-fusedCallWA\0"
  "-cl-no-local-to-generic\0"
  "-cl-no-signed-zeros\0"
  "-cl-no-subgroup-ifp\0"
  "-cl-opt-disable\0"
  "-cl-poison-unsupported-fp64-kernels\0"
  "-cl-regular-grf-kernel\0"
  "-cl-reqd-eu-thread-count=\0"
  "-cl-reqd-eu-thread-count\0"
  "-cl-single-precision-constant\0"
  "-cl-skip-fde\0"
  "-cl-static-profile-guided-trimming\0"
  "-cl-std=\0"
  "-cl-strict-aliasing\0"
  "-cl-take-global-address\0"
  "-cl-uniform-work-group-size\0"
  "-cl-unsafe-math-optimizations\0"
  "-cmc\0"
  "-codegen-optimize=\0"
  "-codegen-optimize\0"
  "-disable-compaction\0"
  "-disable-finalizer-msg\0"
  "-double-GRF\0"
  "-doubleGRF\0"
  "-dump-opt-llvm=\0"
  "-dwarf-column-info\0"
  "-D\0"
  "-emit-lib-compile-errors\0"
  "-enable-auto-large-GRF-mode\0"
  "-exp-register-file-size=\0"
  "-exp-register-file-size\0"
  "-ffp-contract=\0"
  "-fno-jump-tables\0"
  "-fno-struct-splitting\0"
  "-fp32-correctly-rounded-divide-sqrt\0"
  "-fp64-gen-conv-emu\0"
  "-fp64-gen-emu\0"
  "-ftranslate-legacy-memory-intrinsics\0"
  "-gline-tables-only\0"
  "-greater-than-4GB-buffer-required\0"
  "-gtpin-grf-info\0"
  "-gtpin-indir-ref\0"
  "-gtpin-rera\0"
  "-gtpin-scratch-area-size=\0"
  "-gtpin-scratch-area-size\0"
  "-g\0"
  "-igc_opts\0"
  "-I\0"
  "-large-grf-kernel\0"
  "-large-register-file\0"
  "-library-compilation\0"
  "-library-compile-simd=\0"
  "-library-compile-simd\0"
  "-no-fusedCallWA\0"
  "-no-local-to-generic\0"
  "-no-optimize\0"
  "-no-subgroup-ifp\0"
  "-no-vector-decomposition\0"
  "-no_vector_decomposition\0"
  "-opt-disable\0"
  "-optimize=\0"
  "-optimize\0"
  "-poison-unsupported-fp64-kernels\0"
  "-profiler\0"
  "-regular-grf-kernel\0"
  "-reqd-eu-thread-count=\0"
  "-reqd-eu-thread-count\0"
  "-skip-fde\0"
  "-spir-std=\0"
  "-stack-mem-size=\0"
  "-stateless-stack-mem-size=\0"
  "-static-profile-guided-trimming\0"
  "-s\0"
  "-take-global-address\0"
  "-triple\0"
  "-uniform-work-group-size\0"
  "-vc-codegen\0"
  "-vc-disable-indvars-opt\0"
  "-vc-disable-non-overlapping-region-opt\0"
  "-vc-enable-preemption\0"
  "-vc-use-plain-2d-images\0"
  "-visaopts=\0"
  "-Werror\0"
  "-w\0"
  "-Xfinalizer\0"
  "-x\0"
  "-ze-128-GRF-per-thread\0"
  "-ze-256-GRF-per-thread\0"
  "-ze-disable-compaction\0"
  "-ze-emit-lib-compile-errors\0"
  "-ze-enable-auto-large-GRF-mode\0"
  "-ze-exp-register-file-size=\0"
  "-ze-exp-register-file-size\0"
  "-ze-fp32-correctly-rounded-divide-sqrt\0"
  "-ze-fp64-gen-conv-emu\0"
  "-ze-fp64-gen-emu\0"
  "-ze-greater-than-4GB-buffer-required\0"
  "-ze-gtpin-grf-info\0"
  "-ze-gtpin-indir-ref\0"
  "-ze-gtpin-rera\0"
  "-ze-gtpin-scratch-area-size=\0"
  "-ze-gtpin-scratch-area-size\0"
  "-ze-intel-128-GRF-per-thread\0"
  "-ze-intel-256-GRF-per-thread\0"
  "-ze-intel-disable-compaction\0"
  "-ze-intel-emit-lib-compile-errors\0"
  "-ze-intel-enable-auto-large-GRF-mode\0"
  "-ze-intel-exp-register-file-size=\0"
  "-ze-intel-exp-register-file-size\0"
  "-ze-intel-fp32-correctly-rounded-divide-sqrt\0"
  "-ze-intel-fp64-gen-conv-emu\0"
  "-ze-intel-fp64-gen-emu\0"
  "-ze-intel-greater-than-4GB-buffer-required\0"
  "-ze-intel-gtpin-grf-info\0"
  "-ze-intel-gtpin-indir-ref\0"
  "-ze-intel-gtpin-rera\0"
  "-ze-intel-gtpin-scratch-area-size=\0"
  "-ze-intel-gtpin-scratch-area-size\0"
  "-ze-intel-large-grf-kernel\0"
  "-ze-intel-large-register-file\0"
  "-ze-intel-library-compilation\0"
  "-ze-intel-library-compile-simd=\0"
  "-ze-intel-library-compile-simd\0"
  "-ze-intel-no-fusedCallWA\0"
  "-ze-intel-no-local-to-generic\0"
  "-ze-intel-no-subgroup-ifp\0"
  "-ze-intel-opt-disable\0"
  "-ze-intel-poison-unsupported-fp64-kernels\0"
  "-ze-intel-regular-grf-kernel\0"
  "-ze-intel-reqd-eu-thread-count=\0"
  "-ze-intel-reqd-eu-thread-count\0"
  "-ze-intel-skip-fde\0"
  "-ze-intel-static-profile-guided-trimming\0"
  "-ze-intel-take-global-address\0"
  "-ze-intel-uniform-work-group-size\0"
  "-ze-kernel-debug-enable\0"
  "-ze-large-grf-kernel\0"
  "-ze-large-register-file\0"
  "-ze-library-compilation\0"
  "-ze-library-compile-simd=\0"
  "-ze-library-compile-simd\0"
  "-ze-no-fusedCallWA\0"
  "-ze-no-local-to-generic\0"
  "-ze-no-subgroup-ifp\0"
  "-ze-no-vector-decomposition\0"
  "-ze-opt-128-GRF-per-thread\0"
  "-ze-opt-256-GRF-per-thread\0"
  "-ze-opt-disable-compaction\0"
  "-ze-opt-disable\0"
  "-ze-opt-emit-lib-compile-errors\0"
  "-ze-opt-enable-auto-large-GRF-mode\0"
  "-ze-opt-exp-register-file-size=\0"
  "-ze-opt-exp-register-file-size\0"
  "-ze-opt-fp32-correctly-rounded-divide-sqrt\0"
  "-ze-opt-fp64-gen-conv-emu\0"
  "-ze-opt-fp64-gen-emu\0"
  "-ze-opt-greater-than-4GB-buffer-required\0"
  "-ze-opt-gtpin-grf-info\0"
  "-ze-opt-gtpin-indir-ref\0"
  "-ze-opt-gtpin-rera\0"
  "-ze-opt-gtpin-scratch-area-size=\0"
  "-ze-opt-gtpin-scratch-area-size\0"
  "-ze-opt-large-grf-kernel\0"
  "-ze-opt-large-register-file\0"
  "-ze-opt-library-compilation\0"
  "-ze-opt-library-compile-simd=\0"
  "-ze-opt-library-compile-simd\0"
  "-ze-opt-no-fusedCallWA\0"
  "-ze-opt-no-local-to-generic\0"
  "-ze-opt-no-subgroup-ifp\0"
  "-ze-opt-opt-disable\0"
  "-ze-opt-poison-unsupported-fp64-kernels\0"
  "-ze-opt-regular-grf-kernel\0"
  "-ze-opt-reqd-eu-thread-count=\0"
  "-ze-opt-reqd-eu-thread-count\0"
  "-ze-opt-skip-fde\0"
  "-ze-opt-static-profile-guided-trimming\0"
  "-ze-opt-take-global-address\0"
  "-ze-opt-uniform-work-group-size\0"
  "-ze-poison-unsupported-fp64-kernels\0"
  "-ze-regular-grf-kernel\0"
  "-ze-reqd-eu-thread-count=\0"
  "-ze-reqd-eu-thread-count\0"
  "-ze-skip-fde\0"
  "-ze-static-profile-guided-trimming\0"
  "-ze-take-global-address\0"
  "-ze-uniform-work-group-size\0"
  ;
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

static constexpr llvm::StringTable
OptionStrTable = OptionStrTableStorage;
#endif // OPTTABLE_STR_TABLE_CODE

/////////
// Prefixes

#ifdef OPTTABLE_PREFIXES_TABLE_CODE
static constexpr llvm::StringTable::Offset OptionPrefixesTable[] = {
  0 /* prefixes */,
  1 /* prefixes */, 1 /* '-' */
};
#endif // OPTTABLE_PREFIXES_TABLE_CODE

/////////// SubCommand IDs

#ifdef OPTTABLE_SUBCOMMAND_IDS_TABLE_CODE
static constexpr unsigned OptionSubCommandIDsTable[] = {
  0 /* subcommands */
};
#endif // OPTTABLE_SUBCOMMAND_IDS_TABLE_CODE

/////////
// Prefix Union

#ifdef OPTTABLE_PREFIXES_UNION_CODE
static constexpr llvm::StringTable::Offset OptionPrefixesUnion[] = {
  1 /* '-' */
};
#endif // OPTTABLE_PREFIXES_UNION_CODE

/////////
// ValuesCode

#ifdef OPTTABLE_VALUES_CODE
#endif
/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(0, 3 /* <input> */, INPUT, Input, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(0, 11 /* <unknown> */, UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 21 /* -128-GRF-per-thread */, anonymous_283, Flag, INVALID, 128_grf_per_thread_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 41 /* -256-GRF-per-thread */, anonymous_293, Flag, INVALID, 256_grf_per_thread_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 61 /* -cl-128-GRF-per-thread */, anonymous_281, Flag, INVALID, 128_grf_per_thread_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 84 /* -cl-256-GRF-per-thread */, anonymous_291, Flag, INVALID, 256_grf_per_thread_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 107 /* -cl-denorms-are-zero */, denorms_are_zero, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 128 /* -cl-disable-compaction */, anonymous_78, Flag, INVALID, disable_compaction_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 151 /* -cl-emit-lib-compile-errors */, anonymous_220, Flag, INVALID, emit_lib_compile_errors_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 179 /* -cl-enable-auto-large-GRF-mode */, anonymous_160, Flag, INVALID, enable_auto_large_GRF_mode_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Use compiler heuristics to determine number of GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 210 /* -cl-exp-register-file-size= */, anonymous_140, Joined, INVALID, exp_register_file_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Alias for -ze-exp-register-file-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 238 /* -cl-exp-register-file-size */, anonymous_129, Separate, INVALID, exp_register_file_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Set amount of registers used by regalloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 265 /* -cl-fast-relaxed-math */, fast_relaxed_math, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 287 /* -cl-finite-math-only */, finite_math_only, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 308 /* -cl-fp32-correctly-rounded-divide-sqrt */, anonymous_180, Flag, INVALID, fp32_correctly_rounded_divide_sqrt_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 347 /* -cl-fp64-gen-conv-emu */, anonymous_331, Flag, INVALID, fp64_gen_conv_emu_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 369 /* -cl-fp64-gen-emu */, anonymous_321, Flag, INVALID, fp64_gen_emu_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 386 /* -cl-greater-than-4GB-buffer-required */, anonymous_301, Flag, INVALID, greater_than_4GB_buffer_required_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 423 /* -cl-gtpin-grf-info */, anonymous_27, Flag, INVALID, gtpin_grf_info_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enable vISA grf-info interface for gtpin structure generation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 442 /* -cl-gtpin-indir-ref */, anonymous_48, Flag, INVALID, gtpin_indir_ref_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 462 /* -cl-gtpin-rera */, anonymous_2, Flag, INVALID, gtpin_rera_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enables vISA re_ra interface for gtpin structure generation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 477 /* -cl-gtpin-scratch-area-size= */, anonymous_7, Joined, INVALID, gtpin_scratch_area_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Alias for -ze-gtpin-scratch-area-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 506 /* -cl-gtpin-scratch-area-size */, anonymous_12, Separate, INVALID, gtpin_scratch_area_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Set gtpin scratch area size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 534 /* -cl-intel-128-GRF-per-thread */, anonymous_282, Flag, INVALID, 128_grf_per_thread_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 563 /* -cl-intel-256-GRF-per-thread */, anonymous_292, Flag, INVALID, 256_grf_per_thread_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 592 /* -cl-intel-debug-info */, debug_info, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 613 /* -cl-intel-disable-a64WA */, disable_a64wa, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 637 /* -cl-intel-disable-compaction */, anonymous_79, Flag, INVALID, disable_compaction_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 666 /* -cl-intel-emit-lib-compile-errors */, anonymous_221, Flag, INVALID, emit_lib_compile_errors_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 700 /* -cl-intel-enable-auto-large-GRF-mode */, anonymous_161, Flag, INVALID, enable_auto_large_GRF_mode_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Use compiler heuristics to determine number of GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 737 /* -cl-intel-exp-register-file-size= */, anonymous_141, Joined, INVALID, exp_register_file_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Alias for -ze-exp-register-file-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 771 /* -cl-intel-exp-register-file-size */, anonymous_130, Separate, INVALID, exp_register_file_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Set amount of registers used by regalloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 804 /* -cl-intel-fp32-correctly-rounded-divide-sqrt */, anonymous_181, Flag, INVALID, fp32_correctly_rounded_divide_sqrt_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 849 /* -cl-intel-fp64-gen-conv-emu */, anonymous_332, Flag, INVALID, fp64_gen_conv_emu_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 877 /* -cl-intel-fp64-gen-emu */, anonymous_322, Flag, INVALID, fp64_gen_emu_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 900 /* -cl-intel-greater-than-4GB-buffer-required */, anonymous_302, Flag, INVALID, greater_than_4GB_buffer_required_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 943 /* -cl-intel-gtpin-grf-info */, anonymous_28, Flag, INVALID, gtpin_grf_info_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enable vISA grf-info interface for gtpin structure generation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 968 /* -cl-intel-gtpin-indir-ref */, anonymous_49, Flag, INVALID, gtpin_indir_ref_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 994 /* -cl-intel-gtpin-rera */, anonymous_3, Flag, INVALID, gtpin_rera_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enables vISA re_ra interface for gtpin structure generation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1015 /* -cl-intel-gtpin-scratch-area-size= */, anonymous_8, Joined, INVALID, gtpin_scratch_area_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Alias for -ze-gtpin-scratch-area-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1050 /* -cl-intel-gtpin-scratch-area-size */, anonymous_13, Separate, INVALID, gtpin_scratch_area_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Set gtpin scratch area size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1084 /* -cl-intel-large-grf-kernel */, anonymous_252, Separate, INVALID, large_grf_kernel_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1111 /* -cl-intel-large-register-file */, anonymous_151, Flag, INVALID, exp_register_file_size_common, "256\0", VCApiOption | IGCApiOption, DefaultVis, 0,
       "Increase number of available GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1141 /* -cl-intel-library-compilation */, anonymous_99, Flag, INVALID, library_compilation_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1171 /* -cl-intel-library-compile-simd= */, anonymous_120, Joined, INVALID, library_compile_simd_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1203 /* -cl-intel-library-compile-simd */, anonymous_109, Separate, INVALID, library_compile_simd_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1234 /* -cl-intel-no-fusedCallWA */, anonymous_69, Flag, INVALID, no_fusedCallWA_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1259 /* -cl-intel-no-local-to-generic */, anonymous_272, Flag, INVALID, no_local_to_generic_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1289 /* -cl-intel-no-subgroup-ifp */, anonymous_191, Flag, INVALID, no_subgroup_ifp_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1315 /* -cl-intel-opt-disable */, anonymous_89, Flag, INVALID, opt_disable_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Turns off optimizations", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1337 /* -cl-intel-poison-unsupported-fp64-kernels */, anonymous_312, Flag, INVALID, poison_unsupported_fp64_kernels_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1379 /* -cl-intel-regular-grf-kernel */, anonymous_262, Separate, INVALID, regular_grf_kernel_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1408 /* -cl-intel-reqd-eu-thread-count= */, anonymous_242, Joined, INVALID, required_thread_count_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1440 /* -cl-intel-reqd-eu-thread-count */, anonymous_231, Separate, INVALID, required_thread_count_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1471 /* -cl-intel-skip-fde */, anonymous_59, Flag, INVALID, skip_fde_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1490 /* -cl-intel-static-profile-guided-trimming */, anonymous_342, Flag, INVALID, static_profile_guided_trimming_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1531 /* -cl-intel-take-global-address */, anonymous_211, Flag, INVALID, take_global_address_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1561 /* -cl-intel-uniform-work-group-size */, anonymous_201, Flag, INVALID, uniform_work_group_size_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1595 /* -cl-kernel-arg-info */, kernel_arg_info, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1615 /* -cl-large-grf-kernel */, anonymous_251, Separate, INVALID, large_grf_kernel_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1636 /* -cl-large-register-file */, anonymous_150, Flag, INVALID, exp_register_file_size_common, "256\0", VCApiOption | IGCApiOption, DefaultVis, 0,
       "Increase number of available GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1660 /* -cl-library-compilation */, anonymous_98, Flag, INVALID, library_compilation_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1684 /* -cl-library-compile-simd= */, anonymous_119, Joined, INVALID, library_compile_simd_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1710 /* -cl-library-compile-simd */, anonymous_108, Separate, INVALID, library_compile_simd_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1735 /* -cl-mad-enable */, mad_enable, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1750 /* -cl-match-sincospi */, match_sincospi, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1769 /* -cl-no-fusedCallWA */, anonymous_68, Flag, INVALID, no_fusedCallWA_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1788 /* -cl-no-local-to-generic */, anonymous_271, Flag, INVALID, no_local_to_generic_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1812 /* -cl-no-signed-zeros */, no_signed_zeros, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1832 /* -cl-no-subgroup-ifp */, anonymous_190, Flag, INVALID, no_subgroup_ifp_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1852 /* -cl-opt-disable */, anonymous_88, Flag, INVALID, opt_disable_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Turns off optimizations", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1868 /* -cl-poison-unsupported-fp64-kernels */, anonymous_311, Flag, INVALID, poison_unsupported_fp64_kernels_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1904 /* -cl-regular-grf-kernel */, anonymous_261, Separate, INVALID, regular_grf_kernel_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1927 /* -cl-reqd-eu-thread-count= */, anonymous_241, Joined, INVALID, required_thread_count_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1953 /* -cl-reqd-eu-thread-count */, anonymous_230, Separate, INVALID, required_thread_count_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 1978 /* -cl-single-precision-constant */, single_precision_constant, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2008 /* -cl-skip-fde */, anonymous_58, Flag, INVALID, skip_fde_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2021 /* -cl-static-profile-guided-trimming */, anonymous_341, Flag, INVALID, static_profile_guided_trimming_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2056 /* -cl-std= */, cl_std, Joined, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2065 /* -cl-strict-aliasing */, strict_aliasing, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2085 /* -cl-take-global-address */, anonymous_210, Flag, INVALID, take_global_address_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2109 /* -cl-uniform-work-group-size */, anonymous_200, Flag, INVALID, uniform_work_group_size_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2137 /* -cl-unsafe-math-optimizations */, unsafe_math_optimizations, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2167 /* -cmc */, igcmc, Flag, INVALID, INVALID, nullptr, IgcmcApiOption, DefaultVis, 0,
       "Enable igcmc compatible mode; incompatible with -vc-codegen", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2172 /* -codegen-optimize= */, anonymous_167, Joined, INVALID, vc_codegen_optimize, nullptr, VCApiOption, DefaultVis, 0,
       "Alias for -codegen-optimize", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2191 /* -codegen-optimize */, vc_codegen_optimize, Separate, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Set codegen optimization level to either 'none' or 'full'", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "<level>", nullptr, 0)
OPTION(1, 2209 /* -disable-compaction */, anonymous_80, Flag, INVALID, disable_compaction_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2229 /* -disable-finalizer-msg */, vc_disable_finalizer_msg, Flag, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Turns off critical messages from cISA Builder", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2252 /* -double-GRF */, anonymous_172, Flag, INVALID, exp_register_file_size_common, "256\0", VCApiOption, DefaultVis, 0,
       "Alias for -ze-opt-large-register-file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2264 /* -doubleGRF */, anonymous_171, Flag, INVALID, exp_register_file_size_common, "256\0", VCApiOption | IgcmcApiOption, DefaultVis, 0,
       "Alias for -ze-opt-large-register-file", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2275 /* -dump-opt-llvm= */, oclfe_dump_opt_llvm, Joined, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2291 /* -dwarf-column-info */, oclfe_dwarf_column_info, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2310 /* -D */, oclfe_D, JoinedOrSeparate, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2313 /* -emit-lib-compile-errors */, anonymous_222, Flag, INVALID, emit_lib_compile_errors_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2338 /* -enable-auto-large-GRF-mode */, anonymous_162, Flag, INVALID, enable_auto_large_GRF_mode_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Use compiler heuristics to determine number of GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2366 /* -exp-register-file-size= */, anonymous_142, Joined, INVALID, exp_register_file_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Alias for -ze-exp-register-file-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2391 /* -exp-register-file-size */, anonymous_131, Separate, INVALID, exp_register_file_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Set amount of registers used by regalloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2415 /* -ffp-contract= */, fp_contract, Joined, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Form fused FP ops: fast (everywhere) | on (nowhere except insertion fma) | off (never fuse)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, "fast,on,off", 0)
OPTION(1, 2430 /* -fno-jump-tables */, vc_fno_jump_tables, Flag, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Disable the use of jump tables for lowering switches", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2447 /* -fno-struct-splitting */, vc_fno_struct_splitting, Flag, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Disable StructSplitter pass", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2469 /* -fp32-correctly-rounded-divide-sqrt */, anonymous_182, Flag, INVALID, fp32_correctly_rounded_divide_sqrt_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2505 /* -fp64-gen-conv-emu */, anonymous_333, Flag, INVALID, fp64_gen_conv_emu_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2524 /* -fp64-gen-emu */, anonymous_323, Flag, INVALID, fp64_gen_emu_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2538 /* -ftranslate-legacy-memory-intrinsics */, vc_ftranslate_legacy_memory_intrinsics, Flag, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Legalize old memory intrinsics", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2575 /* -gline-tables-only */, oclfe_gline_tables_only, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2594 /* -greater-than-4GB-buffer-required */, anonymous_303, Flag, INVALID, greater_than_4GB_buffer_required_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2628 /* -gtpin-grf-info */, anonymous_29, Flag, INVALID, gtpin_grf_info_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enable vISA grf-info interface for gtpin structure generation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2644 /* -gtpin-indir-ref */, anonymous_50, Flag, INVALID, gtpin_indir_ref_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2661 /* -gtpin-rera */, anonymous_4, Flag, INVALID, gtpin_rera_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enables vISA re_ra interface for gtpin structure generation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2673 /* -gtpin-scratch-area-size= */, anonymous_9, Joined, INVALID, gtpin_scratch_area_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Alias for -ze-gtpin-scratch-area-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2699 /* -gtpin-scratch-area-size */, anonymous_14, Separate, INVALID, gtpin_scratch_area_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Set gtpin scratch area size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2724 /* -g */, emit_debug, Flag, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enable generation of debug information and enables kernel debug", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2727 /* -igc_opts */, oclfe_igc_opts, JoinedOrSeparate, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2737 /* -I */, oclfe_I, JoinedOrSeparate, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2740 /* -large-grf-kernel */, anonymous_253, Separate, INVALID, large_grf_kernel_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2758 /* -large-register-file */, anonymous_152, Flag, INVALID, exp_register_file_size_common, "256\0", VCApiOption | IGCApiOption, DefaultVis, 0,
       "Increase number of available GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2779 /* -library-compilation */, anonymous_100, Flag, INVALID, library_compilation_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2800 /* -library-compile-simd= */, anonymous_121, Joined, INVALID, library_compile_simd_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2823 /* -library-compile-simd */, anonymous_110, Separate, INVALID, library_compile_simd_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2845 /* -no-fusedCallWA */, anonymous_70, Flag, INVALID, no_fusedCallWA_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2861 /* -no-local-to-generic */, anonymous_273, Flag, INVALID, no_local_to_generic_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2882 /* -no-optimize */, anonymous_166, Flag, INVALID, vc_optimize, "none\0", VCApiOption, DefaultVis, 0,
       "Alias for -optimize=none", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2895 /* -no-subgroup-ifp */, anonymous_192, Flag, INVALID, no_subgroup_ifp_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2912 /* -no-vector-decomposition */, anonymous_170, Flag, INVALID, no_vector_decomposition, nullptr, VCApiOption, DefaultVis, 0,
       "Alias for -ze-no-vector-decomposition", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2937 /* -no_vector_decomposition */, anonymous_169, Flag, INVALID, no_vector_decomposition, nullptr, VCApiOption | IgcmcApiOption, DefaultVis, 0,
       "Alias for -ze-no-vector-decomposition", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2962 /* -opt-disable */, anonymous_90, Flag, INVALID, opt_disable_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Turns off optimizations", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2975 /* -optimize= */, anonymous_165, Joined, INVALID, vc_optimize, nullptr, VCApiOption, DefaultVis, 0,
       "Alias for -optimize", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 2986 /* -optimize */, vc_optimize, Separate, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Set optimization level to either 'none' or 'full'", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "<level>", nullptr, 0)
OPTION(1, 2996 /* -poison-unsupported-fp64-kernels */, anonymous_313, Flag, INVALID, poison_unsupported_fp64_kernels_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3029 /* -profiler */, oclfe_profiler, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3039 /* -regular-grf-kernel */, anonymous_263, Separate, INVALID, regular_grf_kernel_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3059 /* -reqd-eu-thread-count= */, anonymous_243, Joined, INVALID, required_thread_count_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3082 /* -reqd-eu-thread-count */, anonymous_232, Separate, INVALID, required_thread_count_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3104 /* -skip-fde */, anonymous_60, Flag, INVALID, skip_fde_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3114 /* -spir-std= */, oclfe_spir_std, Joined, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3125 /* -stack-mem-size= */, igcmc_stack_size, Joined, INVALID, vc_stateless_private_size, nullptr, IgcmcApiOption, DefaultVis, 0,
       "Control stack memory size (in bytes)", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3142 /* -stateless-stack-mem-size= */, vc_stateless_private_size, Joined, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Stateless memory amount per thread", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3169 /* -static-profile-guided-trimming */, anonymous_343, Flag, INVALID, static_profile_guided_trimming_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3201 /* -s */, oclfe_s, Separate, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3204 /* -take-global-address */, anonymous_212, Flag, INVALID, take_global_address_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3225 /* -triple */, oclfe_triple, Separate, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3233 /* -uniform-work-group-size */, anonymous_202, Flag, INVALID, uniform_work_group_size_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3258 /* -vc-codegen */, vc_codegen, Flag, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Enable vector codegenerator", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3270 /* -vc-disable-indvars-opt */, vc_disable_indvars_opt, Flag, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Disable induction variable optimization", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3294 /* -vc-disable-non-overlapping-region-opt */, vc_disable_non_overlapping_region_opt, Flag, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Disable non-overlapping region optimization", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3333 /* -vc-enable-preemption */, vc_enable_preemption, Flag, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Enable preemption for VC path", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3355 /* -vc-use-plain-2d-images */, vc_use_plain_2d_images, Flag, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Treat image2d_t annotation as non-media image", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3379 /* -visaopts= */, igcmc_visaopts, Joined, INVALID, INVALID, nullptr, IgcmcApiOption, DefaultVis, 0,
       "Options for finalizer in form \"opt1 opt2 opt3...\"", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3390 /* -Werror */, oclfe_werror, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3398 /* -w */, oclfe_w, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3401 /* -Xfinalizer */, Xfinalizer, Separate, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Pass <arg> to the visa finalizer", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), "<arg>", nullptr, 0)
OPTION(1, 3413 /* -x */, oclfe_x, Separate, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3416 /* -ze-128-GRF-per-thread */, 128_grf_per_thread_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3439 /* -ze-256-GRF-per-thread */, 256_grf_per_thread_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3462 /* -ze-disable-compaction */, disable_compaction_common, Flag, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3485 /* -ze-emit-lib-compile-errors */, emit_lib_compile_errors_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3513 /* -ze-enable-auto-large-GRF-mode */, enable_auto_large_GRF_mode_common, Flag, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Use compiler heuristics to determine number of GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3544 /* -ze-exp-register-file-size= */, anonymous_132_common, Joined, INVALID, exp_register_file_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Alias for -ze-exp-register-file-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3572 /* -ze-exp-register-file-size */, exp_register_file_size_common, Separate, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Set amount of registers used by regalloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3599 /* -ze-fp32-correctly-rounded-divide-sqrt */, fp32_correctly_rounded_divide_sqrt_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3638 /* -ze-fp64-gen-conv-emu */, fp64_gen_conv_emu_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3660 /* -ze-fp64-gen-emu */, fp64_gen_emu_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3677 /* -ze-greater-than-4GB-buffer-required */, greater_than_4GB_buffer_required_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3714 /* -ze-gtpin-grf-info */, gtpin_grf_info_common, Flag, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enable vISA grf-info interface for gtpin structure generation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3733 /* -ze-gtpin-indir-ref */, gtpin_indir_ref_common, Flag, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3753 /* -ze-gtpin-rera */, gtpin_rera_common, Flag, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enables vISA re_ra interface for gtpin structure generation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3768 /* -ze-gtpin-scratch-area-size= */, anonymous_35_common, Joined, INVALID, gtpin_scratch_area_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Alias for -ze-gtpin-scratch-area-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3797 /* -ze-gtpin-scratch-area-size */, gtpin_scratch_area_size_common, Separate, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Set gtpin scratch area size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3825 /* -ze-intel-128-GRF-per-thread */, anonymous_279, Flag, INVALID, 128_grf_per_thread_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3854 /* -ze-intel-256-GRF-per-thread */, anonymous_289, Flag, INVALID, 256_grf_per_thread_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3883 /* -ze-intel-disable-compaction */, anonymous_76, Flag, INVALID, disable_compaction_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3912 /* -ze-intel-emit-lib-compile-errors */, anonymous_218, Flag, INVALID, emit_lib_compile_errors_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3946 /* -ze-intel-enable-auto-large-GRF-mode */, anonymous_158, Flag, INVALID, enable_auto_large_GRF_mode_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Use compiler heuristics to determine number of GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 3983 /* -ze-intel-exp-register-file-size= */, anonymous_138, Joined, INVALID, exp_register_file_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Alias for -ze-exp-register-file-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4017 /* -ze-intel-exp-register-file-size */, anonymous_127, Separate, INVALID, exp_register_file_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Set amount of registers used by regalloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4050 /* -ze-intel-fp32-correctly-rounded-divide-sqrt */, anonymous_178, Flag, INVALID, fp32_correctly_rounded_divide_sqrt_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4095 /* -ze-intel-fp64-gen-conv-emu */, anonymous_329, Flag, INVALID, fp64_gen_conv_emu_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4123 /* -ze-intel-fp64-gen-emu */, anonymous_319, Flag, INVALID, fp64_gen_emu_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4146 /* -ze-intel-greater-than-4GB-buffer-required */, anonymous_299, Flag, INVALID, greater_than_4GB_buffer_required_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4189 /* -ze-intel-gtpin-grf-info */, anonymous_25, Flag, INVALID, gtpin_grf_info_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enable vISA grf-info interface for gtpin structure generation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4214 /* -ze-intel-gtpin-indir-ref */, anonymous_46, Flag, INVALID, gtpin_indir_ref_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4240 /* -ze-intel-gtpin-rera */, anonymous_0, Flag, INVALID, gtpin_rera_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enables vISA re_ra interface for gtpin structure generation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4261 /* -ze-intel-gtpin-scratch-area-size= */, anonymous_5, Joined, INVALID, gtpin_scratch_area_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Alias for -ze-gtpin-scratch-area-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4296 /* -ze-intel-gtpin-scratch-area-size */, anonymous_10, Separate, INVALID, gtpin_scratch_area_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Set gtpin scratch area size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4330 /* -ze-intel-large-grf-kernel */, anonymous_249, Separate, INVALID, large_grf_kernel_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4357 /* -ze-intel-large-register-file */, anonymous_148, Flag, INVALID, exp_register_file_size_common, "256\0", VCApiOption | IGCApiOption, DefaultVis, 0,
       "Increase number of available GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4387 /* -ze-intel-library-compilation */, anonymous_96, Flag, INVALID, library_compilation_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4417 /* -ze-intel-library-compile-simd= */, anonymous_117, Joined, INVALID, library_compile_simd_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4449 /* -ze-intel-library-compile-simd */, anonymous_106, Separate, INVALID, library_compile_simd_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4480 /* -ze-intel-no-fusedCallWA */, anonymous_66, Flag, INVALID, no_fusedCallWA_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4505 /* -ze-intel-no-local-to-generic */, anonymous_269, Flag, INVALID, no_local_to_generic_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4535 /* -ze-intel-no-subgroup-ifp */, anonymous_188, Flag, INVALID, no_subgroup_ifp_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4561 /* -ze-intel-opt-disable */, anonymous_86, Flag, INVALID, opt_disable_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Turns off optimizations", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4583 /* -ze-intel-poison-unsupported-fp64-kernels */, anonymous_309, Flag, INVALID, poison_unsupported_fp64_kernels_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4625 /* -ze-intel-regular-grf-kernel */, anonymous_259, Separate, INVALID, regular_grf_kernel_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4654 /* -ze-intel-reqd-eu-thread-count= */, anonymous_239, Joined, INVALID, required_thread_count_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4686 /* -ze-intel-reqd-eu-thread-count */, anonymous_228, Separate, INVALID, required_thread_count_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4717 /* -ze-intel-skip-fde */, anonymous_56, Flag, INVALID, skip_fde_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4736 /* -ze-intel-static-profile-guided-trimming */, anonymous_339, Flag, INVALID, static_profile_guided_trimming_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4777 /* -ze-intel-take-global-address */, anonymous_208, Flag, INVALID, take_global_address_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4807 /* -ze-intel-uniform-work-group-size */, anonymous_198, Flag, INVALID, uniform_work_group_size_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4841 /* -ze-kernel-debug-enable */, anonymous_163, Flag, INVALID, emit_debug, nullptr, VCApiOption, DefaultVis, 0,
       "Alias for -g", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4865 /* -ze-large-grf-kernel */, large_grf_kernel_common, Separate, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4886 /* -ze-large-register-file */, large_register_file_common, Flag, INVALID, exp_register_file_size_common, "256\0", VCApiOption | IGCApiOption, DefaultVis, 0,
       "Increase number of available GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4910 /* -ze-library-compilation */, library_compilation_common, Flag, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4934 /* -ze-library-compile-simd= */, anonymous_111_common, Joined, INVALID, library_compile_simd_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4960 /* -ze-library-compile-simd */, library_compile_simd_common, Separate, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 4985 /* -ze-no-fusedCallWA */, no_fusedCallWA_common, Flag, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5004 /* -ze-no-local-to-generic */, no_local_to_generic_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5028 /* -ze-no-subgroup-ifp */, no_subgroup_ifp_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5048 /* -ze-no-vector-decomposition */, no_vector_decomposition, Flag, INVALID, INVALID, nullptr, VCApiOption, DefaultVis, 0,
       "Disable vector decomposition pass", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5076 /* -ze-opt-128-GRF-per-thread */, anonymous_280, Flag, INVALID, 128_grf_per_thread_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5103 /* -ze-opt-256-GRF-per-thread */, anonymous_290, Flag, INVALID, 256_grf_per_thread_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5130 /* -ze-opt-disable-compaction */, anonymous_77, Flag, INVALID, disable_compaction_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5157 /* -ze-opt-disable */, opt_disable_common, Flag, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Turns off optimizations", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5173 /* -ze-opt-emit-lib-compile-errors */, anonymous_219, Flag, INVALID, emit_lib_compile_errors_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5205 /* -ze-opt-enable-auto-large-GRF-mode */, anonymous_159, Flag, INVALID, enable_auto_large_GRF_mode_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Use compiler heuristics to determine number of GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5240 /* -ze-opt-exp-register-file-size= */, anonymous_139, Joined, INVALID, exp_register_file_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Alias for -ze-exp-register-file-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5272 /* -ze-opt-exp-register-file-size */, anonymous_128, Separate, INVALID, exp_register_file_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Set amount of registers used by regalloc", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5303 /* -ze-opt-fp32-correctly-rounded-divide-sqrt */, anonymous_179, Flag, INVALID, fp32_correctly_rounded_divide_sqrt_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5346 /* -ze-opt-fp64-gen-conv-emu */, anonymous_330, Flag, INVALID, fp64_gen_conv_emu_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5372 /* -ze-opt-fp64-gen-emu */, anonymous_320, Flag, INVALID, fp64_gen_emu_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5393 /* -ze-opt-greater-than-4GB-buffer-required */, anonymous_300, Flag, INVALID, greater_than_4GB_buffer_required_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5434 /* -ze-opt-gtpin-grf-info */, anonymous_26, Flag, INVALID, gtpin_grf_info_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enable vISA grf-info interface for gtpin structure generation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5457 /* -ze-opt-gtpin-indir-ref */, anonymous_47, Flag, INVALID, gtpin_indir_ref_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5481 /* -ze-opt-gtpin-rera */, anonymous_1, Flag, INVALID, gtpin_rera_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Enables vISA re_ra interface for gtpin structure generation", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5500 /* -ze-opt-gtpin-scratch-area-size= */, anonymous_6, Joined, INVALID, gtpin_scratch_area_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Alias for -ze-gtpin-scratch-area-size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5533 /* -ze-opt-gtpin-scratch-area-size */, anonymous_11, Separate, INVALID, gtpin_scratch_area_size_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Set gtpin scratch area size", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5565 /* -ze-opt-large-grf-kernel */, anonymous_250, Separate, INVALID, large_grf_kernel_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5590 /* -ze-opt-large-register-file */, anonymous_149, Flag, INVALID, exp_register_file_size_common, "256\0", VCApiOption | IGCApiOption, DefaultVis, 0,
       "Increase number of available GRF", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5618 /* -ze-opt-library-compilation */, anonymous_97, Flag, INVALID, library_compilation_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5646 /* -ze-opt-library-compile-simd= */, anonymous_118, Joined, INVALID, library_compile_simd_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5676 /* -ze-opt-library-compile-simd */, anonymous_107, Separate, INVALID, library_compile_simd_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5705 /* -ze-opt-no-fusedCallWA */, anonymous_67, Flag, INVALID, no_fusedCallWA_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5728 /* -ze-opt-no-local-to-generic */, anonymous_270, Flag, INVALID, no_local_to_generic_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5756 /* -ze-opt-no-subgroup-ifp */, anonymous_189, Flag, INVALID, no_subgroup_ifp_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5780 /* -ze-opt-opt-disable */, anonymous_87, Flag, INVALID, opt_disable_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0,
       "Turns off optimizations", (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5800 /* -ze-opt-poison-unsupported-fp64-kernels */, anonymous_310, Flag, INVALID, poison_unsupported_fp64_kernels_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5840 /* -ze-opt-regular-grf-kernel */, anonymous_260, Separate, INVALID, regular_grf_kernel_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5867 /* -ze-opt-reqd-eu-thread-count= */, anonymous_240, Joined, INVALID, required_thread_count_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5897 /* -ze-opt-reqd-eu-thread-count */, anonymous_229, Separate, INVALID, required_thread_count_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5926 /* -ze-opt-skip-fde */, anonymous_57, Flag, INVALID, skip_fde_common, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5943 /* -ze-opt-static-profile-guided-trimming */, anonymous_340, Flag, INVALID, static_profile_guided_trimming_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 5982 /* -ze-opt-take-global-address */, anonymous_209, Flag, INVALID, take_global_address_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6010 /* -ze-opt-uniform-work-group-size */, anonymous_199, Flag, INVALID, uniform_work_group_size_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6042 /* -ze-poison-unsupported-fp64-kernels */, poison_unsupported_fp64_kernels_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6078 /* -ze-regular-grf-kernel */, regular_grf_kernel_common, Separate, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6101 /* -ze-reqd-eu-thread-count= */, anonymous_233_common, Joined, INVALID, required_thread_count_common, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6127 /* -ze-reqd-eu-thread-count */, required_thread_count_common, Separate, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6152 /* -ze-skip-fde */, skip_fde_common, Flag, INVALID, INVALID, nullptr, VCApiOption | IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6165 /* -ze-static-profile-guided-trimming */, static_profile_guided_trimming_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6200 /* -ze-take-global-address */, take_global_address_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
OPTION(1, 6224 /* -ze-uniform-work-group-size */, uniform_work_group_size_common, Flag, INVALID, INVALID, nullptr, IGCApiOption, DefaultVis, 0, nullptr, (std::array<std::pair<std::array<unsigned, 2>, const char*>, 1>{{ {std::array<unsigned, 2>{{0, 0}}, nullptr} }}), nullptr, nullptr, 0)
#endif // OPTION

#ifdef SIMPLE_ENUM_VALUE_TABLE

struct SimpleEnumValue {
  const char *Name;
  unsigned Value;
};

struct SimpleEnumValueTable {
  const SimpleEnumValue *Table;
  unsigned Size;
};
static const SimpleEnumValueTable SimpleEnumValueTables[] = {};
static const unsigned SimpleEnumValueTablesSize = std::size(SimpleEnumValueTables);
#endif // SIMPLE_ENUM_VALUE_TABLE

/////////

// SubCommands

#ifdef OPTTABLE_SUBCOMMANDS_CODE
static constexpr llvm::opt::OptTable::SubCommand OptionSubCommands[] = {
};
#endif // OPTTABLE_SUBCOMMANDS_CODE


