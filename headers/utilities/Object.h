#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 9 member(s).
namespace System {
class Object {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Object@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Object@System@@UEAA_NPEAV12@@Z
    virtual bool Equals(::System::Object *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@Object@System@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterfaceDispatcher$@Object@System@@QEBAPEBXPEBUInterfaceTypeId@CFlat@@@Z
    void const * GetInterfaceDispatcher$(WindissectOpaque const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Object@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque ToString();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Release$@Object@System@@AEAAXXZ
    void Release$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseNotFrozen$@Object@System@@AEAAXXZ
    void ReleaseNotFrozen$();
};
} // namespace System
