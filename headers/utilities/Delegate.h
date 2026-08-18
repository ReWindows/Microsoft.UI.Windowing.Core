#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 5 member(s).
namespace System {
class Delegate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Delegate@System@@SA_NPEAV12@0@Z
    static bool Equals(::System::Delegate *, ::System::Delegate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Delegate@System@@UEAA_NPEAVObject@2@@Z
    virtual bool Equals(::System::Object *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@Delegate@System@@UEAAHXZ
    virtual int GetHashCode();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUninitialized@Delegate@System@@KAPEAXH@Z
    static void * CreateUninitialized(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Delegate@System@@IEAA@XZ
    ~Delegate();
};
} // namespace System
