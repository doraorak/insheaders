//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryInteractiveAdsEditViewController_h
#define IGStoryInteractiveAdsEditViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGStoryDataControllerStoryItemListener-Protocol.h"
#include "IGStoryFullscreenSectionLoggingContext.h"
#include "IGStoryInteractiveAdsUpdater.h"
#include "IGStoryPlayerMediaViewDelegate-Protocol.h"
#include "IGStoryStickerGestureControllerDataSource-Protocol.h"
#include "IGStoryStickerGestureControllerDelegate-Protocol.h"
#include "IGStoryStickerTrayViewControllerDelegate-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class IGMedia, IGStory, IGStoryStickerGestureController, IGTapButton, IGUserSession, NSString, UIView;
@protocol IGStoryItemType><IGUnitItemInformationProviding, UIView<IGCreationPostCaptureHeaderViewProtocol, UIView<IGStoryPlayerMediaViewType, UIViewController<IGStoryStickerEditingViewControllerProtocol;

@interface IGStoryInteractiveAdsEditViewController : IGViewController<IGStoryDataControllerStoryItemListener, IGStoryPlayerMediaViewDelegate, IGStoryStickerTrayViewControllerDelegate, IGStoryStickerGestureControllerDelegate, IGStoryStickerGestureControllerDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_sessionID;
  IGStoryFullscreenSectionLoggingContext *_sectionLoggingContext;
  UIView *_mediaContainerView;
  UIView<IGStoryPlayerMediaViewType> *_mediaView;
  UIView *_stickerContainerView;
  UIView *_controlView;
  UIView<IGCreationPostCaptureHeaderViewProtocol> *_headerView;
  IGTapButton *_exportButton;
  IGStoryStickerGestureController *_stickerGestureController;
  UIViewController<IGStoryStickerEditingViewControllerProtocol> *_presentedStickerEditingViewController;
  NSObject<UIViewControllerTransitioningDelegate> *_transitioningDelegate;
  IGStory *_reel;
  IGMedia *_media;
  NSObject<IGStoryItemType><IGUnitItemInformationProviding> *_storyItem;
  IGStoryInteractiveAdsUpdater *_interactiveAdsUpdater;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session reelPK:(id)pk feedItemPK:(id)pk;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (void)storyDataController:(id)controller didUpdateReel:(id)reel refreshType:(long long)type updateDuration:(double)duration;
- (void)storyDataController:(id)controller fetchItemsDidFailForReelPK:(id)pk error:(id)error refreshType:(long long)type updateDuration:(double)duration;
- (void)storyDataController:(id)controller didReturnNoStoryItemResultsForReelPK:(id)pk refreshType:(long long)type updateDuration:(double)duration;
- (void)_didTapCancelButton:(id)button;
- (void)_didTapAddStickerButton:(id)button;
- (void)_didTapExportButton;
- (void)storyPlayerMediaView:(id)view didUpdateLoadingState:(id)state;
- (void)storyPlayerMediaViewDidLoad:(id)load loadSource:(id)source networkRequestSummary:(id)summary;
- (void)storyPlayerMediaView:(id)view didUpdateProgress:(double)progress player:(id)player captionController:(id)controller;
- (void)storyPlayerMediaViewDidPlayToEnd:(id)end;
- (void)storyPlayerMediaViewWillLoadVideo:(id)video;
- (void)storyPlayerMediaView:(id)view didTapLinkIconWithGestureRecognizer:(id)recognizer;
- (void)storyPlayerMediaView:(id)view willLoadURL:(id)url;
- (void)storyPlayerMediaViewDidFailToLoadImage:(id)image error:(id)error networkRequestSummary:(id)summary;
- (void)storyPlayerMediaViewReceivedEmptyBuffer:(id)buffer;
- (void)storyPlayerMediaViewDidPlay:(id)play;
- (void)storyPlayerMediaViewDidBeginPlayback:(id)playback;
- (void)storyPlayerMediaViewDidFailToPlayback:(id)playback error:(id)error;
- (void)storyPlayerMediaView:(id)view didGenerateVideoPlaybackWarningWithError:(id)error;
- (BOOL)storyPlayerMediaViewDidExpandCarouselStory:(id)story;
- (void)willDismissStickerTrayViewController:(id)controller trayStateModel:(id)model;
- (void)stickerTrayViewController:(id)controller didChangeContentState:(unsigned long long)state;
- (void)stickerTrayViewControllerDidSelectPollSticker;
- (BOOL)stickerGestureController:(id)controller shouldBringStickerToFront:(id)front withGesture:(id)gesture;
- (void)stickerGestureController:(id)controller didTapSticker:(id)sticker atPoint:(struct CGPoint { double x0; double x1; })point;
- (BOOL)stickerGestureController:(id)controller shouldBeginPositioningSticker:(id)sticker withGesture:(id)gesture;
- (void)stickerGestureController:(id)controller willBeginPositioningSticker:(id)sticker;
- (void)stickerGestureController:(id)controller didFinishPositioningSticker:(id)sticker deleted:(BOOL)deleted;
- (BOOL)stickerGestureController:(id)controller stickerCanBePlacedOffscreen:(id)offscreen;
- (BOOL)stickerGestureController:(id)controller stickerCanBePlacedOffGuidelines:(id)guidelines;
- (BOOL)stickerGestureController:(id)controller stickerCanBeDeleted:(id)deleted;
- (id)stickerGestureController:(id)controller additionalStickersForDeletionWithSticker:(id)sticker;
- (void)stickerGestureController:(id)controller didUpdateStickerPosition:(id)position;
- (void)stickerGestureController:(id)controller willDeleteSticker:(id)sticker;
- (void)stickerGestureController:(id)controller didDeleteSticker:(id)sticker deleteVariant:(long long)variant;
- (void)stickerGestureController:(id)controller didLongPressOnSticker:(id)sticker longPressGesture:(id)gesture;
- (void)stickerGestureController:(id)controller didUpdateAlignmentGuideState:(unsigned long long)state;
- (long long)stickerGestureController:(id)controller minimumIndexForSticker:(id)sticker;
- (long long)stickerGestureController:(id)controller maximumIndexForSticker:(id)sticker;
- (void)stickerGestureController:(id)controller didBringStickerToFront:(id)front;
- (id)stickerViewEnumeratorForStickerGestureController:(id)controller;
- (void)didUpdateWithMediaRawData:(id)data;
@end

#endif /* IGStoryInteractiveAdsEditViewController_h */