#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 3 member(s).
namespace Windowing {
class FeatureCallManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallFeatureChain@FeatureCallManager@Windowing@@QEAA?AW4LResult@Core@@PEAVWindow@2@W4WindowMessage@4@W4WParam@4@W4LParam@4@@Z
    int CallFeatureChain(WindissectOpaque *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@FeatureCallManager@Windowing@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromCurrentThread@FeatureCallManager@Windowing@@SA?AV?$SmartPtr@VFeatureCallManager@Windowing@@@CFlat@@W4AllowMissing@Core@@W4Win32Error@6@@Z
    static WindissectOpaque FromCurrentThread(int, int);
};
} // namespace Windowing
