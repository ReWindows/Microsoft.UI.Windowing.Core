#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Windowing.Core.dll by Windissect. 5 member(s).
class CTitleBarResourceProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppNameFontForScale@CTitleBarResourceProvider@@QEAAJNPEAPEAVTitleBarFontResource@@@Z
    long GetAppNameFontForScale(double, TitleBarFontResource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorizedBitmap@CTitleBarResourceProvider@@QEAAPEAUHBITMAP__@@W4TITLE_BAR_BITMAP_TYPE@@_NKW4DEVICE_SCALE_FACTOR@@1@Z
    HBITMAP__* GetColorizedBitmap(int, bool, unsigned long, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTitleBarResourceProvider@@UEAA@XZ
    virtual ~CTitleBarResourceProvider();
};
