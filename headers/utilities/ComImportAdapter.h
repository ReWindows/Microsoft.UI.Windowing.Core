#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 7 member(s).
namespace CFlat {
class ComImportAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ComImportAdapter@CFlat@@SA?AV?$SmartPtr@VComImportAdapter@CFlat@@@2@PEAX@Z
    static WindissectOpaque Create$(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ComImportAdapter@CFlat@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@ComImportAdapter@CFlat@@UEAA_NPEAVObject@System@@@Z
    virtual bool Equals(::System::Object *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@ComImportAdapter@CFlat@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNativeInterface$@ComImportAdapter@CFlat@@QEAAPEAXPEBUComInterfaceTypeId@2@@Z
    void * GetNativeInterface$(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate$@ComImportAdapter@CFlat@@QEAAXXZ
    void Invalidate$();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComImportAdapter@CFlat@@IEAA@XZ
    ~ComImportAdapter();
};
} // namespace CFlat
