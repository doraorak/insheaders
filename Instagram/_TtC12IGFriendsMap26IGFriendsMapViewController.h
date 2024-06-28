//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC12IGFriendsMap26IGFriendsMapViewController_h
#define _TtC12IGFriendsMap26IGFriendsMapViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC12IGFriendsMap26IGFriendsMapViewController : IGViewController { // (Swift)
  /* instance variables */
   $__lazy_storage_$_shouldSpoofLocation;
   $__lazy_storage_$_shouldShowNuxFlow;
   $__lazy_storage_$_shouldUseUserCardHScroll;
   $__lazy_storage_$_shouldUseNoteLocationPicker;
   $__lazy_storage_$_shouldUseQuickEmoji;
   $__lazy_storage_$_friendsMapView;
   $__lazy_storage_$_permissionsManager;
   $__lazy_storage_$_updatesBottomSheet;
   $__lazy_storage_$_locationPickerBottomSheetContentVC;
   $__lazy_storage_$_locationPickerBottomSheet;
   $__lazy_storage_$_userCardHScrollVC;
   $__lazy_storage_$_quickEmojiHScrollVC;
   $__lazy_storage_$_heartAnimator;
   $__lazy_storage_$_enableBottomsheetPartiallyOpenScroll;
   $__lazy_storage_$_disableSwipeBack;
   userSession;
   entryPoint;
   locationPermissionAPI;
   location;
   nuxFlowShown;
   directReplyPresenter;
   noteDetailsDelegate;
   noteComposerDelegate;
   annotations;
   selectionState;
   initFocusNotePk;
   initFocusUserId;
   didSetInitalRegionSuccessfully;
   lastActiveLocationEnabled;
   pendingNoteModel;
   isLocationPickerBottomSheetPresented;
   lastSheetPresentTime;
   locationPickerStartTime;
   locationPickerDwellTime;
   quickEmojiDummyNote;
   isSettingLocationPicker;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

/* instance methods */
- (id)initWithUserSession:(id)session entryPoint:(long long)point initialRegionNotePk:(id)pk initialRegionUserId:(id)id;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLoad;
- (long long)preferredTabBarBehavior;
- (BOOL)prefersNavigationBarHidden;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC12IGFriendsMap26IGFriendsMapViewController_h */