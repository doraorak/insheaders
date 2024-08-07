//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialFeedViewControllerIdentifying_Protocol_h
#define IGSundialFeedViewControllerIdentifying_Protocol_h
@import Foundation;

@protocol IGSundialFeedViewControllerIdentifying <NSObject, IGScrollableViewControllerProtocol>

@property (weak, nonatomic) NSObject<IGSundialViewerProtocol> *delegate;
@property (weak, nonatomic) NSObject<IGSundialViewerInteractionDelegate> *interactionDelegate;
@property (nonatomic) BOOL tabBarHidden;
@property (nonatomic) BOOL autoAdvanceToNextItem;
@property (nonatomic) BOOL swipeToDismissAtFeedEnd;
@property (readonly, nonatomic) unsigned long long presentationContext;
@property (readonly, nonatomic) UIScrollView *scrollView;

/* instance methods */
- (void)animateCurrentVideoControllerVideoCellControlsOverlayVisible:(BOOL)visible;
- (id)currentViewCell;
- (id)currentPlaybackMedia;
@end

#endif /* IGSundialFeedViewControllerIdentifying_Protocol_h */
