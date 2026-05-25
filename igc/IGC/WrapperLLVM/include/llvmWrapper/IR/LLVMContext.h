#ifndef IGCLLVM_IR_LLVMCONTEXT_H
#define IGCLLVM_IR_LLVMCONTEXT_H
#include "llvm/Config/llvm-config.h"
#include "llvm/IR/LLVMContext.h"
#include "Probe/Assertion.h"
namespace IGCLLVM
{
    inline void setOpaquePointers(llvm::LLVMContext* Ctx, const bool Enable)
    {
        IGC_ASSERT_MESSAGE(Ctx, "Null LLVMContext pointer!");
#if LLVM_VERSION_MAJOR == 14
        if (Enable)
            Ctx->enableOpaquePointers();
#elif LLVM_VERSION_MAJOR >= 15 && LLVM_VERSION_MAJOR < 22
        Ctx->setOpaquePointers(Enable);
#endif
        // LLVM 22+: always opaque, no-op
    };
} // end namespace IGCLLVM
namespace IGC
{
    inline bool canOverwriteLLVMCtxPtrMode(llvm::LLVMContext* Ctx)
    {
        IGC_ASSERT_MESSAGE(Ctx, "Null LLVMContext pointer!");
#if LLVM_VERSION_MAJOR < 14
        return false;
#elif LLVM_VERSION_MAJOR == 14
        return Ctx->supportsTypedPointers();
#elif LLVM_VERSION_MAJOR >= 15 && LLVM_VERSION_MAJOR < 22
        return !Ctx->hasSetOpaquePointersValue();
#else
        // LLVM 22+: always opaque pointers, mode is fixed, cannot overwrite
        return false;
#endif
    }
} // end namespace IGC
#endif // IGCLLVM_IR_LLVMCONTEXT_H