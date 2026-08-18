#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 3 member(s).
namespace Windowing {
class DefaultFeature {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@DefaultFeature@Windowing@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@DefaultFeature@Windowing@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeatureProc@DefaultFeature@Windowing@@UEAA?AW4LResult@Core@@PEAVWindow@2@W4WindowMessage@4@W4WParam@4@W4LParam@4@@Z
    virtual int FeatureProc(WindissectOpaque *, int, int, int);
};
} // namespace Windowing
