//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxListAdapterDataSource_h
#define IGDirectInboxListAdapterDataSource_h
@import Foundation;

#include "IGDirectAvatarSelectionHandler.h"
#include "IGDirectInboxConfig.h"
#include "IGDirectInboxDataSourceDelegate-Protocol.h"
#include "IGDirectInboxHeaderCellViewModel.h"
#include "IGDirectInboxQPCache.h"
#include "IGDirectScrollPerfViewUpdateLogger.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGSubscriptionToken-Protocol.h"

@class FBGeneralImpressionManager, IGDirectInboxTab, IGPerformanceLoadingIndicatorAnnouncer, IGUserSession, NSArray, NSDictionary, NSString;
@protocol IGDirectVaulting;

@interface IGDirectInboxListAdapterDataSource : NSObject<IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDirectInboxConfig *_inboxConfig;
  id /* block */ _inboxViewModelSubscriptionCreationBlock;
  NSString *_analyticsModule;
  IGDirectAvatarSelectionHandler *_avatarSelectionHandler;
  IGDirectInboxQPCache *_qpCache;
  NSObject<IGDirectInboxDataSourceDelegate> *_delegate;
  IGDirectInboxHeaderCellViewModel *_cachedStickyHeader;
  NSArray *_cachedViewModelList;
  NSDictionary *_cachedThreadCellViewModels;
  BOOL _hasCreatedInitialLoadingViewModel;
  BOOL _hasLoadedInitialInboxViewModels;
  FBGeneralImpressionManager *_activeNowLogger;
  NSObject<IGSubscriptionToken> *_subscriptionToken;
  NSObject<IGDirectVaulting> *_vault;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IGDirectInboxTab *tab;
@property (nonatomic) long long filterType;
@property (nonatomic) BOOL shouldEnablePublicTab;
@property (nonatomic) BOOL shouldEnableAdResponseTab;
@property (readonly, nonatomic) BOOL shouldShowToastForIrisErrorState;
@property (readonly, nonatomic) BOOL shouldHideCameraButton;
@property (readonly, nonatomic) long long featureLimitsExpirationTimestampSeconds;
@property (readonly, nonatomic) IGDirectScrollPerfViewUpdateLogger *viewUpdateLogger;
@property (readonly, nonatomic) IGPerformanceLoadingIndicatorAnnouncer *tailLoadingIndicatorAnnouncer;

/* instance methods */
- (id)initWithInboxViewModelSubscriptionCreationBlock:(id /* block */)block inboxConfig:(id)config userSession:(id)session analyticsModule:(id)module qpCache:(id)cache activeNowLogger:(id)logger vault:(id)vault;
- (void)startWithDelegate:(id)delegate;
- (void)stop;
- (id)stickyHeader;
- (id)emptyViewForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)objectsForListAdapter:(id)adapter;
- (id)allGroupThreadIds;
- (unsigned long long)cachedInboxViewModelCount;
- (id)cachedThreadCellViewModelWithId:(id)id;
- (BOOL)doesContainPartnershipFolder;
- (id)noteTrayModelFromListAdapter:(id)adapter;
- (id)rageshakeDebugDescription;
- (BOOL)shouldEnableIGVPTrackingForInboxThreadSectionController:(id)controller;
- (BOOL)shouldEnableIGVPTrackingForSuggestedSectionController:(id)controller;
@end

#endif /* IGDirectInboxListAdapterDataSource_h */