#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 9 member(s).
namespace Content {
class TreeNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTreeNodeAfterSibling@TreeNode@Content@@QEAAXPEAV12@0@Z
    void InsertTreeNodeAfterSibling(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTreeChange@TreeNode@Content@@UEAAXPEAV12@W4TreeChange@2@@Z
    virtual void NotifyTreeChange(WindissectOpaque *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcJoinLeaveNotifications@TreeNode@Content@@CAXPEAV12@0U?$Ref@V?$SmartPtr@VTreeNode@Content@@@CFlat@@@CFlat@@1@Z
    static void CalcJoinLeaveNotifications(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeAllParentLinks@TreeNode@Content@@CAXPEAV12@00@Z
    static void ChangeAllParentLinks(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeParentLink@TreeNode@Content@@AEAAXPEAV12@@Z
    void ChangeParentLink(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeParentLinkWithPreResolvedJoinLeave@TreeNode@Content@@AEAAXPEAV12@00@Z
    void ChangeParentLinkWithPreResolvedJoinLeave(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropCrumbsAbove@TreeNode@Content@@CAXPEAV12@I@Z
    static void DropCrumbsAbove(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LinkChildrenIntoSiblingsAt@TreeNode@Content@@AEAAXPEAV12@00@Z
    void LinkChildrenIntoSiblingsAt(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlinkChildFromSiblings@TreeNode@Content@@AEAAXPEAV12@@Z
    void UnlinkChildFromSiblings(WindissectOpaque *);
};
} // namespace Content
