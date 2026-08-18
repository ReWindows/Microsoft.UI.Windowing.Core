#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 7 member(s).
namespace Content {
class ContentNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ContentNode@Content@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@ContentNode@Content@@UEAAXXZ
    virtual void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentUnder@ContentNode@Content@@QEAAXPEAVContentNodeContainer@2@@Z
    void ReparentUnder(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevalidateAndDoPreTranslate@ContentNode@Content@@SA_NPEAV12@U?$In@UMessageDigest@Filters@@@CFlat@@PEAUMsgStruct@Core@@W4MessageModifiers@6@W4PreTranslatePass@6@@Z
    static bool RevalidateAndDoPreTranslate(WindissectOpaque *, WindissectOpaque, WindissectOpaque *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredPreTranslationFilterUsingCopyData@ContentNode@Content@@QEAAXPEAURegisteredMessage@Filters@@UMessageDigest@4@H@Z
    void SetDesiredPreTranslationFilterUsingCopyData(::Filters::RegisteredMessage *, ::Filters::MessageDigest, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentContainer$FastReturn$@ContentNode@Content@@QEAAPEAVContentNodeContainer@2@XZ
    WindissectOpaque * get_ParentContainer$FastReturn$();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEffectivePreTranslationMask@ContentNode@Content@@AEAAXXZ
    void UpdateEffectivePreTranslationMask();
};
} // namespace Content
