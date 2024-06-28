//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC13IGPostPreview27IGPostPreviewViewController_IGPostPreview_h
#define _TtC13IGPostPreview27IGPostPreviewViewController_IGPostPreview_h
@import Foundation;

@interface _TtC13IGPostPreview27IGPostPreviewViewController (IGPostPreview) <IGProfileFeedViewControllerDelegate>
/* instance methods */
- (void)profileFeedViewController:(id)controller didTapGridPost:(id)post;
- (void)profileFeedViewController:(id)controller didCommitPreviewFromGridPost:(id)post;
- (void)profileFeedViewController:(id)controller showOpenCarouselPendingPostToast:(id)toast;
- (void)profileFeedViewControllerDidChangeFeedObjects:(id)objects;
- (void)profileFeedViewLoadFinished;
- (double)profileTabViewControllerAdditionalTopContentInset:(id)inset;
- (double)profileTabViewControllerAdditionalTopObstructingContentInset:(id)inset;
- (BOOL)profileTabViewControllerIsDisplayedInPopover:(id)popover;
- (BOOL)profileTabViewControllerShouldReloadContentOnPullToRefresh;
- (void)profileTabViewControllerNeedsContentOffsetUpdate:(id)update;
- (void)profileTabViewControllerDidInitiatePullToRefresh:(id)refresh;
@end

#endif /* _TtC13IGPostPreview27IGPostPreviewViewController_IGPostPreview_h */
