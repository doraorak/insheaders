//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenAdsConsumerFormShimmeringLoadingViewController_h
#define IGLeadGenAdsConsumerFormShimmeringLoadingViewController_h
@import Foundation;

#include "IGLeadGenAdsConsumerFormViewController.h"
#include "IGLeadGenAdsConsumerFormFlowManager.h"
#include "IGLeadGenAdsConsumerFormLoggingProvider-Protocol.h"
#include "IGLeadGenAdsConsumerFormViewController.h"
#include "IGLeadGenQuestionModel.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGListAdapter, IGUserSession, NSString, UICollectionView;
@protocol IGLeadGenAdsConsumerFormShimmeringLoadingViewControllerDelegate;

@interface IGLeadGenAdsConsumerFormShimmeringLoadingViewController : IGLeadGenAdsConsumerFormViewController<IGListAdapterDataSource, IGLeadGenAdsConsumerFormLoggingProvider> {
  /* instance variables */
  IGLeadGenAdsConsumerFormFlowManager *_flowManager;
  IGUserSession *_session;
  IGLeadGenQuestionModel *_conditionalQuestion;
  IGListAdapter *_adapter;
  UICollectionView *_collectionView;
  IGLeadGenAdsConsumerFormViewController *_previousViewController;
  long long _initialActionType;
}

@property (weak, nonatomic) NSObject<IGLeadGenAdsConsumerFormShimmeringLoadingViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFlowManager:(id)manager conditionalQuestion:(id)question session:(id)session previousViewController:(id)controller actionType:(long long)type;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (id)loggingFlowName;
- (id)loggingPageType;
- (void)_onCloseFlowAttempt;
@end

#endif /* IGLeadGenAdsConsumerFormShimmeringLoadingViewController_h */
