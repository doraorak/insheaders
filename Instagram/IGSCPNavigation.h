//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSCPNavigation_h
#define IGSCPNavigation_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "SCPNavigationDefaultNavigationControllerDelegate.h"

@class NSString, UINavigationController, UIViewController;
@protocol IGSCPNavigationDelegate, SCPNavigationDelegate;

@interface IGSCPNavigation : NSObject<NSObject> {
  /* instance variables */
  UIViewController *_hostViewController;
  UINavigationController *_navController;
  BOOL _isPresentedModally;
  BOOL _isDismissEnabled;
  SCPNavigationDefaultNavigationControllerDelegate *_navigationControllerDelegate;
}

@property (weak, nonatomic) NSObject<IGSCPNavigationDelegate> *navigationDelegate;
@property (weak, nonatomic) NSObject<SCPNavigationDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHostViewController:(id)controller isPresentedModally:(BOOL)modally isDismissEnabled:(BOOL)enabled;
- (void)presentFirstViewController:(id)controller;
- (void)presentNextViewController:(id)controller;
- (void)popViewControllerAnimated:(BOOL)animated;
- (void)endFlow;
- (void)_dismiss;
@end

#endif /* IGSCPNavigation_h */