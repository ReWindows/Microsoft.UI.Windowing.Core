#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 7 member(s).
namespace Core {
class ThreadInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ThreadInfo@Core@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ThreadInfo@Core@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@ThreadInfo@Core@@UEAAXXZ
    virtual void Dispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentNodeManager@ThreadInfo@Core@@QEAA?AV?$SmartPtr@VContentNodeManager@Content@@@CFlat@@W4AllowMissing@2@W4Win32Error@2@@Z
    WindissectOpaque GetContentNodeManager(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFeatureCallManager@ThreadInfo@Core@@QEAA?AV?$SmartPtr@VFeatureCallManager@Windowing@@@CFlat@@W4AllowMissing@2@W4Win32Error@2@@Z
    WindissectOpaque GetFeatureCallManager(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThreadInfo@Core@@QEAA@XZ
    ~ThreadInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ThreadInfo@Core@@CA?AV?$SmartPtr@VThreadInfo@Core@@@CFlat@@XZ
    static WindissectOpaque Create$();
};
} // namespace Core
