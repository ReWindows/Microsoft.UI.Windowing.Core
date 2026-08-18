#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 5 member(s).
namespace Windowing {
class ExternalFeature {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ExternalFeature@Windowing@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ExternalFeature@Windowing@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeatureProc@ExternalFeature@Windowing@@UEAA?AW4LResult@Core@@PEAVWindow@2@W4WindowMessage@4@W4WParam@4@W4LParam@4@@Z
    virtual int FeatureProc(WindissectOpaque *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateOwnerAccess@ExternalFeature@Windowing@@SA?AV?$SmartPtr@VExternalFeature@Windowing@@@CFlat@@W4FeatureTypeHandle@Api@@W4FeatureHandle@6@@Z
    static WindissectOpaque ValidateOwnerAccess(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type$FastReturn$@ExternalFeature@Windowing@@QEAAPEAVExternalFeatureType@2@XZ
    WindissectOpaque * get_Type$FastReturn$();
};
} // namespace Windowing
