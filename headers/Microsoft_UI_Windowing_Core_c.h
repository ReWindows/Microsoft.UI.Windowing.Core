// Flat C exports observed in Microsoft.UI.Windowing.Core.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef MICROSOFT_UI_WINDOWING_CORE_C_H
#define MICROSOFT_UI_WINDOWING_CORE_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: ContentNodeManagerCreate (ABI unverified)
// Export: CreateFeatureTypeBuilder (ABI unverified)
// Export: CreateMessageFilterBuilder (ABI unverified)
// Export: DetachWindowFeature (ABI unverified)
// Export: GetFeatureInstanceData (ABI unverified)
// Export: GetFeatureStyles (ABI unverified)
// Export: SetFeatureInstanceData (ABI unverified)
// Export: SetFeatureStyles (ABI unverified)
// Export: AddMessageFilterToFilter (ABI unverified)
// Export: AddMessageListToFilter (ABI unverified)
// Export: AddMessageNameToFilter (ABI unverified)
// Export: AddMessageRangeToFilter (ABI unverified)
// Export: AddMessageToFilter (ABI unverified)
// Export: AttachWindowFeature (ABI unverified)
// Export: ContentPreTranslateMessage (ABI unverified)
// Export: CreateFeatureWindow (ABI unverified)
// Export: CreateMessageFilter (ABI unverified)
// Export: DefFeatureProc (ABI unverified)
// Export: DestroyMessageFilter (ABI unverified)
// Export: GetFeatureTypeData (ABI unverified)
// Export: GetWindowFeature (ABI unverified)
// Export: RegisterFeatureWindowClass (ABI unverified)
// Export: RegisterWindowFeature (ABI unverified)
// Export: UnregisterWindowFeature (ABI unverified)
// Export: DllGetActivationFactory (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // MICROSOFT_UI_WINDOWING_CORE_C_H
