//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoPlayerOverlayControllerType_Protocol_h
#define IGVideoPlayerOverlayControllerType_Protocol_h
@import Foundation;

@protocol IGVideoPlayerOverlayControllerType <NSObject>

@property (readonly, nonatomic) UIView *overlayView;
@property (weak, nonatomic) NSObject<IGVideoPlayerOverlayControllerDelegate> *delegate;

/* instance methods */
- (void)configureOverlaysWithOptions:(id)options video:(id)video media:(id)media isSponsored:(BOOL)sponsored userSession:(id)session indicatorConfigurations:(id)configurations attributionConfiguration:(id)configuration loggingConfig:(id)config sponsoredInfoProvider:(id)provider;
- (void)prepareForReuse;
- (void)setOverlayAdapterDelegate:(id)delegate;
@end

#endif /* IGVideoPlayerOverlayControllerType_Protocol_h */