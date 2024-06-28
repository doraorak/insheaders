//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGuideItemVideoCell_h
#define IGGuideItemVideoCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGGuideItemAttributionOverlay.h"
#include "IGModernFeedOverlayStatusAdapter.h"
#include "IGVideoPlayerOverlayAdapterDelegate-Protocol.h"
#include "IGVideoPlayerOverlayControllerType-Protocol.h"

@class IGVideoView, NSString;

@interface IGGuideItemVideoCell : UICollectionViewCell<IGVideoPlayerOverlayAdapterDelegate> {
  /* instance variables */
  IGVideoView *_videoView;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _edgeInsets;
  IGModernFeedOverlayStatusAdapter *_overlayStatusAdapter;
  NSObject<IGVideoPlayerOverlayControllerType> *_overlayController;
  BOOL _canPlayAudio;
  IGGuideItemAttributionOverlay *_attributionOverlay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)startPlayback;
- (void)pausePlayback;
- (void)stopPlayback;
- (void)preparePlayback;
- (void)setAudioEnabled:(BOOL)enabled withReason:(long long)reason;
- (void)videoPlayerOverlayAdapterDidTapAudioIndicator;
- (void)videoPlayerOverlayAdapterDidTapSubtitleView;
- (void)videoPlayerOverlayAdapterDidTapTagsIndicator:(id)indicator;
- (void)videoPlayerOverlayAdapterDidTapKeepWatchingButton;
- (void)videoPlayerOverlayAdapterDidTapReplayButton;
- (void)videoPlayerOverlayAdapterDidTapReshareButton;
- (void)videoPlayerOverlayAdapterDidTapFanClubDiscoverButton;
- (void)videoPlayerOverlayAdapterDidDisplayPreviewableOverlayWithSecondaryButtonType:(long long)type;
- (void)videoPlayerOverlayAdapterDidTapIGTVIndicator;
- (void)videoPlayerOverlayAdapterDidTapSundialIndicator;
- (void)videoPlayerOverlayAdapterDidTapSundialCloseFriendsIndicator;
- (void)videoPlayerOverlayAdapterDidUpdateAdsEndSceneDisplayStatus:(BOOL)status;
- (void)videoPlayerOverlayAdapterDidTapBackdrop;
- (void)videoPlayerOverlayAdapterDidTapInterestPivotWithLoggingDetail:(id)detail;
- (void)videoPlayerOverlayAdapterDidTapLinkedHighlightIndicator;
- (void)videoPlayerOverlayAdapterDidTapAddToPostIndicator;
- (void)videoPlayerOverlayAdapterDidTapLikeIndicator:(BOOL)indicator tapSource:(id)source containerModule:(id)module;
- (void)videoPlayerOverlayAdapterDidBeginScrubbing;
- (void)videoPlayerOverlayAdapterDidScrubToProgress:(double)progress;
- (void)videoPlayerOverlayAdapterDidRecognizeTapGesture:(id)gesture;
- (void)videoPlayerOverlayAdapterDidTapContentNote:(id)note presentationContext:(id)context;
- (void)videoPlayerOverlayAdapterDidTapContentNotesOverflowPreviewWithSeenNoteID:(id)id;
- (void)videoPlayerOverlayAdapterDidToggleContentNotesWithIsMinimized:(BOOL)minimized;
- (void)videoPlayerOverlayAdapterDidTapAddNoteMimicryButton;
- (void)videoPlayerOverlayAdapterDidTapContentNoteContextMenuWithAction:(long long)action contentNote:(id)note;
- (void)videoPlayerOverlayAdapterDidTapAttributionViewLikeButton:(BOOL)button tapSource:(id)source containerModule:(id)module;
- (void)videoPlayerOverlayAdapterShowProfilePageWithUrl:(id)url;
- (void)videoPlayerOverlayAdapterDidTapFloatingSocialContext:(id)context bubblePosition:(long long)position;
- (void)videoPlayerOverlayAdapterDidLongPressFloatingSocialContextWithAction:(unsigned long long)action floatingSocialContext:(id)context bubblePosition:(long long)position;
- (void)videoPlayerOverlayAdapterDidRegisterSocialContextViewImpressionWithModel:(id)model bubblePosition:(long long)position;
- (void)videoPlayerOverlayAdapterDidDragToDismissSocialContext:(id)context overlayViewModel:(id)model;
@end

#endif /* IGGuideItemVideoCell_h */
