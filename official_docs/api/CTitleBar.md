# `global` :: `CTitleBar`

**Category:** [Controls & Widgets](./README.md)

Reconstructed from `Microsoft.UI.Windowing.Core.dll`. Total members: **60**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class CFlat; 
class CTitleBar; 
class Content; 
class Core; 
namespace Microsoft { namespace WRL { class Details; } } 
class Windowing; 
class CAutoHandle; class CFlat; class CTitleBar; class CTitleBarCaptionButtonsFragmentProvider; class CTitleBarCaptionButtonsFragmentRootProvider; class CTitleBarResourceProvider; class CollectionAdapter; class Content; class Core; class DCompUtil; class EHExceptionRecord; class Entry; class Enumerator; class FEATURESTYLES; class Factory; class FindAll; class FindFirst; class FindOperation; class FlagCache; class FreeLibrary; class GDIHelpers; class Generation; class HACCEL__; class HBITMAP__; class HDC__; class HFEATURETYPE__; class HFONT__; class HINSTANCE__; class HMSGFILTER__; class HSTRING__; class HWND__; class IActivationFactory; class IContentNode; class IDCompositionDevice3; class IDCompositionSurface; class IDXGISurface1; class IInspectable; class IRawElementProviderFragment; class IRawElementProviderFragmentRoot; class IRawElementProviderSimple; class IStream; class IUnknown; class IWICBitmapSource; class IWICImagingFactory; class IWeakReference; class InstanceAllocator; class InstanceInitializer; class InstanceRecycler; class KeyCollection; class Map; class ReunionModuleContextHost; class SharingLease; class TitleBarFontResource; class UiaRect; class ValueCollection; class Windowing; class _CONTEXT; class _EXCEPTION_POINTERS; class _EXCEPTION_RECORD; class _GUID; class _LUID; class _TP_CALLBACK_INSTANCE; class _TP_WAIT; class __FrameHandler3; class _s_CatchableType; class _s_FuncInfo; class _s_HandlerType; class _s_ThrowInfo; class _s_TryBlockMapEntry; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByVal; class _xDISPATCHER_CONTEXT; class lambda_76327b6a927ab0b8f93e474f10a31415; class lambda_d4b415499232c97ca1071d091cbf02c4; class lambda_f0b2ec8e45e60bc1f6230a8620f64223; class tagPOINT; class tagRECT; class tagRGBQUAD; class tagSAFEARRAY; class tagVARIANT; class thunk; 
namespace Api { class FeatureCallInfo; class FeatureIdExtension; class FeatureStyles; class FeatureTypeInfo; class IExportContentNode; class IExportContentNodeManager; class IExportFeatureTypeBuilder; class IExportMessageFilterBuilder; class ReunionApi32; } 
namespace Cn { class Context; class FailFast; class Process; class Throw; } 
namespace Cn { namespace Com { class DeferredRelease; } } 
namespace Cn { namespace Engine { class GCHandleEntryID; class GCHandleLocalEntry; class GCHandleTable; class Lock; class LockPriority; class ProcessItem; class UsingLock; } } 
namespace Filters { class AcceleratorTable; class BoundAcceleratorTable; class LocalAcceleratorTable; class MessageDigest; class MessageFilter; class RegisteredMessage; } 
namespace Geometry { class CRect; } 
namespace Microsoft { namespace CoreUI { namespace Runtime { class Utils; } } } 
namespace Microsoft { namespace UI { class WindowId; } } 
namespace Microsoft { namespace UI { namespace Input { class IInputNonClientPointerSource; class INonClientPointerEventArgs; class INonClientRegionsChangedEventArgs; } } } 
namespace Microsoft { namespace WRL { class ComPtr; class Details; class FtmBase; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HStringReference; } } } 
namespace System { class Array; class Delegate; class Exception; class IFormatProvider; class Int32; class IntPtr; class InvalidOperationException; class Nullable; class Object; class String; class SystemException; class ThrowHelper; class Type; class UInt32; } 
namespace System { namespace Collections { class CapacityUtilities; class IEnumerator; } } 
namespace System { namespace Collections { namespace Generic { class Dictionary; class EqualityComparer; class HashHelpers; class ICollection; class IComparer; class IEnumerator; class IEqualityComparer; class List; class Queue; } } } 
namespace System { namespace Runtime { namespace InteropServices { class COMException; class GCHandle; class Marshal; } } } 
namespace System { namespace Text { class IntegerFormatter; class ParsedFormat; class StringBuilder; } } 
namespace Windows { class Foundation; } 
namespace Windows { namespace Graphics { class RectInt32; } } 
namespace Windows { namespace UI { class Color; } } 
namespace Windows { namespace UI { namespace ViewManagement { class IUISettings; } } } 
namespace std { class _Iterator_base0; class _List_const_iterator; class _List_iterator; class _List_node; class _List_simple_types; class _List_unchecked_const_iterator; class _List_unchecked_iterator; class _List_val; class allocator; class bad_alloc; class bad_array_new_length; class bad_exception; class bad_function_call; class basic_string; class char_traits; class exception; class function; class length_error; class logic_error; class nothrow_t; class nullptr_t; class out_of_range; class pair; class vector; } 
namespace wil { class FailureInfo; class ResultException; class unique_any_t; } 
namespace wil { namespace details { class ResultStatus; class ThreadFailureCallbackHolder; class resource_policy; class unique_storage; } } 
namespace wil { namespace details_abi { class ProcessLocalData; class ProcessLocalStorageData; class ThreadLocalData; } } 
namespace wistd { class function; class integral_constant; } 

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

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `CTitleBar` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `~CTitleBar` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `BorderThickness` | `float` | `Method` | `Pdb` | No (PDB) |
| `CaptionControlsWindowWndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `ClientToWindowUnvirtualized` | `void` | `Method` | `Pdb` | No (PDB) |
| `CommitDCompDevice` | `long` | `Method` | `Pdb` | No (PDB) |
| `ComputeHitTestRects` | `long` | `Method` | `Pdb` | No (PDB) |
| `ComputeLayoutRects` | `long` | `Method` | `Pdb` | No (PDB) |
| `ComputeOccludingRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `ComputeTitleBarRectInternal` | `long` | `Method` | `Pdb` | No (PDB) |
| `ComputeTitleBarRects` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateCaptionControlsWindow` | `struct HWND__*` | `Method` | `Pdb` | No (PDB) |
| `CreateDebugTestVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `EvaluateNonClientCustomizationSupported` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetCaptionButtonFragmentProvider` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDefaultColors` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetHitTestRectFromRegionKind` | `struct Windows::Graphics::RectInt32` | `Accessor` | `Pdb` | No (PDB) |
| `HandleDeviceLost` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitializeComposition` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitializeDComp` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitializeDCompVariables` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitializeInputObject` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsColorStillDefaultAndColorsConflict` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `ManuallyPositionElements` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnHovered` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnPointerExited` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnPointerMoved` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnPointerPressed` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnPointerReleased` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnRegionsChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `PaintButton` | `long` | `Method` | `Pdb` | No (PDB) |
| `PaintIcon` | `long` | `Method` | `Pdb` | No (PDB) |
| `PaintTitle` | `long` | `Method` | `Pdb` | No (PDB) |
| `PickColor` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `PlaceVisuals` | `long` | `Method` | `Pdb` | No (PDB) |
| `RepositionChildWindows` | `long` | `Method` | `Pdb` | No (PDB) |
| `RuntimeClassInitialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShowHideTopBorder` | `long` | `Method` | `Pdb` | No (PDB) |
| `Uninitialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `UninitializeInputObject` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateActivation` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateAllButtonStates` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateBackgroundSurfaces` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateBackgroundTransforms` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateButtonState` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateCloak` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateColors` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateConstraints` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateCurrentRestoreGlyph` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateDragRectangles` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateExtendsContentIntoTitleBar` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateHoverPressState` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateIconShowOptions` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateRemoveTitleBar` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateSize` | `long` | `Method` | `Pdb` | No (PDB) |
| `ValidateDCompDevice` | `long` | `Method` | `Pdb` | No (PDB) |
| `WindowUnvirtualizedToClient` | `void` | `Method` | `Pdb` | No (PDB) |
| `s_InputSinkWndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
