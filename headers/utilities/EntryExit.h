#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 12 member(s).
namespace CFlat {
class EntryExit {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCachedComImportAdapter@EntryExit@CFlat@@SAXPEAX0PEAVComImportAdapter@2@@Z
    static void AddCachedComImportAdapter(void *, void *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureHostData@EntryExit@CFlat@@SAPEAX_N@Z
    static void * CaptureHostData(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostDataAssociatedWithCurrentThread@EntryExit@CFlat@@SAPEAXXZ
    static void * GetHostDataAssociatedWithCurrentThread();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddCachedComImportAdapter@EntryExit@CFlat@@SA_NPEAX0U?$Ref@V?$SmartPtr@VComImportAdapter@CFlat@@@CFlat@@@2@@Z
    static bool GetOrAddCachedComImportAdapter(void *, void *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginCallToCFlat@EntryExit@CFlat@@SAJPEAX0H@Z
    static long OnBeginCallToCFlat(void *, void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginCallToNative@EntryExit@CFlat@@SAXPEAX@Z
    static void OnBeginCallToNative(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyExportAdapterContainer@EntryExit@CFlat@@SAXPEAXPEAVComExportAdapterContainer@2@@Z
    static void OnDestroyExportAdapterContainer(void *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndCallToCFlat@EntryExit@CFlat@@SAXPEAX@Z
    static void OnEndCallToCFlat(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndCallToNative@EntryExit@CFlat@@SAXPEAX0@Z
    static void OnEndCallToNative(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCachedComImportAdapter@EntryExit@CFlat@@SAXPEAX0PEAVComImportAdapter@2@@Z
    static void RemoveCachedComImportAdapter(void *, void *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetCachedComImportAdapter@EntryExit@CFlat@@SA_NPEAX0U?$Ref@V?$SmartPtr@VComImportAdapter@CFlat@@@CFlat@@@2@@Z
    static bool TryGetCachedComImportAdapter(void *, void *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCall@EntryExit@CFlat@@SAPEAXPEAX0H@Z
    static void * ValidateCall(void *, void *, int);
};
} // namespace CFlat
