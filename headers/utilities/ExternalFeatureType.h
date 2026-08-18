#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 6 member(s).
namespace Windowing {
class ExternalFeatureType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ExternalFeatureType@Windowing@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFeatureTypeData@ExternalFeatureType@Windowing@@UEAA?AUFeatureTypeData@2@XZ
    virtual WindissectOpaque CopyFeatureTypeData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ExternalFeatureType@Windowing@@SA?AV?$SmartPtr@VExternalFeatureType@Windowing@@@CFlat@@PEAVString@System@@W4FeatureTypeFlags@Api@@W4FunctionPointer@Core@@UIntPtr@6@UFeatureStyles@8@IW4FeatureTypeHandle@8@33W4MessageFilterHandle@8@@Z
    static WindissectOpaque Create$(::System::String *, int, int, ::System::IntPtr, ::Api::FeatureStyles, unsigned int, int, ::System::IntPtr, ::System::IntPtr, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ExternalFeatureType@Windowing@@UEAA?AV?$SmartPtr@VFeature@Windowing@@@CFlat@@PEAVObject@System@@@Z
    virtual WindissectOpaque CreateInstance(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ExternalFeatureType@Windowing@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromApiHandle@ExternalFeatureType@Windowing@@SA?AV?$SmartPtr@VExternalFeatureType@Windowing@@@CFlat@@W4FeatureTypeHandle@Api@@@Z
    static WindissectOpaque FromApiHandle(int);
};
} // namespace Windowing
