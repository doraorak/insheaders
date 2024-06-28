//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerProtocol_Protocol_h
#define IGSundialViewerProtocol_Protocol_h
@import Foundation;

@protocol IGSundialViewerProtocol <NSObject>
/* instance methods */
- (void)sundialViewerViewController:(id)controller didUpdateActiveVideo:(id)video;
- (void)sundialViewerViewControllerDidEndShowingActiveVideo:(id)video;
- (void)sundialViewerViewControllerWillDismiss:(id)dismiss lastActiveOrganicVideo:(id)video;
- (void)sundialViewerViewControllerWillZoomToDismiss:(id)dismiss lastActiveOrganicVideo:(id)video;
- (void)sundialViewerViewControllerWillZoomToDismiss:(id)dismiss lastActiveOrganicVideo:(id)video;
- (void)sundialViewerViewControllerDidDismiss:(id)dismiss;
- (void)sundialViewerViewController:(id)controller willDismissWithTimeSpent:(double)spent;
- (void)sundialViewerViewControllerDidShareToDirect;
- (void)sundialViewerViewControllerDidShareToStory;
- (void)sundialViewerViewControllerDidSavePost;
- (void)sundialViewerViewControllerDidUpdateLongPressStatus;
- (void)sundialViewerViewControllerWillSetFooterAlpha:(double)alpha;
- (void)sundialViewerViewController:(id)controller didUpdateCarouselPostItemTo:(id)to;
@end

#endif /* IGSundialViewerProtocol_Protocol_h */