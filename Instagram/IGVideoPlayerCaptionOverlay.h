//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoPlayerCaptionOverlay_h
#define IGVideoPlayerCaptionOverlay_h
@import Foundation;

#include "IGVideoPlayerOverlay.h"
#include "IGScopedListener-Protocol.h"

@class IGVideoCaptionController, IGVideoCaptionCoordinator, IGVideoCaptionView, NSNumber, NSString;
@protocol IGVideoPlayerCaptionOverlayDelegate;

@interface IGVideoPlayerCaptionOverlay : IGVideoPlayerOverlay<IGScopedListener> {
  /* instance variables */
  IGVideoCaptionView *_captionView;
  IGVideoCaptionController *_captionController;
  IGVideoCaptionCoordinator *_captionCoordinator;
  NSString *_adVideoPK;
  BOOL _increaseBottomMargin;
  NSNumber *_customSideMargin;
}

@property (weak, nonatomic) NSObject<IGVideoPlayerCaptionOverlayDelegate> *delegate;
@property (retain, nonatomic) NSString *adId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredFrameInsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect leftToolbarItemsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame rightToolbarItemsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutOverlayViews;
- (void)overlayWasAddedToContext:(id)context;
- (void)overlayWillBeRemovedFromContext:(id)context;
- (void)overlayStatusAdapterDidUpdatePlaybackEligibility:(id)eligibility;
- (void)overlayStatusAdapterDidLoadVideo:(id)video;
- (void)overlayStatusAdapter:(id)adapter didToggleAudioStatusWithReason:(long long)reason;
- (void)overlayStatusAdapterDidUpdatePlaybackProgress:(id)progress;
- (void)overlayStatusAdapterDidPlayThroughToCompletion:(id)completion;
- (void)overlayStatusAdapterDidStopVideo:(id)video withMediaViewReference:(id)reference;
- (void)captionCoordinator:(id)coordinator didUpdateCaptionString:(id)string;
- (void)captionCoordinator:(id)coordinator didTapCaptionView:(id)view whileViewingTranslatedCaptions:(BOOL)captions;
- (void)captionCoordinatorDidChangeCaptionsSetting:(id)setting;
- (void)captionCoordinatorDidHideAllCaptionsFromContextMenu:(id)menu whileViewingTranslatedCaptions:(BOOL)captions;
- (void)captionCoordinatorDidTurnOffAutoTranslationsFromContextMenu:(id)menu whileViewingTranslatedCaptions:(BOOL)captions;
- (void)captionCoordinatorDidTurnOnAutoTranslationsFromContextMenu:(id)menu whileViewingTranslatedCaptions:(BOOL)captions;
- (id)videoCaptionView;
- (void)didChangeViewerCaptionsSettings:(struct { BOOL x0; BOOL x1; })settings didUpdateTranslationsEnabled:(BOOL)enabled;
- (void)didRemoveCaptionsForVideo:(id)video;
- (void)captionController:(id)controller didUpdateCaptionString:(id)string;
@end

#endif /* IGVideoPlayerCaptionOverlay_h */
