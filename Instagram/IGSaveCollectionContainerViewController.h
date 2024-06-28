//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSaveCollectionContainerViewController_h
#define IGSaveCollectionContainerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAlertHUDHandling-Protocol.h"
#include "IGDirectComposerButtonDelegate-Protocol.h"
#include "IGDirectComposerSizingDelegate-Protocol.h"
#include "IGDirectShareCollectionController.h"
#include "IGFollowControllerDelegate-Protocol.h"
#include "IGGuideCreationFlowPresenter.h"
#include "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "IGSaveCollectionActionController.h"
#include "IGSaveCollectionTabPageViewController.h"
#include "IGScopedListener-Protocol.h"
#include "_TtC23IGSavePerformanceLogger23IGSavePerformanceLogger.h"
#include "_TtP24IGSavedPublicCollections35IGSavedCollectionFooterViewDelegate_-Protocol.h"
#include "_TtP24IGSavedPublicCollections35IGSavedCollectionHeaderViewDelegate_-Protocol.h"
#include "_TtP24IGSavedPublicCollections52IGSavedCollectionAudienceSheetViewControllerDelegate_-Protocol.h"

@class IGFollowController, IGGradientView, IGInfoView, IGKeyboardObserver, IGSavedMediaCollection, IGSundialFeedNetworkSource, IGUserSession, NSArray, NSString, UIActivityIndicatorView, _TtC24IGSavedPublicCollections27IGSavedCollectionFooterView, _TtC24IGSavedPublicCollections27IGSavedCollectionHeaderView;

@interface IGSaveCollectionContainerViewController : IGViewController<_TtP24IGSavedPublicCollections35IGSavedCollectionHeaderViewDelegate_, _TtP24IGSavedPublicCollections52IGSavedCollectionAudienceSheetViewControllerDelegate_, IGFollowControllerDelegate, IGKeyboardObserverFrameChangeDelegate, IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGDirectComposerButtonDelegate, IGDirectComposerSizingDelegate, _TtP24IGSavedPublicCollections35IGSavedCollectionFooterViewDelegate_, IGScopedListener> {
  /* instance variables */
  IGUserSession *_userSession;
  UIActivityIndicatorView *_loadingIndicator;
  IGSavedMediaCollection *_collection;
  NSString *_priorModule;
  IGSaveCollectionTabPageViewController *_tabPageViewController;
  IGSaveCollectionActionController *_saveActionController;
  IGSundialFeedNetworkSource *_savedSundialFeed;
  IGInfoView *_infoView;
  unsigned long long _selectionOption;
  NSString *_collectionId;
  IGGuideCreationFlowPresenter *_guideCreationFlowPresenter;
  _TtC23IGSavePerformanceLogger23IGSavePerformanceLogger *_logger;
  IGDirectShareCollectionController *_directShareController;
  _TtC24IGSavedPublicCollections27IGSavedCollectionHeaderView *_headerView;
  _TtC24IGSavedPublicCollections27IGSavedCollectionFooterView *_footerView;
  IGGradientView *_gradientView;
  unsigned long long _selectedPrivacyMode;
  IGFollowController *_followController;
  IGKeyboardObserver *_keyboardObserver;
  NSObject<IGAlertHUDHandling> *_alertHandler;
  double _keyboardMinY;
  BOOL _isPublicCollectionsEnabled;
  NSArray *_contentVCs;
}

@property (nonatomic) BOOL allowsNavigationGesture;
@property (nonatomic) BOOL reelsTabEnabled;
@property (nonatomic) BOOL disableFeedPreview;
@property (nonatomic) BOOL prefetchSundialFeedTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session collection:(id)collection priorModule:(id)module;
- (id)initWithUserSession:(id)session collectionId:(id)id priorModule:(id)module;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)dealloc;
- (long long)preferredTabBarBehavior;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)_backButtonPressed;
- (void)_selectOptionPressed;
- (void)_cancelEditPressed;
- (void)_showActionOptions;
- (void)_shareCollectionToDirect;
- (BOOL)prefersNavigationBarDividerHidden;
- (BOOL)allowsNavigationGestureForGestureOrigin:(struct CGPoint { double x0; double x1; })origin;
- (void)_dismissFooterComposer;
- (void)showDefaultNavigationItems;
- (void)showBulkSelectionNavigationItems;
- (void)savedMediaFeedDidRequestCreateGuide:(id)guide;
- (void)actionControllerDidTapSelect:(id)select;
- (void)actionControllerDidTapCreateGuide:(id)guide;
- (void)pageViewController:(id)controller didPageToViewController:(id)controller;
- (void)feedItemAddedToCollection:(id)collection withCollectionIds:(id)ids;
- (void)_savedMediaAdded:(id)added;
- (void)infoViewWasTapped:(id)tapped;
- (void)infoViewTextButtonTapped:(id)tapped;
- (void)savedMediaCollectionStatusChanged:(long long)changed collection:(id)collection;
- (void)channelDataSourceWillUpdate:(id)update;
- (void)channelDataSourceDidUpdate:(id)update fromAction:(long long)action error:(id)error;
- (void)savedCollectionHeaderViewDidTapAttributionButton;
- (void)savedCollectionHeaderViewDidTapAudienceButton:(id)button;
- (void)savedCollectionAudienceSheetViewControllerDidSelectAudience:(long long)audience;
- (void)savedCollectionAudienceSheetViewControllerDidTapDone:(long long)done;
- (void)followController:(id)controller didCompleteAction:(long long)action success:(BOOL)success;
- (void)followControllerDidDetectNewButtonState:(id)state;
- (void)followController:(id)controller buttonWasTappedWithAction:(long long)action;
- (void)keyboardObserver:(id)observer keyboardFrameWillChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardFrameDidChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)inputView:(id)view didTapSendButtonWithText:(id)text quotedContent:(id)content animatedEmojiCharacterRanges:(id)ranges defaultPowerupsMetadata:(id)metadata;
- (void)inputView:(id)view didTapCameraButton:(id)button withQuotedContent:(id)content;
- (void)inputView:(id)view didTapGalleryButton:(id)button withQuotedContent:(id)content;
- (void)inputView:(id)view didTapMoreButton:(id)button;
- (void)inputView:(id)view didTapVoiceMessageButton:(id)button;
- (void)inputView:(id)view didTapP2MPaymentRequestButton:(id)button;
- (void)inputView:(id)view didTapAvatarButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapStickerSearchButton:(id)button withText:(id)text;
- (void)inputView:(id)view didTapStickerButton:(id)button inPosition:(long long)position withQuotedContent:(id)content;
- (void)inputView:(id)view didTapGifButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapDrawButton:(id)button;
- (void)inputView:(id)view didTapReshareButton:(id)button;
- (void)inputView:(id)view didTapRemoveGifButton:(id)button withGifModel:(id)model;
- (void)inputView:(id)view didLongPressSendButton:(id)button withText:(id)text;
- (void)inputView:(id)view voiceMessageLongPressGestureRecognizerDidUpdate:(id)update;
- (void)inputView:(id)view redesignGalleryButtonLongPressGestureRecognizerDidUpdate:(id)update;
- (void)inputView:(id)view didTapProductPickerButton:(id)button;
- (void)inputView:(id)view didTapOrderManagementButton:(id)button;
- (void)inputView:(id)view didTapBusinessToolsButton:(id)button;
- (void)inputView:(id)view didTapPlusButton:(id)button isExpanded:(BOOL)expanded layoutSpec:(id)spec;
- (void)inputView:(id)view didTapEmojiReactionButton:(id)button;
- (void)inputView:(id)view didTapBookNowLinkShareButton:(id)button;
- (void)inputView:(id)view didTapQuickReplyButton:(id)button isHighlighted:(BOOL)highlighted text:(id)text;
- (void)inputView:(id)view didTapAppointmentButton:(id)button;
- (void)inputView:(id)view didTapChallengePromptButton:(id)button;
- (void)inputView:(id)view didTapDailyPromptsButton:(id)button;
- (void)inputView:(id)view didTapQuestionPromptButton:(id)button;
- (void)inputView:(id)view didTapAddYoursPromptButton:(id)button;
- (void)inputView:(id)view didTapPollPromptButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapGoLiveButton:(id)button;
- (void)inputView:(id)view didTapMetaAIShortcutButton:(id)button;
- (void)inputView:(id)view didTapFileSharingButton:(id)button;
- (void)inputView:(id)view didTapLocationSharingButton:(id)button;
- (void)inputView:(id)view didTapEventButton:(id)button;
- (void)inputView:(id)view didTapEditDoneButtonWithText:(id)text;
- (void)inputView:(id)view didTapImagineCreateButton:(id)button inPosition:(long long)position;
- (void)inputView:(id)view didTapMetaAIDiscoveryButton:(id)button;
- (void)inputView:(id)view didTapMetaAIVoiceButton:(id)button;
- (void)inputViewDidInvalidateIntrinsicContentSize:(id)size needsImmediateLayout:(BOOL)layout;
- (void)savedCollectionFooterViewDidTapLikeButton;
- (void)savedCollectionFooterViewDidTapReshareButton;
- (id)analyticsModule;
@end

#endif /* IGSaveCollectionContainerViewController_h */