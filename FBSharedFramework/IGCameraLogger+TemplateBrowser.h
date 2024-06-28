//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraLogger_TemplateBrowser_h
#define IGCameraLogger_TemplateBrowser_h
@import Foundation;

@interface IGCameraLogger (TemplateBrowser)
/* instance methods */
- (void)logTemplateBrowserReelImpression:(id)impression extras:(id)extras module:(id)module;
- (void)logUseTemplateButtonTappedWithMediaId:(id)id module:(id)module entrypoint:(long long)entrypoint templateBrowserViewVariant:(long long)variant templateBrowserSection:(id)section entity:(long long)entity;
- (void)logTemplateMediaTapWithMediaId:(id)id module:(id)module entrypoint:(long long)entrypoint templateBrowserViewVariant:(long long)variant templateBrowserSection:(id)section;
- (void)logUserSwitchedToTemplateWithMediaId:(id)id module:(id)module entrypoint:(long long)entrypoint templateBrowserViewVariant:(long long)variant prefilledMediaCount:(long long)count templateBrowserSection:(id)section;
- (void)logTemplateBrowserOpenWithEntrypoint:(long long)entrypoint module:(id)module;
- (void)logTemplateBrowserEmptyState:(id)state module:(id)module sectionCount:(long long)count isEmptyState:(BOOL)state;
@end

#endif /* IGCameraLogger_TemplateBrowser_h */