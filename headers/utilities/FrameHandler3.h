#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 14 member(s).
class __FrameHandler3 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CatchTryBlock@__FrameHandler3@@SAPEBU_s_TryBlockMapEntry@@PEBU_s_FuncInfo@@H@Z
    static _s_TryBlockMapEntry const * CatchTryBlock(_s_FuncInfo const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CxxCallCatchBlock@__FrameHandler3@@SAPEAXPEAU_EXCEPTION_RECORD@@@Z
    static void * CxxCallCatchBlock(_EXCEPTION_RECORD *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecutionInCatch@__FrameHandler3@@SA_NPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z
    static bool ExecutionInCatch(_xDISPATCHER_CONTEXT *, _s_FuncInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameUnwindToEmptyState@__FrameHandler3@@SAXPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z
    static void FrameUnwindToEmptyState(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameUnwindToState@__FrameHandler3@@SAXPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@H@Z
    static void FrameUnwindToState(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentState@__FrameHandler3@@SAHPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z
    static int GetCurrentState(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEstablisherFrame@__FrameHandler3@@SAPEA_KPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@0@Z
    static uint64_t * GetEstablisherFrame(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandlerSearchState@__FrameHandler3@@SAHPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z
    static int GetHandlerSearchState(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnwindTryBlock@__FrameHandler3@@SAHPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z
    static int GetUnwindTryBlock(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@__FrameHandler3@@SAXPEA_KPEBU_s_FuncInfo@@H@Z
    static void SetState(uint64_t *, _s_FuncInfo const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnwindTryBlock@__FrameHandler3@@SAXPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@H@Z
    static void SetUnwindTryBlock(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StateFromControlPc@__FrameHandler3@@SAHPEBU_s_FuncInfo@@PEAU_xDISPATCHER_CONTEXT@@@Z
    static int StateFromControlPc(_s_FuncInfo const *, _xDISPATCHER_CONTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StateFromIp@__FrameHandler3@@SAHPEBU_s_FuncInfo@@PEAU_xDISPATCHER_CONTEXT@@_K@Z
    static int StateFromIp(_s_FuncInfo const *, _xDISPATCHER_CONTEXT *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnwindNestedFrames@__FrameHandler3@@SAXPEA_KPEAUEHExceptionRecord@@PEAU_CONTEXT@@0PEAXPEBU_s_FuncInfo@@HHPEBU_s_HandlerType@@PEAU_xDISPATCHER_CONTEXT@@E@Z
    static void UnwindNestedFrames(uint64_t *, EHExceptionRecord *, _CONTEXT *, uint64_t *, void *, _s_FuncInfo const *, int, int, _s_HandlerType const *, _xDISPATCHER_CONTEXT *, unsigned char);
};
