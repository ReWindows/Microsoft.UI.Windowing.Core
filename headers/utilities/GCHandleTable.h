#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 5 member(s).
namespace Cn::Engine {
class GCHandleTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@GCHandleTable@Engine@Cn@@QEAAXXZ
    void Destroy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupInitialize@GCHandleTable@Engine@Cn@@CAXPEAUGroup@123@HH@Z
    static void GroupInitialize(WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalAllocateGroup@GCHandleTable@Engine@Cn@@AEAAXXZ
    void LocalAllocateGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalValidateValue@GCHandleTable@Engine@Cn@@AEAAXIPEAPEAUGCHandleLocalEntry@23@PEAUGCHandleEntryID@23@@Z
    void LocalValidateValue(unsigned int, ::Cn::Engine::GCHandleLocalEntry * *, ::Cn::Engine::GCHandleEntryID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StorageAddGroup@GCHandleTable@Engine@Cn@@AEAAXPEAPEAPEAUGroup@123@PEAH_NPEAU4123@@Z
    void StorageAddGroup(WindissectOpaque * * *, int *, bool, WindissectOpaque *);
};
} // namespace Cn::Engine
