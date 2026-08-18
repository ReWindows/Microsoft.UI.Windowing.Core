#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 6 member(s).
namespace Windowing {
class InternalFeatureType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@InternalFeatureType@Windowing@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFeatureTypeData@InternalFeatureType@Windowing@@UEAA?AUFeatureTypeData@2@XZ
    virtual WindissectOpaque CopyFeatureTypeData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@InternalFeatureType@Windowing@@SA?AV?$SmartPtr@VInternalFeatureType@Windowing@@@CFlat@@PEAVString@System@@W4FeatureTypeFlags@Api@@PEAVFeature$Factory@2@I@Z
    static WindissectOpaque Create$(::System::String *, int, WindissectOpaque$Factory *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@InternalFeatureType@Windowing@@UEAA?AV?$SmartPtr@VFeature@Windowing@@@CFlat@@PEAVObject@System@@@Z
    virtual WindissectOpaque CreateInstance(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@InternalFeatureType@Windowing@@UEAAXXZ
    virtual void Delete$();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@InternalFeatureType@Windowing@@IEAAXPEAVString@System@@W4FeatureTypeFlags@Api@@PEAVFeature$Factory@2@UFeatureStyles@6@IUIntPtr@4@4W4MessageFilterHandle@6@@Z
    void Init$(::System::String *, int, WindissectOpaque$Factory *, ::Api::FeatureStyles, unsigned int, ::System::IntPtr, ::System::IntPtr, int);
};
} // namespace Windowing
