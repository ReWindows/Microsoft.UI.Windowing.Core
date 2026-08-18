#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 10 member(s).
namespace CFlat {
class WinRTExportAdapterContainer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WinRTExportAdapterContainer@CFlat@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Export@WinRTExportAdapterContainer@CFlat@@UEAAPEAXPEAVObject@System@@@Z
    virtual void * Export(::System::Object *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WinRTExportAdapterContainer@CFlat@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WinRTExportAdapterContainer@CFlat@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WinRTExportAdapterContainer@CFlat@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WinRTExportAdapterContainer@CFlat@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WinRTExportAdapterContainer@CFlat@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CFlat
