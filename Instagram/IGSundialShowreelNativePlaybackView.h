//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialShowreelNativePlaybackView_h
#define IGSundialShowreelNativePlaybackView_h
@import Foundation;

#include "UIView.h"
#include "IGAudioStatusChangeListener-Protocol.h"
#include "IGCreativeTransformationsRendering-Protocol.h"
#include "IGCreativeTransformationsRenderingDelegate-Protocol.h"
#include "IGImageViewDelegate-Protocol.h"
#include "IGSundialAdsShowreelBloksView.h"
#include "IGSundialViewerControlsOverlayLayoutDelegate-Protocol.h"
#include "IGUnifiedVideoFeedItem-Protocol.h"
#include "ShowreelBloksInteractivityListener-Protocol.h"

@class FBTimer, IGImageView, IGSponsoredSupportConfiguration, IGUserSession, NSString, NSURL, UIView;
@protocol IGSundialShowreelNativePlaybackViewDelegate;

@interface IGSundialShowreelNativePlaybackView : UIView<IGImageViewDelegate, IGCreativeTransformationsRenderingDelegate, IGAudioStatusChangeListener, IGSundialViewerControlsOverlayLayoutDelegate> {
  /* instance variables */
  NSObject<IGUnifiedVideoFeedItem> *_unitItem;
  IGUserSession *_userSession;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
  UIView *_containerView;
  NSObject<IGCreativeTransformationsRendering> *_videoPlayer;
  IGImageView *_previewImageView;
  IGSundialAdsShowreelBloksView *_bloksEmbeddedVideoView;
  struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaFrameTransformed; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform; double cornerRadius; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleContentFrame; } _mediaLayout;
  BOOL _isEndSceneEnabled;
  NSObject<ShowreelBloksInteractivityListener> *_interactivityListener;
  FBTimer *_timer;
  long long _currentLoopCount;
  double _lastProgress;
}

@property (readonly, nonatomic) BOOL isPlaying;
@property (retain, nonatomic) NSURL *previewImageURL;
@property (readonly, nonatomic) UIView *mediaContainerView;
@property (readonly, nonatomic) BOOL audioEnabled;
@property (weak, nonatomic) NSObject<IGSundialShowreelNativePlaybackViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)deallocTimer;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAudioEnabled:(BOOL)enabled forReason:(long long)reason;
- (void)playWithReason:(long long)reason;
- (void)stopWithReason:(long long)reason;
- (void)pauseWithReason:(long long)reason;
- (void)prepareForPlayback;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
- (void)renderingController:(id)controller didTapTouchableRegionAtPoint:(struct CGPoint { double x0; double x1; })point type:(id)type value:(id)value previouslyTappedValue:(id)value gestureRecognizer:(id)recognizer;
- (void)renderingController:(id)controller didTapNonTouchableRegion:(id)region;
- (void)renderingController:(id)controller didTapToOpenMultiDocumentWithName:(id)name closeMultiDocumentBlock:(id /* block */)block;
- (void)renderingControllerShouldFallbackRendering:(id)rendering;
- (void)renderingController:(id)controller shouldFallbackRendering:(BOOL *)rendering;
- (void)renderingControllerIsReadyToPlayback:(id)playback;
- (void)renderingControllerHasLoopedIn:(id)in;
- (void)renderingControllerDidStartPlayback:(id)playback;
- (void)renderingControllerDidFinishPlayback:(id)playback;
- (void)renderingController:(id)controller didLongPressTouchableRegionAtPoint:(struct CGPoint { double x0; double x1; })point type:(id)type value:(id)value gestureRecognizer:(id)recognizer gestureState:(long long)state;
- (void)renderingController:(id)controller didLongPressNonTouchableRegion:(id)region gestureState:(long long)state;
- (void)audioStatusDidChangeIsAudioEnabled:(BOOL)enabled forReason:(long long)reason;
- (void)overlayDidLayoutWithMediaLayout:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x2; double x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; })layout;
- (void)overlayDidLayoutWithProgressIndicatorDesiredMinY:(double)y shouldLayout:(BOOL)layout frameMode:(long long)mode;
- (void)overlayDidLayoutWithMinTopYForBottomAFI:(double)afi shouldLayout:(BOOL)layout frameMode:(long long)mode;
- (BOOL)isAudioEnabled;
@end

#endif /* IGSundialShowreelNativePlaybackView_h */
