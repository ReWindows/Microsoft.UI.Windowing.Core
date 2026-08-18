#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 4 member(s).
namespace Cn::Engine {
class ProcessItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ProcessItem@Engine@Cn@@QEAAXXZ
    void Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDestroy@ProcessItem@Engine@Cn@@MEAAXXZ
    virtual void NotifyDestroy();
};
} // namespace Cn::Engine
