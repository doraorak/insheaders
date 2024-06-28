//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGBusinessAddressKit39IGMultipleBusinessAddressViewController_h
#define _TtC20IGBusinessAddressKit39IGMultipleBusinessAddressViewController_h
@import Foundation;

#include "IGViewController.h"
#include "_TtP20IGBusinessAddressKit47IGMultipleBusinessAddressViewControllerDelegate_-Protocol.h"

@interface _TtC20IGBusinessAddressKit39IGMultipleBusinessAddressViewController : IGViewController { // (Swift)
  /* instance variables */
   enableAddAddressRow;
   maxNumAddresses;
   maxNumEdits;
   numEdits;
   addresses;
   originalAddresses;
   userSession;
   analyticsModule;
   ig4bLogger;
   logger;
   isEditingLocked;
   editingLockedMessage;
   $__lazy_storage_$_locationTitle;
   $__lazy_storage_$_addAnAddressText;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   mutations;
}

@property (nonatomic, weak) NSObject<_TtP20IGBusinessAddressKit47IGMultipleBusinessAddressViewControllerDelegate_> *delegate;

/* instance methods */
- (id)initWithAddresses:(id)addresses originalAddresses:(id)addresses userSession:(id)session analyticsModule:(id)module logger:(id)logger;
- (long long)preferredTabBarBehavior;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC20IGBusinessAddressKit39IGMultipleBusinessAddressViewController_h */
