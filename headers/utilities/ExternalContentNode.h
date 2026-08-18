#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 9 member(s).
namespace Content {
class ExternalContentNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ExternalContentNode@Content@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ExternalContentNode@Content@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPreTranslate@ExternalContentNode@Content@@UEAA_NPEAUMsgStruct@Core@@W4MessageModifiers@4@W4PreTranslatePass@4@@Z
    virtual bool DoPreTranslate(WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@ExternalContentNode@Content@@UEAAXW4WorkType@2@@Z
    virtual void DoWork(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMatchedAccelerator@ExternalContentNode@Content@@UEAA_NPEAUMsgStruct@Core@@W4MessageModifiers@4@G@Z
    virtual bool OnMatchedAccelerator(WindissectOpaque *, int, unsigned short);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@ExternalContentNode@Content@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(WindissectOpaque *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@ExternalContentNode@Content@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@ExternalContentNode@Content@@IEAAXPEAVContentNodeManager@2@PEAVContentNodeContainer@2@W4ContentNodeProc@Api@@UIntPtr@System@@@Z
    void Init$(WindissectOpaque *, WindissectOpaque *, int, ::System::IntPtr);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Api_IExportContentNode_ConfigurePreTranslation$@ExternalContentNode@Content@@AEAAXW4MessageFilterHandle@Api@@@Z
    void Api_IExportContentNode_ConfigurePreTranslation$(int);
};
} // namespace Content
