#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 9 member(s).
namespace Core {
class YieldAndCall {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentNodeHandler@YieldAndCall@Core@@SA_NW4ContentNodeProc@Api@@UIntPtr@System@@W4ContentNodeAction@4@1@Z
    static bool ContentNodeHandler(int, ::System::IntPtr, int, ::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowIndirect@YieldAndCall@Core@@SA?AW4WindowHandle@2@U?$Ref@UCreateStructW@Core@@@CFlat@@@Z
    static int CreateWindowIndirect(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWnd@YieldAndCall@Core@@SAXW4WindowHandle@2@@Z
    static void DestroyWnd(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeatureProc@YieldAndCall@Core@@SA?AW4LResult@2@W4FunctionPointer@2@U?$Ref@UFeatureCallInfo@Api@@@CFlat@@W4WindowHandle@2@W4WindowMessage@2@W4WParam@2@W4LParam@2@@Z
    static int FeatureProc(int, WindissectOpaque, int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemMetrics@YieldAndCall@Core@@SAHW4SystemMetric@2@@Z
    static int GetSystemMetrics(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@YieldAndCall@Core@@SAXW4WindowHandle@2@U?$Ref@PEAUHSTRING__@@@CFlat@@@Z
    static void GetTitle(int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPos@YieldAndCall@Core@@SA_NW4WindowHandle@2@0HHHHW4WindowPosFlags@2@@Z
    static bool SetWindowPos(int, int, int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorW@YieldAndCall@Core@@SA_NW4WindowHandle@2@W4AccelHandle@2@PEAUMsgStruct@2@@Z
    static bool TranslateAcceleratorW(int, int, WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowStylesNative@YieldAndCall@Core@@CAXW4WindowHandle@2@_K1@Z
    static void SetWindowStylesNative(int, uint64_t, uint64_t);
};
} // namespace Core
