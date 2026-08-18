# `Core` :: `Logging`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `Microsoft.UI.Windowing.Core.dll`. Total members: **32**.

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

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 32 member(s).
namespace Core {
class Logging {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_SetDragRectangles@Logging@Core@@SAXW4WindowHandle@2@@Z
    static void AppWindowTitleBar_SetDragRectangles(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_BackgroundColor@Logging@Core@@SAXW4WindowHandle@2@U?$Nullable$1@UColor@Core@@@System@@@Z
    static void AppWindowTitleBar_put_BackgroundColor(int, ::System::Nullable$1<WindissectOpaque>);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_ButtonBackgroundColor@Logging@Core@@SAXW4WindowHandle@2@U?$Nullable$1@UColor@Core@@@System@@@Z
    static void AppWindowTitleBar_put_ButtonBackgroundColor(int, ::System::Nullable$1<WindissectOpaque>);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_ButtonForegroundColor@Logging@Core@@SAXW4WindowHandle@2@U?$Nullable$1@UColor@Core@@@System@@@Z
    static void AppWindowTitleBar_put_ButtonForegroundColor(int, ::System::Nullable$1<WindissectOpaque>);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_ButtonHoverBackgroundColor@Logging@Core@@SAXW4WindowHandle@2@U?$Nullable$1@UColor@Core@@@System@@@Z
    static void AppWindowTitleBar_put_ButtonHoverBackgroundColor(int, ::System::Nullable$1<WindissectOpaque>);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_ButtonHoverForegroundColor@Logging@Core@@SAXW4WindowHandle@2@U?$Nullable$1@UColor@Core@@@System@@@Z
    static void AppWindowTitleBar_put_ButtonHoverForegroundColor(int, ::System::Nullable$1<WindissectOpaque>);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_ButtonInactiveBackgroundColor@Logging@Core@@SAXW4WindowHandle@2@U?$Nullable$1@UColor@Core@@@System@@@Z
    static void AppWindowTitleBar_put_ButtonInactiveBackgroundColor(int, ::System::Nullable$1<WindissectOpaque>);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_ButtonInactiveForegroundColor@Logging@Core@@SAXW4WindowHandle@2@U?$Nullable$1@UColor@Core@@@System@@@Z
    static void AppWindowTitleBar_put_ButtonInactiveForegroundColor(int, ::System::Nullable$1<WindissectOpaque>);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_ButtonPressedBackgroundColor@Logging@Core@@SAXW4WindowHandle@2@U?$Nullable$1@UColor@Core@@@System@@@Z
    static void AppWindowTitleBar_put_ButtonPressedBackgroundColor(int, ::System::Nullable$1<WindissectOpaque>);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_ButtonPressedForegroundColor@Logging@Core@@SAXW4WindowHandle@2@U?$Nullable$1@UColor@Core@@@System@@@Z
    static void AppWindowTitleBar_put_ButtonPressedForegroundColor(int, ::System::Nullable$1<WindissectOpaque>);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_ExtendsContentIntoTitleBar@Logging@Core@@SAXW4WindowHandle@2@_N@Z
    static void AppWindowTitleBar_put_ExtendsContentIntoTitleBar(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_ForegroundColor@Logging@Core@@SAXW4WindowHandle@2@U?$Nullable$1@UColor@Core@@@System@@@Z
    static void AppWindowTitleBar_put_ForegroundColor(int, ::System::Nullable$1<WindissectOpaque>);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_InactiveBackgroundColor@Logging@Core@@SAXW4WindowHandle@2@U?$Nullable$1@UColor@Core@@@System@@@Z
    static void AppWindowTitleBar_put_InactiveBackgroundColor(int, ::System::Nullable$1<WindissectOpaque>);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_InactiveForegroundColor@Logging@Core@@SAXW4WindowHandle@2@U?$Nullable$1@UColor@Core@@@System@@@Z
    static void AppWindowTitleBar_put_InactiveForegroundColor(int, ::System::Nullable$1<WindissectOpaque>);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowTitleBar_put_PreferredHeightOption@Logging@Core@@SAXW4WindowHandle@2@W4TitleBarHeightOption@Api@@@Z
    static void AppWindowTitleBar_put_PreferredHeightOption(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CTitleBar_InputSinkWndProc@Logging@Core@@SAXPEAUHWND__@@I_K_J@Z
    static void CTitleBar_InputSinkWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReunionModuleDllGetActivationFactory@Logging@Core@@SAXPEAUHSTRING__@@@Z
    static void ReunionModuleDllGetActivationFactory(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReunionModuleStartUp@Logging@Core@@SAXXZ
    static void ReunionModuleStartUp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterTraceLogging@Logging@Core@@SAXXZ
    static void UnRegisterTraceLogging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Window@Logging@Core@@SAXW4WindowHandle@2@@Z
    static void Window(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowApiUtilsDestroy@Logging@Core@@SAXW4WindowHandle@2@@Z
    static void WindowApiUtilsDestroy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Window_AttachFeature@Logging@Core@@SAXW4WindowHandle@2@PEAVString@System@@@Z
    static void Window_AttachFeature(int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Window_DetachFeature@Logging@Core@@SAXW4WindowHandle@2@PEAVString@System@@@Z
    static void Window_DetachFeature(int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Window_DisposeEnter@Logging@Core@@SAXW4WindowHandle@2@@Z
    static void Window_DisposeEnter(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Window_DisposeLeave@Logging@Core@@SAXW4WindowHandle@2@@Z
    static void Window_DisposeLeave(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Window_GetCombinedWindowStyles@Logging@Core@@SAXW4WindowHandle@2@@Z
    static void Window_GetCombinedWindowStyles(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Window_InitContextStatics@Logging@Core@@SAXXZ
    static void Window_InitContextStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Window_ProcessWindowMessage_NCDestroy@Logging@Core@@SAXW4WindowHandle@2@@Z
    static void Window_ProcessWindowMessage_NCDestroy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?YieldAndCallDestroyWnd@Logging@Core@@SAXW4WindowHandle@2@@Z
    static void YieldAndCallDestroyWnd(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?YieldAndCall_GetTitleEnd@Logging@Core@@SAXW4WindowHandle@2@PEAUHSTRING__@@@Z
    static void YieldAndCall_GetTitleEnd(int, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?YieldAndCall_GetTitleStart@Logging@Core@@SAXW4WindowHandle@2@@Z
    static void YieldAndCall_GetTitleStart(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?YieldAndCall_SetWindowStyles@Logging@Core@@SAXW4WindowHandle@2@_K1@Z
    static void YieldAndCall_SetWindowStyles(int, uint64_t, uint64_t);
};
} // namespace Core

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `AppWindowTitleBar_SetDragRectangles` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_BackgroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_ButtonBackgroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_ButtonForegroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_ButtonHoverBackgroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_ButtonHoverForegroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_ButtonInactiveBackgroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_ButtonInactiveForegroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_ButtonPressedBackgroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_ButtonPressedForegroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_ExtendsContentIntoTitleBar` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_ForegroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_InactiveBackgroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_InactiveForegroundColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `AppWindowTitleBar_put_PreferredHeightOption` | `void` | `Method` | `Pdb` | No (PDB) |
| `CTitleBar_InputSinkWndProc` | `void` | `Method` | `Pdb` | No (PDB) |
| `ReunionModuleDllGetActivationFactory` | `void` | `Method` | `Pdb` | No (PDB) |
| `ReunionModuleStartUp` | `void` | `Method` | `Pdb` | No (PDB) |
| `UnRegisterTraceLogging` | `void` | `Method` | `Pdb` | No (PDB) |
| `Window` | `void` | `Method` | `Pdb` | No (PDB) |
| `WindowApiUtilsDestroy` | `void` | `Method` | `Pdb` | No (PDB) |
| `Window_AttachFeature` | `void` | `Method` | `Pdb` | No (PDB) |
| `Window_DetachFeature` | `void` | `Method` | `Pdb` | No (PDB) |
| `Window_DisposeEnter` | `void` | `Method` | `Pdb` | No (PDB) |
| `Window_DisposeLeave` | `void` | `Method` | `Pdb` | No (PDB) |
| `Window_GetCombinedWindowStyles` | `void` | `Method` | `Pdb` | No (PDB) |
| `Window_InitContextStatics` | `void` | `Method` | `Pdb` | No (PDB) |
| `Window_ProcessWindowMessage_NCDestroy` | `void` | `Method` | `Pdb` | No (PDB) |
| `YieldAndCallDestroyWnd` | `void` | `Method` | `Pdb` | No (PDB) |
| `YieldAndCall_GetTitleEnd` | `void` | `Method` | `Pdb` | No (PDB) |
| `YieldAndCall_GetTitleStart` | `void` | `Method` | `Pdb` | No (PDB) |
| `YieldAndCall_SetWindowStyles` | `void` | `Method` | `Pdb` | No (PDB) |
