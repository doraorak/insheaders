//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC33IGDirectThreadDetailsChatControls26ChatControlsViewController_h
#define _TtC33IGDirectThreadDetailsChatControls26ChatControlsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDirectThreadDetailMoveToFolderSectionControllerDelegate-Protocol.h"
#include "IGImageTitleSectionControllerDelegate-Protocol.h"
#include "IGTitleAndToggleCellDelegate-Protocol.h"

@interface _TtC33IGDirectThreadDetailsChatControls26ChatControlsViewController : IGViewController<IGTitleAndToggleCellDelegate, IGDirectThreadDetailMoveToFolderSectionControllerDelegate, IGImageTitleSectionControllerDelegate> { // (Swift)
  /* instance variables */
   threadId;
   threadKey;
   threadInfo;
   userSession;
   dataSource;
   directOutgoingUpdateSender;
   analyticsLogger;
   threadDetailAnalyticsLogger;
   position;
   threadCapability;
   isBroadcastChannel;
   isSubscriberBroadcastChannel;
   consistentThreadFbId;
   isChannel;
   viewModel;
   threadMetadata;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_highMessagesPerSecondManager;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC33IGDirectThreadDetailsChatControls26ChatControlsViewController_h */