#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 60 member(s).
class CTitleBar {
public:
    class UIUpdateSuspender;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTitleBar@@QEAA@XZ
    CTitleBar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaptionButtonFragmentProvider@CTitleBar@@QEAAJW4CaptionButtonTypes@TitleBarUIA@@PEAPEAUIRawElementProviderFragment@@@Z
    long GetCaptionButtonFragmentProvider(int, IRawElementProviderFragment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDeviceLost@CTitleBar@@QEAAJXZ
    long HandleDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CTitleBar@@QEAAJPEAUHWND__@@PEAVAppWindowTitleBar@Windowing@@@Z
    long RuntimeClassInitialize(HWND__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@CTitleBar@@QEAAJXZ
    long Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDragRectangles@CTitleBar@@QEAAJIPEAURectInt32@Graphics@Windows@@@Z
    long UpdateDragRectangles(unsigned int, ::Windows::Graphics::RectInt32*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTitleBar@@UEAA@XZ
    virtual ~CTitleBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BorderThickness@CTitleBar@@AEAAMXZ
    float BorderThickness();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptionControlsWindowWndProc@CTitleBar@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t CaptionControlsWindowWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientToWindowUnvirtualized@CTitleBar@@AEAAXAEAUtagPOINT@@@Z
    void ClientToWindowUnvirtualized(tagPOINT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitDCompDevice@CTitleBar@@AEAAJXZ
    long CommitDCompDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeHitTestRects@CTitleBar@@AEAAJI@Z
    long ComputeHitTestRects(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLayoutRects@CTitleBar@@AEAAJW4DEVICE_SCALE_FACTOR@@UCRect@Geometry@@PEAUTitleBarLayoutRects@1@@Z
    long ComputeLayoutRects(int, ::Geometry::CRect, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeOccludingRect@CTitleBar@@AEAAJXZ
    long ComputeOccludingRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTitleBarRectInternal@CTitleBar@@AEAAJIPEAUtagRECT@@@Z
    long ComputeTitleBarRectInternal(unsigned int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTitleBarRects@CTitleBar@@AEAAJXZ
    long ComputeTitleBarRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCaptionControlsWindow@CTitleBar@@AEAAPEAUHWND__@@XZ
    HWND__* CreateCaptionControlsWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDebugTestVisual@CTitleBar@@AEAAJXZ
    long CreateDebugTestVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateNonClientCustomizationSupported@CTitleBar@@CAJXZ
    static long EvaluateNonClientCustomizationSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColors@CTitleBar@@AEAAJPEAUTitleBarColorSet@1@@Z
    long GetDefaultColors(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHitTestRectFromRegionKind@CTitleBar@@AEAA?AURectInt32@Graphics@Windows@@W4NonClientRegionKind@Input@UI@Microsoft@@@Z
    ::Windows::Graphics::RectInt32 GetHitTestRectFromRegionKind(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeComposition@CTitleBar@@AEAAJXZ
    long InitializeComposition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDComp@CTitleBar@@AEAAJXZ
    long InitializeDComp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDCompVariables@CTitleBar@@AEAAJXZ
    long InitializeDCompVariables();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputObject@CTitleBar@@AEAAJXZ
    long InitializeInputObject();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorStillDefaultAndColorsConflict@CTitleBar@@AEAA_NUButtonColorSet@1@0_N@Z
    bool IsColorStillDefaultAndColorsConflict(WindissectOpaque, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManuallyPositionElements@CTitleBar@@AEAAJXZ
    long ManuallyPositionElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHovered@CTitleBar@@AEAAJPEAUINonClientPointerEventArgs@Input@UI@Microsoft@@_N@Z
    long OnHovered(::Microsoft::UI::Input::INonClientPointerEventArgs *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CTitleBar@@AEAAJPEAUIInputNonClientPointerSource@Input@UI@Microsoft@@PEAUINonClientPointerEventArgs@345@@Z
    long OnPointerExited(::Microsoft::UI::Input::IInputNonClientPointerSource *, ::Microsoft::UI::Input::INonClientPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@CTitleBar@@AEAAJPEAUIInputNonClientPointerSource@Input@UI@Microsoft@@PEAUINonClientPointerEventArgs@345@@Z
    long OnPointerMoved(::Microsoft::UI::Input::IInputNonClientPointerSource *, ::Microsoft::UI::Input::INonClientPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CTitleBar@@AEAAJPEAUIInputNonClientPointerSource@Input@UI@Microsoft@@PEAUINonClientPointerEventArgs@345@@Z
    long OnPointerPressed(::Microsoft::UI::Input::IInputNonClientPointerSource *, ::Microsoft::UI::Input::INonClientPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@CTitleBar@@AEAAJPEAUIInputNonClientPointerSource@Input@UI@Microsoft@@PEAUINonClientPointerEventArgs@345@@Z
    long OnPointerReleased(::Microsoft::UI::Input::IInputNonClientPointerSource *, ::Microsoft::UI::Input::INonClientPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRegionsChanged@CTitleBar@@AEAAJPEAUIInputNonClientPointerSource@Input@UI@Microsoft@@PEAUINonClientRegionsChangedEventArgs@345@@Z
    long OnRegionsChanged(::Microsoft::UI::Input::IInputNonClientPointerSource *, ::Microsoft::UI::Input::INonClientRegionsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintButton@CTitleBar@@AEAAJPEAUIDCompositionSurface@@W4TitleBarControl@1@W4TITLE_BAR_BITMAP_TYPE@@AEBUtagRECT@@3@Z
    long PaintButton(IDCompositionSurface *, int, int, tagRECT const &, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintIcon@CTitleBar@@AEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@1@Z
    long PaintIcon(IDCompositionSurface *, tagRECT const &, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintTitle@CTitleBar@@AEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@@Z
    long PaintTitle(IDCompositionSurface *, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PickColor@CTitleBar@@AEAAKAEAU?$Nullable$1@UColor@Core@@@System@@K_N@Z
    unsigned long PickColor(::System::Nullable$1<WindissectOpaque> &, unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceVisuals@CTitleBar@@AEAAJ_N@Z
    long PlaceVisuals(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepositionChildWindows@CTitleBar@@AEAAJXZ
    long RepositionChildWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHideTopBorder@CTitleBar@@AEAAJXZ
    long ShowHideTopBorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeInputObject@CTitleBar@@AEAAJXZ
    long UninitializeInputObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActivation@CTitleBar@@AEAAJXZ
    long UpdateActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAllButtonStates@CTitleBar@@AEAAJW4DrawButtonFilter@1@_N@Z
    long UpdateAllButtonStates(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundSurfaces@CTitleBar@@AEAAJXZ
    long UpdateBackgroundSurfaces();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundTransforms@CTitleBar@@AEAAJXZ
    long UpdateBackgroundTransforms();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonState@CTitleBar@@AEAAJW4TitleBarControl@1@_N@Z
    long UpdateButtonState(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCloak@CTitleBar@@AEAAJXZ
    long UpdateCloak();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColors@CTitleBar@@AEAAJXZ
    long UpdateColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConstraints@CTitleBar@@AEAAJXZ
    long UpdateConstraints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentRestoreGlyph@CTitleBar@@AEAAJXZ
    long UpdateCurrentRestoreGlyph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExtendsContentIntoTitleBar@CTitleBar@@AEAAJXZ
    long UpdateExtendsContentIntoTitleBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHoverPressState@CTitleBar@@AEAAJW4TitleBarControl@1@@Z
    long UpdateHoverPressState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconShowOptions@CTitleBar@@AEAAJXZ
    long UpdateIconShowOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoveTitleBar@CTitleBar@@AEAAJXZ
    long UpdateRemoveTitleBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSize@CTitleBar@@AEAAJXZ
    long UpdateSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateDCompDevice@CTitleBar@@AEAAJJ@Z
    long ValidateDCompDevice(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowUnvirtualizedToClient@CTitleBar@@AEAAXAEAUtagPOINT@@@Z
    void WindowUnvirtualizedToClient(tagPOINT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InputSinkWndProc@CTitleBar@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_InputSinkWndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
