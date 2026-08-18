#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 12 member(s).
namespace Cn {
class Context {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCurrent@Context@Cn@@SAPEAV12@PEAV12@@Z
    static ::Cn::Context * EnsureCurrent(::Cn::Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_GetThreadContextOrNullAndLock@Context@Cn@@SAPEAV12@XZ
    static ::Cn::Context * NoContext_GetThreadContextOrNullAndLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUnhandledExternalExceptionNL@Context@Cn@@QEAAXPEAX@Z
    void NotifyUnhandledExternalExceptionNL(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeContext@Context@Cn@@SAXPEAV12@@Z
    static void UninitializeContext(::Cn::Context *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocAndInitializeContext@Context@Cn@@CAPEAV12@_N@Z
    static ::Cn::Context * AllocAndInitializeContext(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Context@Cn@@AEAA@XZ
    Context();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStage1@Context@Cn@@AEAAX_N@Z
    void CreateStage1(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStage2@Context@Cn@@AEAAXXZ
    void CreateStage2();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@Context@Cn@@AEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDestroy@Context@Cn@@EEAAXXZ
    virtual void NotifyDestroy();
};
} // namespace Cn
