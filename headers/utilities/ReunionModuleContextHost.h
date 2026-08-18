#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 8 member(s).
class ReunionModuleContextHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallbackError@ReunionModuleContextHost@@UEAAXJPEAX@Z
    virtual void OnCallbackError(long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterInvalidContext@ReunionModuleContextHost@@UEAAXPEAX@Z
    virtual void OnEnterInvalidContext(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterUninitializedContext@ReunionModuleContextHost@@UEAAXPEAJPEAX@Z
    virtual void OnEnterUninitializedContext(long *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvalidCallback@ReunionModuleContextHost@@UEAAXPEAX@Z
    virtual void OnInvalidCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessShutdownLeak@ReunionModuleContextHost@@UEAAXXZ
    virtual void OnProcessShutdownLeak();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThrowException@ReunionModuleContextHost@@UEAAXPEAVException@System@@@Z
    virtual void OnThrowException(::System::Exception *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThrowExceptionForHR@ReunionModuleContextHost@@UEAAXH@Z
    virtual void OnThrowExceptionForHR(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnhandledException@ReunionModuleContextHost@@UEAAXPEAVException@System@@JPEAJ@Z
    virtual void OnUnhandledException(::System::Exception *, long, long *);
};
