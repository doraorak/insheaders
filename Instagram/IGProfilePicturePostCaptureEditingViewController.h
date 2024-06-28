//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfilePicturePostCaptureEditingViewController_h
#define IGProfilePicturePostCaptureEditingViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGProfilePictureCircularContentMaskingView.h"
#include "IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h"
#include "IGStoryPostCaptureEditingViewControllerType-Protocol.h"
#include "IGStoryPreviewFooterViewDelegate-Protocol.h"

@class IGStoryMediaCompositionEditingViewController, IGStoryMediaCompositionState, IGUserSession, NSArray, NSString, UIView;
@protocol IGProfilePicturePostCaptureEditingDelegate, UIView<IGStoryMediaCompositionEditingControlsOverlayViewProtocol;

@interface IGProfilePicturePostCaptureEditingViewController : IGViewController<IGStoryPreviewFooterViewDelegate, IGStoryPostCaptureEditingViewControllerType> {
  /* instance variables */
  IGUserSession *_userSession;
  IGStoryMediaCompositionEditingViewController *_mediaCompositionEditingViewController;
  IGProfilePictureCircularContentMaskingView *_profilePictureCircularOverlayMaskView;
  IGStoryMediaCompositionState *_composition;
  UIView *_instructionTextView;
  UIView *_animationView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGStoryPostCaptureEditingViewControllerDelegate> *delegate;
@property (readonly, nonatomic) UIView<IGStoryMediaCompositionEditingControlsOverlayViewProtocol> *editingControlsOverlayView;
@property (retain, nonatomic) NSArray *captureToolsForLogging;
@property (nonatomic) unsigned long long userFlowInstanceID;
@property (readonly, nonatomic) NSArray *mediaCompositions;
@property (weak, nonatomic) NSObject<IGProfilePicturePostCaptureEditingDelegate> *profilePictureDelegate;
@property (readonly, nonatomic) BOOL useBirthdayFormat;
@property (weak, nonatomic) NSObject<IGStoryPostCaptureEditingViewControllerDelegate> *storyDelegate;

/* instance methods */
- (id)initWithProfilePictureComposition:(id)composition userSession:(id)session useBirthdayFormat:(BOOL)format;
- (void)_didTapCancelButton;
- (void)previewFooterViewDidTapSend:(id)send isFromDynamicSharecut:(BOOL)sharecut;
- (void)previewFooterViewDidTapDownload:(id)download;
- (void)previewFooterViewDidTapAddToStory:(id)story;
- (void)previewFooterViewDidTapAddToFavoritesOnly:(id)only;
- (void)previewFooterViewDidTapSharedListButton:(id)button sharedList:(id)list;
- (void)previewFooterViewDidLongPressAddToStory:(id)story;
- (void)previewFooterViewDidLongPressFavoritesOnly:(id)only;
- (void)previewFooterViewDidTapFanClubOnly:(id)only isFromShortcut:(BOOL)shortcut;
- (void)previewFooterViewDidLongPressFanClub:(id)club;
- (void)previewFooterView:(id)view didTapShareRollCallWithMutualsOnly:(BOOL)only;
- (void)previewFooterViewDidTapCameraModeToggleViewSelector:(id)selector;
- (void)previewFooterViewDidAttemptToPostStory:(id)story;
- (void)previewFooterViewDidTapOpalOnly:(id)only;
- (void)previewFooterViewDidTapMessageButton:(id)button;
- (void)previewFooterViewDidTapMyWeekOnly:(id)only;
- (void)previewFooterViewDidTapArrowButton:(id)button;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaCompositionRegion;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)insertMediaComposition:(id)composition atIndex:(long long)index;
- (void)deleteMediaCompositionAtIndex:(long long)index;
- (void)navigateToMediaCompositionAtIndex:(long long)index animated:(BOOL)animated;
- (void)setupAREffectControllerIfNeededWithEffectModel:(id)model;
- (void)cutoutSticker:(id)sticker isLoaded:(BOOL)loaded;
@end

#endif /* IGProfilePicturePostCaptureEditingViewController_h */
