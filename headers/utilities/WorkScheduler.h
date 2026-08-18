#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 7 member(s).
namespace Content {
class WorkScheduler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@WorkScheduler@Content@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@WorkScheduler@Content@@SA?AV?$SmartPtr@VWorkScheduler@Content@@@CFlat@@PEAVContentNodeManager@2@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@WorkScheduler@Content@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@WorkScheduler@Content@@UEAAXXZ
    virtual void Dispose();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispatch@WorkScheduler@Content@@AEAAXU?$Ref@_N@CFlat@@@Z
    void Dispatch(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoOneCycleOfWork@WorkScheduler@Content@@AEAAXXZ
    void DoOneCycleOfWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSchedule@WorkScheduler@Content@@AEAAXXZ
    void UpdateSchedule();
};
} // namespace Content
