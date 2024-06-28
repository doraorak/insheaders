//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGKaraokeCaptionStickerCreationViewController_h
#define IGKaraokeCaptionStickerCreationViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAsyncTask.h"
#include "IGKaraokeCaptionStickerView.h"
#include "IGKaraokeCaptionsStickerEditingViewController.h"
#include "IGMusicStickerEditorStylePicker.h"
#include "IGStickerEditingHeaderView.h"
#include "IGStickerEditingHeaderViewDismissalDelegate-Protocol.h"
#include "IGStoryAnimatedStickerEditingViewControllerProtocol-Protocol.h"
#include "IGStoryColorProvider-Protocol.h"
#include "IGStoryEyedropperPresentationView.h"
#include "IGStoryEyedropperPresentationViewDataSource-Protocol.h"
#include "IGStoryEyedropperPresentationViewDelegate-Protocol.h"
#include "IGStoryTextEntryInputAccessoryView.h"
#include "IGUserSession.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIColor, UILabel, UITapGestureRecognizer, UIView;
@protocol IGKaraokeCaptionStickerCreationViewControllerDelegate;

@interface IGKaraokeCaptionStickerCreationViewController : UIViewController<IGStickerEditingHeaderViewDismissalDelegate, IGStoryEyedropperPresentationViewDelegate, IGStoryEyedropperPresentationViewDataSource, UIGestureRecognizerDelegate, IGStoryAnimatedStickerEditingViewControllerProtocol> {
  /* instance variables */
  BOOL _isNewlyCreated;
  UIView *_dimmingView;
  UIView *_contentWrapperView;
  IGKaraokeCaptionStickerView *_stickerView;
  IGStickerEditingHeaderView *_headerView;
  IGStoryTextEntryInputAccessoryView *_textInputAccessoryView;
  IGUserSession *_userSession;
  IGMusicStickerEditorStylePicker *_stylePicker;
  UILabel *_loadingLabel;
  BOOL _controlsVisible;
  unsigned long long _editingMode;
  long long _creationEntryPoint;
  unsigned long long _colorPickingState;
  IGStoryEyedropperPresentationView *_eyedropperPresentationView;
  UIColor *_primaryStickerColor;
  IGKaraokeCaptionsStickerEditingViewController *_captionsStickerEditingViewController;
  IGAsyncTask *_captions;
  BOOL _userHasSetPrimaryStickerColor;
  BOOL _stickerDimmed;
  UITapGestureRecognizer *_tapGesture;
}

@property (nonatomic) long long emphasisStyle;
@property (weak, nonatomic) NSObject<IGKaraokeCaptionStickerCreationViewControllerDelegate> *delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRegion;
@property (nonatomic) double contentRegionCornerRadius;
@property (weak, nonatomic) NSObject<IGStoryColorProvider> *colorProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double playbackTime;
@property (retain, nonatomic) id playbackTimeObserverToken;
@property (readonly, nonatomic) NSArray *backgroundViews;
@property (readonly, nonatomic) UIView *editableStickerView;
@property (readonly, nonatomic) double editableStickerScaleWhileEditing;
@property (readonly, nonatomic) BOOL editableStickerViewIsNewlyCreated;
@property (readonly, nonatomic) BOOL shouldDisableZoomTransitionOnEditStart;
@property (readonly, nonatomic) BOOL shouldDiscardStickerOnDismissal;
@property (readonly, nonatomic) NSString *stickerEditSessionLoggingId;
@optional
@property (readonly, nonatomic) NSArray *secondaryEditableStickerViews;

/* instance methods */
- (id)initWithKaraokeCaptionSticker:(id)sticker captions:(id)captions audioLength:(id)length userSession:(id)session creationEntryPoint:(long long)point;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)stickerEditingHeaderViewDidTapToDismiss:(id)dismiss withDismissalSource:(long long)source;
- (void)stickerEditingHeaderViewDidTapColorWheel:(id)wheel;
- (void)stickerEditingHeaderViewDidTapTextSelectorButton:(id)button;
- (void)stickerEditingHeaderViewDidTapTextEmphasisToggleButton:(id)button;
- (void)stickerEditingHeaderViewDidTapTextToolButton:(id)button;
- (void)stickerEditingHeaderViewDidTapTagUserButton:(id)button;
- (void)textEntryInputAccessoryView:(id)view didSelectColor:(id)color;
- (void)textEntryInputAccessoryView:(id)view didSelectUser:(id)user;
- (void)textEntryInputAccessoryViewDidSelectNewGroupMention:(id)mention;
- (void)textEntryInputAccessoryView:(id)view didSelectGroupMention:(id)mention;
- (void)textEntryInputAccessoryView:(id)view didSelectHashtag:(id)hashtag;
- (void)textEntryInputAccessoryView:(id)view didUpdateSuggestedHashtags:(id)hashtags;
- (void)textEntryInputAccessoryView:(id)view didLongPressOnColor:(id)color withGestureRecognizer:(id)recognizer;
- (BOOL)textEntryInputAccessoryViewShouldShowGroupMentionStickerSuggestions:(id)suggestions;
- (void)karaokeCaptionsStickerEditingViewControllerDidFinishEditing:(id)editing;
- (void)karaokeCaptionsStickerEditingViewControllerDidBeginEditing:(id)editing;
- (void)karaokeCaptionsStickerEditingViewController:(id)controller didEditTokens:(id)tokens;
- (void)eyedropperPresentationViewDidPresentEyedropper:(id)eyedropper;
- (void)eyedropperPresentationViewDidDismissEyedropper:(id)eyedropper;
- (void)eyedropperPresentationView:(id)view didMoveEyedropperToPointInWindowCoordinates:(struct CGPoint { double x0; double x1; })coordinates;
- (id)eyedropperPresentationView:(id)view colorAtWindowCoordinates:(struct CGPoint { double x0; double x1; })coordinates;
- (void)eyedropperPresentationView:(id)view didSelectColor:(id)color;
- (void)_didTapEyedropperToggleButton:(id)button;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)_didTapBackground:(id)background;
- (void)_didUpdateSelectedStickerStyle:(id)style;
- (void)_didTapCaptionSticker;
@end

#endif /* IGKaraokeCaptionStickerCreationViewController_h */
