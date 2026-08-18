#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 4 member(s).
namespace Windowing {
class FeatureTypeData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFeatureType@FeatureTypeData@Windowing@@QEAA?AV?$SmartPtr@VFeatureType@Windowing@@@CFlat@@XZ
    WindissectOpaque CreateFeatureType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@FeatureTypeData@Windowing@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FeatureTypeData@Windowing@@QEAAXPEAVFeatureType@2@@Z
    void Initialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FeatureTypeData@Windowing@@QEAA@XZ
    ~FeatureTypeData();
};
} // namespace Windowing
