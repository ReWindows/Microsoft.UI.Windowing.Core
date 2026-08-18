#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 3 member(s).
namespace Core {
class NamedApiObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitContextStatics@NamedApiObject@Core@@SAXXZ
    static void InitContextStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterApiObject@NamedApiObject@Core@@UEAAXXZ
    virtual void UnregisterApiObject();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@NamedApiObject@Core@@IEAAXPEAVString@System@@@Z
    void Init$(::System::String *);
};
} // namespace Core
