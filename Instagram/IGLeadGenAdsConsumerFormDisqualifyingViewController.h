//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenAdsConsumerFormDisqualifyingViewController_h
#define IGLeadGenAdsConsumerFormDisqualifyingViewController_h
@import Foundation;

#include "IGLeadGenAdsConsumerFormViewController.h"
#include "IGLeadGenAdsConsumerFormFlowManager.h"
#include "IGLeadGenAdsConsumerFormLoggingProvider-Protocol.h"
#include "IGLeadGenQualifyingQuestionDisqualifyingViewModel.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGBottomButtonsView, IGDSHeadlineViewModel, IGListAdapter, IGUserSession, NSString, UICollectionView;

@interface IGLeadGenAdsConsumerFormDisqualifyingViewController : IGLeadGenAdsConsumerFormViewController<IGListAdapterDataSource, IGLeadGenAdsConsumerFormLoggingProvider> {
  /* instance variables */
  IGUserSession *_userSession;
  IGLeadGenAdsConsumerFormFlowManager *_flowManager;
  IGLeadGenQualifyingQuestionDisqualifyingViewModel *_disqualifyingViewModel;
  IGDSHeadlineViewModel *_headlineViewModel;
  IGListAdapter *_adapter;
  UICollectionView *_collectionView;
  IGBottomButtonsView *_footerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session flowManager:(id)manager disqualifyingModel:(id)model;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (id)loggingFlowName;
- (id)loggingPageType;
@end

#endif /* IGLeadGenAdsConsumerFormDisqualifyingViewController_h */
