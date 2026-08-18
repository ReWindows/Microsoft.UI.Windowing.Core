# `Windowing` :: `Window`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `Microsoft.UI.Windowing.Core.dll`. Total members: **21**.

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

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `AttachFeature` | `class CFlat::SmartPtr<class Windowing::Feature>` | `Method` | `Pdb` | No (PDB) |
| `AttachFeatureInstance` | `class CFlat::SmartPtr<class Windowing::Feature>` | `Method` | `Pdb` | No (PDB) |
| `ClearReferenceFields$` | `void` | `Method` | `Pdb` | No (PDB) |
| `CreateAsFeature` | `class CFlat::SmartPtr<class Windowing::Feature>` | `Method` | `Pdb` | No (PDB) |
| `DefaultProcessing` | `enum Core::LResult` | `Method` | `Pdb` | No (PDB) |
| `Delete$` | `void` | `Method` | `Pdb` | No (PDB) |
| `DetachFeature` | `void` | `Method` | `Pdb` | No (PDB) |
| `DetachFeatureInstance` | `void` | `Method` | `Pdb` | No (PDB) |
| `Dispose` | `void` | `Method` | `Pdb` | No (PDB) |
| `FindFeatureInstance$FastReturn$` | `class Windowing::Feature *` | `Method` | `Pdb` | No (PDB) |
| `FinishCreateAsFeature` | `class CFlat::SmartPtr<class Windowing::Window>` | `Method` | `Pdb` | No (PDB) |
| `FromApiHandle` | `class CFlat::SmartPtr<class Windowing::Window>` | `Method` | `Pdb` | No (PDB) |
| `FromWindowHandle` | `class CFlat::SmartPtr<class Windowing::Window>` | `Method` | `Pdb` | No (PDB) |
| `Init$` | `void` | `Method` | `Pdb` | No (PDB) |
| `InitContextStatics` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessMessage` | `enum Core::LResult` | `Method` | `Pdb` | No (PDB) |
| `ProcessStyleChanging` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessWindowCreation` | `enum Core::LResult` | `Method` | `Pdb` | No (PDB) |
| `UpdateStyles` | `void` | `Method` | `Pdb` | No (PDB) |
| `get_IsOwnedByCurrentThread` | `bool` | `Method` | `Pdb` | No (PDB) |
| `GetStyles` | `enum Core::WindowStyle64` | `Accessor` | `Pdb` | No (PDB) |
