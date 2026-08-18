# `Content` :: `ContentNodeManager`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `Microsoft.UI.Windowing.Core.dll`. Total members: **17**.

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

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 17 member(s).
namespace Content {
class ContentNodeManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ContentNodeManager@Content@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ContentNodeManager@Content@@SA?AV?$SmartPtr@VContentNodeManager@Content@@@CFlat@@PEAVThreadInfo@Core@@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ContentNodeManager@Content@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@ContentNodeManager@Content@@UEAAXXZ
    virtual void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWorkAll@ContentNodeManager@Content@@QEAAXU?$FastInterfacePtr@V?$ICollection$1@V?$SmartPtr@VContentNode@Content@@@CFlat@@@Generic@Collections@System@@@CFlat@@W4WorkType@2@W4TreeWalkOrder@2@_N@Z
    void FindWorkAll(WindissectOpaque, int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromCurrentThread@ContentNodeManager@Content@@SA?AV?$SmartPtr@VContentNodeManager@Content@@@CFlat@@W4AllowMissing@Core@@@Z
    static WindissectOpaque FromCurrentThread(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidatePreTranslationList@ContentNodeManager@Content@@QEAAX_N@Z
    void InvalidatePreTranslationList(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTreeChange@ContentNodeManager@Content@@UEAAXPEAVTreeNode@2@W4TreeChange@2@@Z
    virtual void NotifyTreeChange(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNodeChangedPreTranslation@ContentNodeManager@Content@@QEAAX_NU?$In@UMessageDigest@Filters@@@CFlat@@@Z
    void OnNodeChangedPreTranslation(bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreTranslateMessage@ContentNodeManager@Content@@QEAA_NPEAUMsgStruct@Core@@U?$In@UMessageDigest@Filters@@@CFlat@@@Z
    bool PreTranslateMessage(WindissectOpaque *, WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@ContentNodeManager@Content@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(WindissectOpaque *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@ContentNodeManager@Content@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@ContentNodeManager@Content@@IEAAXPEAVThreadInfo@Core@@@Z
    void Init$(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateList@ContentNodeManager@Content@@AEAA?AV?$SmartPtr@V?$List$1@V?$SmartPtr@VContentNode@Content@@@CFlat@@@Generic@Collections@System@@@CFlat@@XZ
    WindissectOpaque AllocateList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPerNodeWork@ContentNodeManager@Content@@AEAAXW4WorkType@2@U?$Ref@W4WorkType@Content@@@CFlat@@@Z
    void DoPerNodeWork(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoRecalcPreTranslationMask@ContentNodeManager@Content@@AEAAXW4WorkType@2@U?$Ref@W4WorkType@Content@@@CFlat@@@Z
    void DoRecalcPreTranslationMask(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleWork@ContentNodeManager@Content@@AEAAXW4WorkType@2@@Z
    void ScheduleWork(int);
};
} // namespace Content

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `AllocateList` | `class CFlat::SmartPtr<class System::Collections::Generic::List$1<class CFlat::SmartPtr<class Content::ContentNode> > >` | `Method` | `Pdb` | No (PDB) |
| `CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$` | `void` | `Method` | `Pdb` | No (PDB) |
| `CFlat_IImplementsComInterface_QueryInterface$` | `void *` | `Method` | `Pdb` | No (PDB) |
| `ClearReferenceFields$` | `void` | `Method` | `Pdb` | No (PDB) |
| `Create$` | `class CFlat::SmartPtr<class Content::ContentNodeManager>` | `Method` | `Pdb` | No (PDB) |
| `Delete$` | `void` | `Method` | `Pdb` | No (PDB) |
| `Dispose` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoPerNodeWork` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoRecalcPreTranslationMask` | `void` | `Method` | `Pdb` | No (PDB) |
| `FindWorkAll` | `void` | `Method` | `Pdb` | No (PDB) |
| `FromCurrentThread` | `class CFlat::SmartPtr<class Content::ContentNodeManager>` | `Method` | `Pdb` | No (PDB) |
| `Init$` | `void` | `Method` | `Pdb` | No (PDB) |
| `InvalidatePreTranslationList` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifyTreeChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnNodeChangedPreTranslation` | `void` | `Method` | `Pdb` | No (PDB) |
| `PreTranslateMessage` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ScheduleWork` | `void` | `Method` | `Pdb` | No (PDB) |
