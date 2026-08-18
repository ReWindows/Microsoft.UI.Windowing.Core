#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 4 member(s).
namespace Windowing {
class FeatureTypeBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@FeatureTypeBuilder@Windowing@@UEAAXXZ
    virtual void Delete$();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@FeatureTypeBuilder@Windowing@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(WindissectOpaque *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@FeatureTypeBuilder@Windowing@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Api_IExportFeatureTypeBuilder_CreateFeatureType$@FeatureTypeBuilder@Windowing@@AEAAXU?$Ref@W4FeatureTypeHandle@Api@@@CFlat@@@Z
    void Api_IExportFeatureTypeBuilder_CreateFeatureType$(WindissectOpaque);
};
} // namespace Windowing
