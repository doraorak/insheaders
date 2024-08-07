//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC9IGSchools48IGSchoolsAddSchoolsSchoolSelectionViewController_h
#define _TtC9IGSchools48IGSchoolsAddSchoolsSchoolSelectionViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC9IGSchools48IGSchoolsAddSchoolsSchoolSelectionViewController : IGViewController { // (Swift)
  /* instance variables */
   analyticsModule;
   userSession;
   affiliationId;
   email;
   allSchools;
   selectedSchoolID;
   schoolIDMap;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_schoolSelectionHeaderView;
   $__lazy_storage_$_searchBar;
   $__lazy_storage_$_continueButtonView;
}

/* instance methods */
- (BOOL)prefersNavigationBarDividerHidden;
- (long long)preferredTabBarBehavior;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)showLeaveFlowDialog;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC9IGSchools48IGSchoolsAddSchoolsSchoolSelectionViewController_h */
