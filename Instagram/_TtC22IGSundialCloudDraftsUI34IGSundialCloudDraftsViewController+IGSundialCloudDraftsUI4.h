//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGSundialCloudDraftsUI34IGSundialCloudDraftsViewController_IGSundialCloudDraftsUI4_h
#define _TtC22IGSundialCloudDraftsUI34IGSundialCloudDraftsViewController_IGSundialCloudDraftsUI4_h
@import Foundation;

@interface _TtC22IGSundialCloudDraftsUI34IGSundialCloudDraftsViewController (IGSundialCloudDraftsUI4) <IGPanavisionDraftStoreEventListener>
/* instance methods */
- (void)panavisionDraftStoreDidFinishLoadingSavedDrafts:(id)drafts;
- (void)panavisionDraftStore:(id)store didSaveDraft:(id)draft;
- (void)panavisionDraftStore:(id)store didFailToSaveDraftWithError:(id)error;
- (void)panavisionDraftStore:(id)store didUpdateNumberOfSavedDrafts:(long long)drafts;
- (void)panavisionDraftStoreClearPreviewImageCache:(id)cache;
@end

#endif /* _TtC22IGSundialCloudDraftsUI34IGSundialCloudDraftsViewController_IGSundialCloudDraftsUI4_h */
