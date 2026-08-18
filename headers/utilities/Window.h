#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 21 member(s).
namespace Windowing {
class Window {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachFeature@Window@Windowing@@QEAA?AV?$SmartPtr@VFeature@Windowing@@@CFlat@@PEAVFeatureType@2@UIntPtr@System@@PEAVObject@7@U?$Ref@W4FeatureHandle@Api@@@4@@Z
    WindissectOpaque AttachFeature(WindissectOpaque *, ::System::IntPtr, ::System::Object *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@Window@Windowing@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAsFeature@Window@Windowing@@SA?AV?$SmartPtr@VFeature@Windowing@@@CFlat@@PEAVFeatureType@2@UIntPtr@System@@PEAVObject@7@PEAUCreateStructW@Core@@@Z
    static WindissectOpaque CreateAsFeature(WindissectOpaque *, ::System::IntPtr, ::System::Object *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultProcessing@Window@Windowing@@QEAA?AW4LResult@Core@@W4WindowMessage@4@W4WParam@4@W4LParam@4@@Z
    int DefaultProcessing(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Window@Windowing@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFeature@Window@Windowing@@QEAAXPEAVFeature@2@W4FeatureHandle@Api@@UIntPtr@System@@@Z
    void DetachFeature(WindissectOpaque *, int, ::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@Window@Windowing@@UEAAXXZ
    virtual void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromApiHandle@Window@Windowing@@SA?AV?$SmartPtr@VWindow@Windowing@@@CFlat@@W4Handle@Core@@@Z
    static WindissectOpaque FromApiHandle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromWindowHandle@Window@Windowing@@SA?AV?$SmartPtr@VWindow@Windowing@@@CFlat@@W4WindowHandle@Core@@@Z
    static WindissectOpaque FromWindowHandle(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStyles@Window@Windowing@@SA?AW4WindowStyle64@Core@@W4WindowHandle@4@@Z
    static int GetStyles(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitContextStatics@Window@Windowing@@SAXXZ
    static void InitContextStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessWindowCreation@Window@Windowing@@SA?AW4LResult@Core@@W4Handle@4@W4WindowHandle@4@W4WindowMessage@4@W4WParam@4@W4LParam@4@@Z
    static int ProcessWindowCreation(int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStyles@Window@Windowing@@QEAAXXZ
    void UpdateStyles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOwnedByCurrentThread@Window@Windowing@@QEAA_NXZ
    bool get_IsOwnedByCurrentThread();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@Window@Windowing@@IEAAXW4WindowHandle@Core@@_N@Z
    void Init$(int, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachFeatureInstance@Window@Windowing@@AEAA?AV?$SmartPtr@VFeature@Windowing@@@CFlat@@PEAVFeatureType@2@UIntPtr@System@@PEAVObject@7@@Z
    WindissectOpaque AttachFeatureInstance(WindissectOpaque *, ::System::IntPtr, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFeatureInstance@Window@Windowing@@AEAAXPEAVFeature@2@UIntPtr@System@@@Z
    void DetachFeatureInstance(WindissectOpaque *, ::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFeatureInstance$FastReturn$@Window@Windowing@@AEAAPEAVFeature@2@PEAVFeatureType@2@@Z
    WindissectOpaque * FindFeatureInstance$FastReturn$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishCreateAsFeature@Window@Windowing@@CA?AV?$SmartPtr@VWindow@Windowing@@@CFlat@@W4WindowHandle@Core@@@Z
    static WindissectOpaque FinishCreateAsFeature(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMessage@Window@Windowing@@AEAA?AW4LResult@Core@@W4WindowMessage@4@W4WParam@4@W4LParam@4@@Z
    int ProcessMessage(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessStyleChanging@Window@Windowing@@AEAAXW4WParam@Core@@W4LParam@4@@Z
    void ProcessStyleChanging(int, int);
};
} // namespace Windowing
