# `global` :: `__FrameHandler3`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `Microsoft.UI.Windowing.Core.dll`. Total members: **14**.

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

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 14 member(s).
class __FrameHandler3 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CatchTryBlock@__FrameHandler3@@SAPEBU_s_TryBlockMapEntry@@PEBU_s_FuncInfo@@H@Z
    static _s_TryBlockMapEntry const * CatchTryBlock(_s_FuncInfo const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CxxCallCatchBlock@__FrameHandler3@@SAPEAXPEAU_EXCEPTION_RECORD@@@Z
    static void * CxxCallCatchBlock(_EXCEPTION_RECORD *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecutionInCatch@__FrameHandler3@@SA_NPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z
    static bool ExecutionInCatch(_xDISPATCHER_CONTEXT *, _s_FuncInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameUnwindToEmptyState@__FrameHandler3@@SAXPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z
    static void FrameUnwindToEmptyState(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameUnwindToState@__FrameHandler3@@SAXPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@H@Z
    static void FrameUnwindToState(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentState@__FrameHandler3@@SAHPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z
    static int GetCurrentState(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEstablisherFrame@__FrameHandler3@@SAPEA_KPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@0@Z
    static uint64_t * GetEstablisherFrame(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandlerSearchState@__FrameHandler3@@SAHPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z
    static int GetHandlerSearchState(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnwindTryBlock@__FrameHandler3@@SAHPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@@Z
    static int GetUnwindTryBlock(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@__FrameHandler3@@SAXPEA_KPEBU_s_FuncInfo@@H@Z
    static void SetState(uint64_t *, _s_FuncInfo const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnwindTryBlock@__FrameHandler3@@SAXPEA_KPEAU_xDISPATCHER_CONTEXT@@PEBU_s_FuncInfo@@H@Z
    static void SetUnwindTryBlock(uint64_t *, _xDISPATCHER_CONTEXT *, _s_FuncInfo const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StateFromControlPc@__FrameHandler3@@SAHPEBU_s_FuncInfo@@PEAU_xDISPATCHER_CONTEXT@@@Z
    static int StateFromControlPc(_s_FuncInfo const *, _xDISPATCHER_CONTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StateFromIp@__FrameHandler3@@SAHPEBU_s_FuncInfo@@PEAU_xDISPATCHER_CONTEXT@@_K@Z
    static int StateFromIp(_s_FuncInfo const *, _xDISPATCHER_CONTEXT *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnwindNestedFrames@__FrameHandler3@@SAXPEA_KPEAUEHExceptionRecord@@PEAU_CONTEXT@@0PEAXPEBU_s_FuncInfo@@HHPEBU_s_HandlerType@@PEAU_xDISPATCHER_CONTEXT@@E@Z
    static void UnwindNestedFrames(uint64_t *, EHExceptionRecord *, _CONTEXT *, uint64_t *, void *, _s_FuncInfo const *, int, int, _s_HandlerType const *, _xDISPATCHER_CONTEXT *, unsigned char);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `CatchTryBlock` | `struct _s_TryBlockMapEntry const *` | `Method` | `Pdb` | No (PDB) |
| `ExecutionInCatch` | `bool` | `Method` | `Pdb` | No (PDB) |
| `FrameUnwindToEmptyState` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetEstablisherFrame` | `uint64_t *` | `Accessor` | `Pdb` | No (PDB) |
| `UnwindNestedFrames` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetCurrentState` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetUnwindTryBlock` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetState` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetUnwindTryBlock` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `StateFromControlPc` | `int` | `Method` | `Pdb` | No (PDB) |
| `StateFromIp` | `int` | `Method` | `Pdb` | No (PDB) |
| `CxxCallCatchBlock` | `void *` | `Method` | `Pdb` | No (PDB) |
| `FrameUnwindToState` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetHandlerSearchState` | `int` | `Accessor` | `Pdb` | No (PDB) |
