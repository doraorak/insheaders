//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGModernFeedVideoCellType_Protocol_h
#define IGModernFeedVideoCellType_Protocol_h
@import Foundation;

@protocol IGModernFeedVideoCellType 

@property (nonatomic, weak) NSObject<IGModernFeedVideoCellDelegate> *delegate;
@property (nonatomic, readonly) IGSundialStickerOverlayView *stickerOverlayView;
@property (nonatomic, readonly) NSDictionary *videoBugReportMetadata;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly) IGVideoViewPlaybackStatus *playbackStatus;
@property (nonatomic, readonly) BOOL playbackFailedToStart;
@property (nonatomic, readonly) BOOL isShowingPreviewOverlay;
@property (nonatomic, readonly) NSDictionary *loggingData;
@property (nonatomic, readonly) UIView *audioIndicatorView;
@property (nonatomic, readonly) UIView *overlayView;
@property (nonatomic, readonly) long long coverImageLoadStatus;
@property (nonatomic) BOOL isZooming;
@property (nonatomic, readonly) IGMediaIndicatorConfigurations *indicatorConfigurations;
@property (nonatomic, weak) NSObject<IGFeedItemCTAExtensionDelegate> *ctaExtensionDelegate;
@property (nonatomic, readonly) UIView *ctaExtensionView;
@property (nonatomic) BOOL isTouchFromCarousel;

/* instance methods */
- (void)addVideoListener:(id)listener;
- (void)removeVideoListener:(id)listener;
- (void)setupViewabilityWith:(id)with;
- (void)addViper2ndChannelListener:(id)listener;
- (void)retryStartPlayback;
- (void)currentFrameWithCompletion:(id /* block */)completion;
- (void)setAutoTranslateLanguage:(id)language autoTranslateEnabled:(BOOL)enabled;
- (id)availableAutoTranslateLanguages;
- (id)selectedAutoTranslateLanguage;
- (void)setVideoIndicatorEnabled:(BOOL)enabled;
- (void)updateOverlayWith:(id)with indicatorConfigurations:(id)configurations attributionConfiguration:(id)configuration;
- (id)ejectVideoAsView;
- (id)continuationContract;
- (void)evaluateContinuationContract:(id)contract;
@end

#endif /* IGModernFeedVideoCellType_Protocol_h */