#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 5 member(s).
namespace Windowing {
class FeatureType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFeatureTypeDataUnderGlobalContextLock@FeatureType@Windowing@@SA?AV?$SmartPtr@VFeatureType@Windowing@@@CFlat@@W4FeatureTypeHandle@Api@@U?$Ref@UFeatureTypeData@Windowing@@@4@@Z
    static WindissectOpaque CopyFeatureTypeDataUnderGlobalContextLock(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromApiHandle@FeatureType@Windowing@@SA?AV?$SmartPtr@VFeatureType@Windowing@@@CFlat@@W4FeatureTypeHandle@Api@@@Z
    static WindissectOpaque FromApiHandle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterFeatureWindowClass@FeatureType@Windowing@@QEAAXU?$Ref@UWndClassExW@Core@@@CFlat@@@Z
    void RegisterFeatureWindowClass(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterApiObject@FeatureType@Windowing@@UEAAXXZ
    virtual void UnregisterApiObject();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@FeatureType@Windowing@@IEAAXPEAVString@System@@W4FeatureTypeFlags@Api@@UFeatureStyles@6@IUIntPtr@4@3W4MessageFilterHandle@6@@Z
    void Init$(::System::String *, int, ::Api::FeatureStyles, unsigned int, ::System::IntPtr, ::System::IntPtr, int);
};
} // namespace Windowing
