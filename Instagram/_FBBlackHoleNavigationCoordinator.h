//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _FBBlackHoleNavigationCoordinator_h
#define _FBBlackHoleNavigationCoordinator_h
@import Foundation;

#include "FBNavigationCoordinator-Protocol.h"

@class NSString;

@interface _FBBlackHoleNavigationCoordinator : NSObject<FBNavigationCoordinator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)topViewController;
- (BOOL)presentWithNavigationInfo:(id)info;
- (BOOL)presentWithNavigationInfo:(id)info animated:(BOOL)animated;
- (void)dismissViewController:(id)controller;
- (void)dismissViewController:(id)controller animated:(BOOL)animated;
- (void)dismissViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (void)closeAllPopovers;
- (BOOL)isPresentingPopover;
- (BOOL)topViewControllerPassesTest:(id /* block */)test;
- (void)doesNotRecognizeSelector:(SEL)selector;
@end

#endif /* _FBBlackHoleNavigationCoordinator_h */
