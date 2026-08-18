#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 4 member(s).
namespace Windowing {
class FeatureCallContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@FeatureCallContext@Windowing@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@FeatureCallContext@Windowing@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@FeatureCallContext@Windowing@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromCurrentThread@FeatureCallContext@Windowing@@SA?AV?$SmartPtr@VFeatureCallContext@Windowing@@@CFlat@@W4AllowMissing@Core@@@Z
    static WindissectOpaque FromCurrentThread(int);
};
} // namespace Windowing
