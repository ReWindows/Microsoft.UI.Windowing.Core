#pragma once
#include "../windissect_forwards.h"

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
