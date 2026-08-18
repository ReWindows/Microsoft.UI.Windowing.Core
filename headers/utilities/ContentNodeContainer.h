#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 12 member(s).
namespace Content {
class ContentNodeContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ContentNodeContainer@Content@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@ContentNodeContainer@Content@@UEAAXXZ
    virtual void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRoot$FastReturn$@ContentNodeContainer@Content@@QEAAPEAV12@XZ
    WindissectOpaque * FindRoot$FastReturn$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWorkNode@ContentNodeContainer@Content@@QEAA?AV?$SmartPtr@VContentNode@Content@@@CFlat@@W4WorkType@2@W4TreeWalkOrder@2@@Z
    WindissectOpaque FindWorkNode(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitContextStatics@ContentNodeContainer@Content@@SAXXZ
    static void InitContextStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBreadCrumbsAtRoot@ContentNodeContainer@Content@@UEAAXG@Z
    virtual void NotifyBreadCrumbsAtRoot(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@ContentNodeContainer@Content@@UEAA_N_NU?$Ref@UIntPtr@System@@@CFlat@@@Z
    virtual bool OnFinalRelease(bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitialExport@ContentNodeContainer@Content@@UEAAXXZ
    virtual void OnInitialExport();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirty@ContentNodeContainer@Content@@QEAA_NW4WorkType@2@_N@Z
    bool SetDirty(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferFrom@ContentNodeContainer@Content@@QEAA_NPEAV12@@Z
    bool TransferFrom(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentNodeContainer@Content@@QEAA@XZ
    ~ContentNodeContainer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@ContentNodeContainer@Content@@IEAAXXZ
    void Init$();
};
} // namespace Content
