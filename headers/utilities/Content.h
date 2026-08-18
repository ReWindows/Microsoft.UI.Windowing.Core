#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 2 member(s).
class Content {
public:
    class ContentNode;
    class ContentNodeContainer;
    class ContentNodeManager;
    class DisconnectedContentRoot;
    class ExternalContentNode;
    class IRecyclable;
    class TreeNode;
    class WindowNode;
    class WorkHandler;
    class WorkScheduler;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchCancelCallback@Content@@YAJPEAX@Z
    long DispatchCancelCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchEntryCallback@Content@@YAJPEAXPEA_N@Z
    long DispatchEntryCallback(void *, bool *);
};
