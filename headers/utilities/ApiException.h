#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 4 member(s).
namespace Core {
class ApiException {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ApiException@Core@@SA?AV?$SmartPtr@VApiException@Core@@@CFlat@@JPEAVString@System@@@Z
    static WindissectOpaque Create$(long, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ApiException@Core@@SA?AV?$SmartPtr@VApiException@Core@@@CFlat@@W4Win32Error@2@@Z
    static WindissectOpaque Create$(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ApiException@Core@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowVirtual$@ApiException@Core@@UEAAXXZ
    virtual void ThrowVirtual$();
};
} // namespace Core
