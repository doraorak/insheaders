//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContextSheetPoliticalViewController_h
#define IGContextSheetPoliticalViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGContextSheetHeaderView.h"
#include "IGContextSheetHeaderViewModel.h"
#include "IGContextSheetIconIndicationView.h"
#include "IGContextSheetPoliticalViewModel.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGPoliticalAdsDataSource.h"

@class IGBloksAsyncActionHandler, IGListAdapter, IGMedia, IGSponsoredSupportConfiguration, IGUserSession, NSString, UICollectionView;
@protocol IGContextSheetPoliticalViewControllerDelegate;

@interface IGContextSheetPoliticalViewController : IGViewController<IGListAdapterDataSource, IGGestureHandler> {
  /* instance variables */
  NSObject<IGContextSheetPoliticalViewControllerDelegate> *_delegate;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGUserSession *_userSession;
  IGMedia *_media;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
  IGContextSheetHeaderView *_headerView;
  IGContextSheetIconIndicationView *_iconIndicationView;
  IGContextSheetHeaderViewModel *_headerViewModel;
  IGPoliticalAdsDataSource *_dataSource;
  IGContextSheetPoliticalViewModel *_politicalViewModel;
  long long _displayMode;
  IGBloksAsyncActionHandler *_asyncAdsTopicPreferencesActionHandler;
  BOOL _isSCMEEnabled;
  BOOL _shouldShowGenAIDisclaimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate userSession:(id)session media:(id)media sponsoredSupportConfiguration:(id)configuration scmeEnabled:(BOOL)enabled;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)didFetchResponse:(id)response;
- (void)didFailWithError:(id)error;
- (void)contextSheetHeaderViewDidPressImage:(id)image profilePictureImageView:(id)view;
- (void)contextSheetHeaderViewDidPressView:(id)view;
- (void)contextSheetHeaderViewDidPressTitleLabel:(id)label;
- (void)contextSheetHeaderViewDidPressSubtitleLabel:(id)label;
- (void)contextSheetHeaderViewDidPressTertiaryTitleLabel:(id)label;
- (void)contextSheetHeaderViewDidPressFollowButton;
- (void)politicalActionsSectionControllerTapSeeFewerAds:(id)ads;
- (void)politicalActionsSectionControllerTapLearnMore:(id)more;
- (void)politicalAdTopicPreferenceSectionControllerTapChangeAdTopicPreference:(id)preference;
@end

#endif /* IGContextSheetPoliticalViewController_h */