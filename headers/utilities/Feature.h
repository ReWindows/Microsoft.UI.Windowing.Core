#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 7 member(s).
namespace Windowing {
class Feature {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@Feature@Windowing@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeatureProc@Feature@Windowing@@UEAA?AW4LResult@Core@@PEAVWindow@2@W4WindowMessage@4@W4WParam@4@W4LParam@4@@Z
    virtual int FeatureProc(WindissectOpaque *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAction@Feature@Windowing@@QEAA_NW4FeatureAction@Api@@PEAVWindow@2@UIntPtr@System@@@Z
    bool NotifyAction(int, WindissectOpaque *, ::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveClientHandle@Feature@Windowing@@QEAAXW4FeatureHandle@Api@@U?$Ref@_N@CFlat@@@Z
    void RemoveClientHandle(int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStyles@Feature@Windowing@@QEAAXW4WindowStyle64@Core@@0@Z
    void SetStyles(int, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@Feature@Windowing@@IEAAXPEAVFeatureType@2@@Z
    void Init$(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHandle@Feature@Windowing@@AEAA?AW4FeatureHandle@Api@@XZ
    int AddHandle();
};
} // namespace Windowing
