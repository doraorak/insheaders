//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksNavigationCoordinator_h
#define IGBloksNavigationCoordinator_h
@import Foundation;

#include "IGBloksNavigationCoordinator-Protocol.h"

@class NSString, UIViewController;

@interface IGBloksNavigationCoordinator : NSObject<IGBloksNavigationCoordinator> {
  /* instance variables */
  UIViewController *_viewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewController:(id)controller;
- (void)presentViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)pushViewController:(id)controller animated:(BOOL)animated;
- (void)dismissViewControllerAnimated:(BOOL)animated completion:(id /* block */)completion;
- (id)popViewControllerAnimated:(BOOL)animated;
@end

#endif /* IGBloksNavigationCoordinator_h */