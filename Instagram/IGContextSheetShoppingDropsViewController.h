//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContextSheetShoppingDropsViewController_h
#define IGContextSheetShoppingDropsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGContextSheetHeaderView.h"
#include "IGContextSheetHeaderViewModel.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGSaveProductLogger.h"
#include "IGShoppingSaveController.h"

@class IGAPIProductDetailsProductItemDict, IGEventPageNavigationMetadata, IGListAdapter, IGMedia, IGSessionTracker, IGShoppingStoryDestination, IGShoppingStoryProductCollection, IGUserSession, NSDictionary, NSString, UICollectionView, UILabel, UIView;
@protocol IGContextSheetProductViewControllerDelegate;

@interface IGContextSheetShoppingDropsViewController : IGViewController<IGListAdapterDataSource, IGGestureHandler> {
  /* instance variables */
  IGListAdapter *_listAdapter;
  UICollectionView *_collectionView;
  IGUserSession *_userSession;
  IGAPIProductDetailsProductItemDict *_productItem;
  BOOL _isDropsReminder;
  UIView *_horizontalLine;
  IGContextSheetHeaderView *_headerView;
  UILabel *_dropsReminderExplanation;
  IGMedia *_media;
  NSString *_mediaId;
  IGSaveProductLogger *_saveLogger;
  NSDictionary *_loggingExtras;
  IGShoppingSaveController *_shoppingSaveController;
  IGContextSheetHeaderViewModel *_headerViewModel;
  IGShoppingStoryProductCollection *_productCollection;
  IGShoppingStoryDestination *_shoppingDestination;
  IGSessionTracker *_shoppingSessionTracker;
  IGEventPageNavigationMetadata *_eventPageNavigationMetadata;
}

@property (weak, nonatomic) NSObject<IGContextSheetProductViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithShoppingDestination:(id)destination isDropsReminder:(BOOL)reminder media:(id)media mediaId:(id)id userSession:(id)session saveLogger:(id)logger loggingExtras:(id)extras priorModule:(id)module eventPageNavigationMetadata:(id)metadata;
- (void)viewDidLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)contextSheetHeaderViewDidPressImage:(id)image profilePictureImageView:(id)view;
- (void)contextSheetHeaderViewDidPressTitleLabel:(id)label;
- (void)contextSheetHeaderViewDidPressSubtitleLabel:(id)label;
- (void)contextSheetHeaderViewDidPressView:(id)view;
- (void)contextSheetHeaderViewDidPressTertiaryTitleLabel:(id)label;
- (void)contextSheetHeaderViewDidPressFollowButton;
- (void)contextSheetProductActionsSectionControllerDidSelectShareDropsSticker:(id)sticker;
@end

#endif /* IGContextSheetShoppingDropsViewController_h */