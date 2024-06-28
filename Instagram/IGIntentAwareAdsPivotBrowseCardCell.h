//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIntentAwareAdsPivotBrowseCardCell_h
#define IGIntentAwareAdsPivotBrowseCardCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGALLogContextModelProvider-Protocol.h"
#include "IGFeedItemLogger.h"
#include "IGIntentAwareAdsMultiAdsSingleItemCellHiddenMediaView.h"
#include "IGIntentAwareAdsPivotBrowseCardCaptionContainerView.h"
#include "IGIntentAwareAdsPivotBrowseCardCellCTAButton.h"
#include "IGIntentAwareAdsPivotBrowseCardCellConfig.h"
#include "IGIntentAwareAdsPivotBrowseCardCellHeaderView.h"
#include "IGIntentAwareAdsPivotBrowseCardCellMediaView.h"
#include "ViewSweepProviding-Protocol.h"

@class IGAdItem, IGSponsoredSupportConfiguration, NSDictionary, NSString, UIButton, UILabel;
@protocol IGIntentAwareAdsPivotCardCellTypeDelegate;

@interface IGIntentAwareAdsPivotBrowseCardCell : UICollectionViewCell<IGALLogContextModelProvider, ViewSweepProviding> {
  /* instance variables */
  IGAdItem *_adItem;
  IGIntentAwareAdsPivotBrowseCardCellMediaView *_mediaView;
  UILabel *_titleLabel;
  UIButton *_moreButton;
  UIButton *_moreButtonSmallCards;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfig;
  IGIntentAwareAdsPivotBrowseCardCellConfig *_pivotBrowseCardCellConfig;
  NSDictionary *_loggingExtras;
  IGIntentAwareAdsPivotBrowseCardCellHeaderView *_headerView;
  IGIntentAwareAdsPivotBrowseCardCellCTAButton *_ctaButtonView;
  IGIntentAwareAdsPivotBrowseCardCaptionContainerView *_captionContainerView;
  IGFeedItemLogger *_feedItemLogger;
  IGIntentAwareAdsMultiAdsSingleItemCellHiddenMediaView *_hiddenMediaView;
  BOOL _mediaHidden;
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
- (void)_onMoreButtonTapped:(id)tapped;
- (id)trackingModel;
- (void)intentAwareAdsPivotBrowseCardCellHeaderViewDidTapUser;
- (void)intentAwareAdsPivotBrowseCardCellHeaderViewDidTapAvatar;
- (void)intentAwareAdsPivotBrowseCardCellDidTapCardImageWithMediaView:(id)view;
- (void)intentAwareAdsPivotBrowseCardCellMediaViewDidLoadImage:(id)image;
- (void)intentAwareAdsPivotBrowseCardCellCTAButtonDidTapCTA;
- (void)intentAwareAdsPivotBrowseCardCellCaptionContainerDidTapCaption;
- (void)preparePlayback;
- (void)pausePlayback;
- (void)startPlayback;
- (void)stopPlayback;
- (id)loggingExtras;
- (id)mediaPK;
- (BOOL)containsAdsInViewSweepPrimary;
@end

#endif /* IGIntentAwareAdsPivotBrowseCardCell_h */
