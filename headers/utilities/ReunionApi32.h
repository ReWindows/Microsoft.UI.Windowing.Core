#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 14 member(s).
namespace Api {
class ReunionApi32 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessageFilterToFilterUnderGlobalContextLock@ReunionApi32@Api@@SA_NW4MessageFilterHandle@2@0@Z
    static bool AddMessageFilterToFilterUnderGlobalContextLock(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessageListToFilterUnderGlobalContextLock@ReunionApi32@Api@@SA_NW4MessageFilterHandle@2@PEAW4WindowMessage@Core@@I@Z
    static bool AddMessageListToFilterUnderGlobalContextLock(int, int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessageNameToFilterUnderGlobalContextLock@ReunionApi32@Api@@SA?AW4WindowMessage@Core@@W4MessageFilterHandle@2@UIntPtr@System@@I@Z
    static int AddMessageNameToFilterUnderGlobalContextLock(int, ::System::IntPtr, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessageRangeToFilterUnderGlobalContextLock@ReunionApi32@Api@@SA_NW4MessageFilterHandle@2@W4WindowMessage@Core@@1@Z
    static bool AddMessageRangeToFilterUnderGlobalContextLock(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachWindowFeatureImpl@ReunionApi32@Api@@SA?AW4FeatureHandle@2@UFeatureTypeData@Windowing@@W4WindowHandle@Core@@UIntPtr@System@@@Z
    static int AttachWindowFeatureImpl(WindissectOpaque, int, ::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentNodeManagerCreate@ReunionApi32@Api@@SAJU?$Ref@U?$InterfacePtr@VIExportContentNodeManager@Api@@@CFlat@@@CFlat@@@Z
    static long ContentNodeManagerCreate(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentPreTranslateMessage_QuickFilter_NoContextWrapper@ReunionApi32@Api@@SA?AW4WBool@Core@@PEAUMsgStruct@4@@Z
    static int ContentPreTranslateMessage_QuickFilter_NoContextWrapper(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFeatureTypeBuilder@ReunionApi32@Api@@SAJU?$Ref@U?$InterfacePtr@VIExportFeatureTypeBuilder@Api@@@CFlat@@@CFlat@@@Z
    static long CreateFeatureTypeBuilder(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFeatureWindowImpl@ReunionApi32@Api@@SA?AW4WindowHandle@Core@@UFeatureTypeData@Windowing@@UIntPtr@System@@PEAUCreateStructW@4@PEAW4FeatureHandle@2@@Z
    static int CreateFeatureWindowImpl(WindissectOpaque, ::System::IntPtr, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMessageFilterBuilder@ReunionApi32@Api@@SAJU?$Ref@U?$InterfacePtr@VIExportMessageFilterBuilder@Api@@@CFlat@@@CFlat@@@Z
    static long CreateMessageFilterBuilder(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyMessageFilterUnderGlobalContextLock@ReunionApi32@Api@@SA_NW4MessageFilterHandle@2@@Z
    static bool DestroyMessageFilterUnderGlobalContextLock(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachWindowFeature@ReunionApi32@Api@@SA_NW4FeatureHandle@2@UIntPtr@System@@@Z
    static bool DetachWindowFeature(int, ::System::IntPtr);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowFeatureImpl@ReunionApi32@Api@@SA?AW4FeatureHandle@2@W4WindowHandle@Core@@I@Z
    static int GetWindowFeatureImpl(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowFeatureUnderGlobalContextLock@ReunionApi32@Api@@SA?AW4FeatureTypeHandle@2@PEAUFeatureTypeInfo@2@@Z
    static int RegisterWindowFeatureUnderGlobalContextLock(::Api::FeatureTypeInfo *);
};
} // namespace Api
