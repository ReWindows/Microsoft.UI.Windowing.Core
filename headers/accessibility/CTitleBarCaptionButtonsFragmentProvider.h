#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 13 member(s).
class CTitleBarCaptionButtonsFragmentProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedFragmentRoots@CTitleBarCaptionButtonsFragmentProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@CTitleBarCaptionButtonsFragmentProvider@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CTitleBarCaptionButtonsFragmentProvider@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@CTitleBarCaptionButtonsFragmentProvider@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CTitleBarCaptionButtonsFragmentProvider@@UEAAJXZ
    virtual long Invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CTitleBarCaptionButtonsFragmentProvider@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CTitleBarCaptionButtonsFragmentProvider@@UEAAJXZ
    virtual long SetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangle@CTitleBarCaptionButtonsFragmentProvider@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FragmentRoot@CTitleBarCaptionButtonsFragmentProvider@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@CTitleBarCaptionButtonsFragmentProvider@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@CTitleBarCaptionButtonsFragmentProvider@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
};
