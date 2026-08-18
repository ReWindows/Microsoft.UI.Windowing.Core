#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 9 member(s).
namespace Filters {
class MessageFilter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFilter@MessageFilter@Filters@@QEAAXPEAV12@@Z
    void AddFilter(::Filters::MessageFilter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessage@MessageFilter@Filters@@QEAAXW4WindowMessage@Core@@@Z
    void AddMessage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddName@MessageFilter@Filters@@QEAAXURegisteredMessage@2@@Z
    void AddName(::Filters::RegisteredMessage);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@MessageFilter@Filters@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyMessageFilterData@MessageFilter@Filters@@QEAAXPEAUMessageDigest@2@PEAURegisteredMessage@2@H@Z
    void CopyMessageFilterData(::Filters::MessageDigest *, ::Filters::RegisteredMessage *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@MessageFilter@Filters@@SA?AV?$SmartPtr@VMessageFilter@Filters@@@CFlat@@XZ
    static WindissectOpaque Create$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@MessageFilter@Filters@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromApiHandle@MessageFilter@Filters@@SA?AV?$SmartPtr@VMessageFilter@Filters@@@CFlat@@W4MessageFilterHandle@Api@@@Z
    static WindissectOpaque FromApiHandle(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSimpleRange@MessageFilter@Filters@@AEAAXW4WindowMessage@Core@@0@Z
    void AddSimpleRange(int, int);
};
} // namespace Filters
