#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 2 member(s).
namespace Filters {
class AcceleratorTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@AcceleratorTable@Filters@@UEAAXXZ
    virtual void Dispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentKeyModifiers@AcceleratorTable@Filters@@SA?AW4MessageModifiers@Core@@W4WindowMessage@4@U?$Ref@UAcceleratorTable$FlagCache@Filters@@@CFlat@@@Z
    static int GetCurrentKeyModifiers(int, WindissectOpaque);
};
} // namespace Filters
