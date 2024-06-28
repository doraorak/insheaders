//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteMediaPickerOrganicViewController_h
#define IGPromoteMediaPickerOrganicViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAdEmptyView.h"
#include "IGBoostMediaPickerReachHeaderView.h"
#include "IGBoostPostLogger.h"
#include "IGPromoteABToggleButton.h"
#include "IGPromoteMediaGridViewController.h"
#include "IGPromoteMediaPickerDisplayViewControllerProtocol-Protocol.h"
#include "IGPromoteMediaPickerViewController.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class IGUserSession, IGViewController, NSArray, NSString, UIActivityIndicatorView, UIScrollView, UIView;
@protocol IGBoostPromoteMediaABTestModeChangeDelegate;

@interface IGPromoteMediaPickerOrganicViewController : IGViewController<IGPromoteMediaPickerDisplayViewControllerProtocol, IGPromoteMediaPickerDisplayViewControllerProtocol, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
  /* instance variables */
  IGAdEmptyView *_emptyView;
  double _mediaHeight;
  double _mediaBottomCollectionViewHeight;
  double _mediaY;
  double _mediaMaxHeight;
  double _cumulativeVerticalPanDistance;
  double _cumulativeVerticalPanRealDistance;
  double _contentScrollViewContentOffsetY;
  unsigned long long _mediaHeaderState;
  double _containerScrollViewContentOffsetY;
  BOOL _isFocused;
  long long _mediaGridType;
  NSString *_title;
  BOOL _isFromInboxEntrypoint;
  BOOL _insightsOverlayIsEnabled;
  NSObject<IGBoostPromoteMediaABTestModeChangeDelegate> *_abTestModeChangeDelegate;
  UIView *_abToggleButtonTopSeparator;
  IGPromoteABToggleButton *_abToggleButton;
  IGBoostMediaPickerReachHeaderView *_reacherHeaderView;
}

@property (retain, nonatomic) IGPromoteMediaGridViewController *mediaGridViewController;
@property (retain, nonatomic) IGViewController *singleFeedViewController;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (nonatomic) long long activeIndex;
@property (copy, nonatomic) NSString *mediaId;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (retain, nonatomic) UIView *collectionViewBottomSeparator;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (readonly, nonatomic) IGBoostPostLogger *logger;
@property (readonly, copy, nonatomic) NSString *couponOfferId;
@property (copy, nonatomic) NSArray *abTestMediaIds;
@property (nonatomic) BOOL nextButtonEnabled;
@property (weak, nonatomic) IGPromoteMediaPickerViewController *mediaPicker;
@property (nonatomic) BOOL isABTestingAvailable;
@property (nonatomic) BOOL isABTestingActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session boostPostLogger:(id)logger mediaGridType:(long long)type couponOfferId:(id)id title:(id)title isFromInboxEntrypoint:(BOOL)entrypoint;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)focusViewController;
- (void)viewControllerDidRelinquishFocus;
- (void)navigateToBoostPostViewControllerWithSender:(id)sender isCTAABTestAymtTip:(BOOL)tip isCTDAymtTip:(BOOL)tip isCTWAAymtTip:(BOOL)tip;
- (void)promoteMediaGridViewController:(id)controller didReceiveMedia:(id)media isRefresh:(BOOL)refresh isFullList:(BOOL)list isEligible:(BOOL)eligible error:(id)error;
- (void)promoteMediaGridViewController:(id)controller didSelectMedia:(id)media atIndex:(long long)index isEligible:(BOOL)eligible;
- (id)promoteMediaGridViewController:(id)controller feedItemForMedia:(id)media;
- (BOOL)isMultiSelectionEnabled;
- (id)multiSelectionLabelForMediaAtIndex:(unsigned long long)index;
- (void)scrollViewDidScroll:(id)scroll;
- (void)updateSingleFeedViewControllerForSelectedMediaId:(id)id;
- (BOOL)alwaysHideSelectionOverlay;
- (void)_onBackButtonTapped:(id)tapped;
- (long long)preferredTabBarBehavior;
- (void)didTapABToggleButton;
- (void)boostMediaPickerReachHeaderViewDidTapIconImage:(id)image;
- (void)_didPan:(id)pan;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
@end

#endif /* IGPromoteMediaPickerOrganicViewController_h */
