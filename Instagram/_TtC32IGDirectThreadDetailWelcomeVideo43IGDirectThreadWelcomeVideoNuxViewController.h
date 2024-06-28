//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC32IGDirectThreadDetailWelcomeVideo43IGDirectThreadWelcomeVideoNuxViewController_h
#define _TtC32IGDirectThreadDetailWelcomeVideo43IGDirectThreadWelcomeVideoNuxViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGListAdapterDataSource-Protocol.h"

@interface _TtC32IGDirectThreadDetailWelcomeVideo43IGDirectThreadWelcomeVideoNuxViewController : IGViewController<IGListAdapterDataSource> { // (Swift)
  /* instance variables */
   threadKey;
   threadDisplayName;
   userSession;
   postCreationManager;
   consistentThreadFbid;
   isBroadcastChannel;
   audienceType;
   dismissBlock;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_bottomButtonView;
}

/* instance methods */
- (id)initWithThreadKey:(id)key threadDisplayName:(id)name analyticsModule:(id)module userSession:(id)session consistentThreadFbid:(id)fbid isBroadcastChannel:(BOOL)channel audienceType:(id)type dismissBlock:(id /* block */)block;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC32IGDirectThreadDetailWelcomeVideo43IGDirectThreadWelcomeVideoNuxViewController_h */