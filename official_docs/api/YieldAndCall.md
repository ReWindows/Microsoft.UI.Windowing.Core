# `Core` :: `YieldAndCall`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `Microsoft.UI.Windowing.Core.dll`. Total members: **9**.

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

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `DestroyWnd` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetSystemMetrics` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetWindowPos` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `ContentNodeHandler` | `bool` | `Method` | `Pdb` | No (PDB) |
| `CreateWindowIndirect` | `enum Core::WindowHandle` | `Method` | `Pdb` | No (PDB) |
| `FeatureProc` | `enum Core::LResult` | `Method` | `Pdb` | No (PDB) |
| `GetTitle` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetWindowStylesNative` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `TranslateAcceleratorW` | `bool` | `Method` | `Pdb` | No (PDB) |
