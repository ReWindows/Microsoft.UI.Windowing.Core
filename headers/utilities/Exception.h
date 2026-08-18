#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 6 member(s).
namespace System {
class Exception {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@Exception@System@@SA?AV?$SmartPtr@VException@System@@@CFlat@@XZ
    static WindissectOpaque Create$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Exception@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Throw$@Exception@System@@QEAAXXZ
    void Throw$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowVirtual$@Exception@System@@UEAAXXZ
    virtual void ThrowVirtual$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Exception@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Message@Exception@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque get_Message();
};
} // namespace System
