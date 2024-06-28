//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallSidebarViewController_h
#define IGVideoCallSidebarViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGVideoCallSidebarView.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString;
@protocol IGVideoCallSidebarViewDelegate;

@interface IGVideoCallSidebarViewController : UIViewController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  BOOL _isInitiallyHidden;
  BOOL _isE2eeMandated;
  NSObject<IGVideoCallSidebarViewDelegate> *_delegate;
  IGVideoCallSidebarView *_sidebarView;
  BOOL _isAvatarsEnabled;
  BOOL _isFiltersEnabled;
  BOOL _isSoloBackgroundsEnabled;
  BOOL _isDualCameraEnabled;
  BOOL _isExpandableMenuEnabled;
  BOOL _isFloatingSelfViewEnabled;
  BOOL _didShowNewBadge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate isHidden:(BOOL)hidden isE2eeMandated:(BOOL)mandated isDualAvailible:(BOOL)availible isFloatingSelfViewEnabled:(BOOL)enabled isEligibleForAvatarFeatures:(BOOL)features;
- (id)_createInitialView;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setSidebarVisibility:(BOOL)visibility;
- (void)videoCallSidebarSliderWillAppear;
- (void)kragleAvatarCommunicationController:(id)controller didUpdateAvatarLoadState:(int)state;
@end

#endif /* IGVideoCallSidebarViewController_h */
