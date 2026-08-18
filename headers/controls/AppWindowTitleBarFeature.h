#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 4 member(s).
namespace Windowing {
class AppWindowTitleBarFeature {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@AppWindowTitleBarFeature@Windowing@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@AppWindowTitleBarFeature@Windowing@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeatureProc@AppWindowTitleBarFeature@Windowing@@UEAA?AW4LResult@Core@@PEAVWindow@2@W4WindowMessage@4@W4WParam@4@W4LParam@4@@Z
    virtual int FeatureProc(WindissectOpaque *, int, int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNcCalcSize@AppWindowTitleBarFeature@Windowing@@AEAA?AW4LResult@Core@@PEAVWindow@2@W4WindowMessage@4@W4WParam@4@W4LParam@4@@Z
    int OnNcCalcSize(WindissectOpaque *, int, int, int);
};
} // namespace Windowing
