#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 2 member(s).
class Core {
public:
    class ApiException;
    class ApiObject;
    class Logging;
    class NamedApiObject;
    class ReunionModule;
    class ThreadInfo;
    class Util;
    class YieldAndCall;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureFreeThreadedContext@Core@@YAXPEAVContext@Cn@@@Z
    void ConfigureFreeThreadedContext(::Cn::Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadTerminationThunk@Core@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z
    void ThreadTerminationThunk(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, unsigned long);
};
