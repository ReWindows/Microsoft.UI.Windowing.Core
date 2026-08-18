#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 15 member(s).
namespace Windowing {
class AppWindowTitleBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@AppWindowTitleBar@Windowing@@SA?AV?$SmartPtr@VAppWindowTitleBar@Windowing@@@CFlat@@XZ
    static WindissectOpaque Create$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@AppWindowTitleBar@Windowing@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateNativeInitialization@AppWindowTitleBar@Windowing@@QEAAXXZ
    void EvaluateNativeInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTitleBarNative@AppWindowTitleBar@Windowing@@QEAAXXZ
    void InitializeTitleBarNative();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNonClientCustomizationSupported@AppWindowTitleBar@Windowing@@SA_NXZ
    static bool IsNonClientCustomizationSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitleBarTheming@AppWindowTitleBar@Windowing@@QEAAXXZ
    void SetTitleBarTheming();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWin32TitleBarTheming@AppWindowTitleBar@Windowing@@QEAAXXZ
    void SetWin32TitleBarTheming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeTitleBarNative@AppWindowTitleBar@Windowing@@QEAAXXZ
    void UninitializeTitleBarNative();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppWindowTitleBar@Windowing@@QEAA@XZ
    ~AppWindowTitleBar();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@AppWindowTitleBar@Windowing@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(WindissectOpaque *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@AppWindowTitleBar@Windowing@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Api_IAppWindowTitleBar_ResetToDefault$@AppWindowTitleBar@Windowing@@AEAAXXZ
    void Api_IAppWindowTitleBar_ResetToDefault$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFeatureInstance@AppWindowTitleBar@Windowing@@CA?AV?$SmartPtr@VFeature@Windowing@@@CFlat@@PEAVInternalFeatureType@2@PEAVObject@System@@@Z
    static WindissectOpaque CreateFeatureInstance(WindissectOpaque *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@AppWindowTitleBar@Windowing@@AEAAXXZ
    void EnsureInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUISettingsColorValuesChanged@AppWindowTitleBar@Windowing@@AEAAJPEAUIUISettings@ViewManagement@UI@Windows@@PEAUIInspectable@@@Z
    long OnUISettingsColorValuesChanged(::Windows::UI::ViewManagement::IUISettings *, IInspectable *);
};
} // namespace Windowing
