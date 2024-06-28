//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIntentAwareAdsPivotGridCardCell_h
#define IGIntentAwareAdsPivotGridCardCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGALLogContextModelProvider-Protocol.h"
#include "IGFeedItemLogger.h"
#include "IGIntentAwareAdsMultiAdsSingleItemCellHiddenMediaView.h"
#include "IGIntentAwareAdsPivotBrowseCardCellCTAButton.h"
#include "IGIntentAwareAdsPivotBrowseCardCellConfig.h"
#include "IGIntentAwareAdsPivotBrowseCardCellHeaderView.h"
#include "IGIntentAwareAdsPivotBrowseCardCellMediaView.h"
#include "IGSundialAdsMultiAdsSingleItemCellOverlayView.h"
#include "ViewSweepProviding-Protocol.h"

@class IGALTapGestureRecognizer, IGAdItem, IGSponsoredSupportConfiguration, NSDictionary, NSString, UIButton;
@protocol IGIntentAwareAdsPivotCardCellTypeDelegate;

@interface IGIntentAwareAdsPivotGridCardCell : UICollectionViewCell<IGALLogContextModelProvider, ViewSweepProviding> {
  /* instance variables */
  IGAdItem *_adItem;
  IGIntentAwareAdsPivotBrowseCardCellMediaView *_mediaView;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfig;
  IGIntentAwareAdsPivotBrowseCardCellConfig *_pivotBrowseCardCellConfig;
  NSDictionary *_loggingExtras;
  IGFeedItemLogger *_feedItemLogger;
  IGSundialAdsMultiAdsSingleItemCellOverlayView *_overlayView;
  IGALTapGestureRecognizer *_imageTapGestureRecognizer;
  IGIntentAwareAdsMultiAdsSingleItemCellHiddenMediaView *_hiddenMediaView;
  IGIntentAwareAdsPivotBrowseCardCellHeaderView *_headerView;
  IGIntentAwareAdsPivotBrowseCardCellCTAButton *_ctaButtonView;
  UIButton *_moreButtonSmallCards;
  BOOL _mediaHidden;
  BOOL _isWatchAndBrowseEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *viewSweepIdentifier;
@property (weak, nonatomic) NSObject<IGIntentAwareAdsPivotCardCellTypeDelegate> *delegate;

/* class methods */
+ (struct CGSize { double x0; double x1; })preferredSizeWithPivotBrowseCardCellConfiguration:(id)configuration;
+ (double)preferredSpacingWithOtherCards:(id)cards;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithAdItem:(id)item pivotBrowseCardCellConfiguration:(id)configuration extraLoggingDict:(id)dict feedItemLogger:(id)logger userSession:(id)session isWatchAndBrowseEnabled:(BOOL)enabled;
- (struct CGSize { double x0; double x1; })cardMediaSize;
- (void)setCTAButtonHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)_didTapMedia;
- (void)_onMoreButtonTapped:(id)tapped;
- (id)trackingModel;
- (void)intentAwareAdsPivotBrowseCardCellDidTapCardImageWithMediaView:(id)view;
- (void)intentAwareAdsPivotBrowseCardCellMediaViewDidLoadImage:(id)image;
- (void)preparePlayback;
- (void)pausePlayback;
- (void)startPlayback;
- (void)stopPlayback;
- (id)loggingExtras;
- (id)mediaPK;
- (BOOL)containsAdsInViewSweepPrimary;
- (void)multiAdsSingleItemCellOverlayViewDidTapMoreOptionsButton:(id)button;
- (void)multiAdsSingleItemCellOverlayViewDidTapUsername:(id)username;
- (void)multiAdsSingleItemCellOverlayViewDidTapProfilePicture:(id)picture;
- (void)multiAdsSingleItemCellOverlayViewDidTapCTA:(id)cta;
- (void)multiAdsSingleItemCellOverlayViewDidTapAudioControlIcon:(id)icon;
- (void)intentAwareAdsPivotBrowseCardCellHeaderViewDidTapUser;
- (void)intentAwareAdsPivotBrowseCardCellHeaderViewDidTapAvatar;
- (void)intentAwareAdsPivotBrowseCardCellCTAButtonDidTapCTA;
@end

#endif /* IGIntentAwareAdsPivotGridCardCell_h */
