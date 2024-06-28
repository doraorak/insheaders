//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksDataScreenContainerconfigFullscreenIg_h
#define BKBloksDataScreenContainerconfigFullscreenIg_h
@import Foundation;

#include "BKBloksDataSafeAreaPadding.h"
#include "BKBloksDataScreenNavbarIg.h"

@class FBEitherObject, NSNumber, NSString;

@interface BKBloksDataScreenContainerconfigFullscreenIg : NSObject

@property (readonly, nonatomic) int styleID;
@property (readonly, nonatomic) FBEitherObject *onBackPress;
@property (readonly, nonatomic) NSNumber *hideTabbar;
@property (readonly, nonatomic) BKBloksDataScreenNavbarIg *navbar;
@property (readonly, nonatomic) BKBloksDataSafeAreaPadding *safeAreaPadding;
@property (readonly, nonatomic) NSString *tabbarBehavior;
@property (readonly, nonatomic) NSNumber *enableInteractiveDismiss;

/* instance methods */
@end

#endif /* BKBloksDataScreenContainerconfigFullscreenIg_h */