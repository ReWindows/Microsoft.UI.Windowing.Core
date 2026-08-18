#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 4 member(s).
namespace Content {
class DisconnectedContentRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@DisconnectedContentRoot@Content@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@DisconnectedContentRoot@Content@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@DisconnectedContentRoot@Content@@UEAAXXZ
    virtual void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeInOrphansFrom@DisconnectedContentRoot@Content@@QEAAXPEAVContentNodeContainer@2@@Z
    void TakeInOrphansFrom(WindissectOpaque *);
};
} // namespace Content
