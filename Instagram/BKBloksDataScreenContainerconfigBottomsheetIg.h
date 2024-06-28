//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksDataScreenContainerconfigBottomsheetIg_h
#define BKBloksDataScreenContainerconfigBottomsheetIg_h
@import Foundation;

#include "BKBloksDataSafeAreaPadding.h"
#include "BKBloksDataScreenNavbarBottomsheetIg.h"

@class NSNumber, NSString;

@interface BKBloksDataScreenContainerconfigBottomsheetIg : NSObject

@property (readonly, nonatomic) int styleID;
@property (readonly, nonatomic) BKBloksDataScreenNavbarBottomsheetIg *navbar;
@property (readonly, nonatomic) NSNumber *isFullScreenEnabled;
@property (readonly, nonatomic) NSNumber *partialHeightPercentage;
@property (readonly, nonatomic) NSString *adjustScreenResizingFromKeyboard;
@property (readonly, nonatomic) BKBloksDataSafeAreaPadding *safeAreaPadding;
@property (readonly, nonatomic) NSNumber *shouldMaintainHeightOnPush;
@property (readonly, nonatomic) NSNumber *preventPanningInPartialState;
@property (readonly, nonatomic) NSNumber *disableBackSwipe;
@property (readonly, nonatomic) NSNumber *disableDismissOnTapOutside;
@property (readonly, nonatomic) NSNumber *disableDragging;
@property (readonly, nonatomic) NSNumber *initialLoadingScreenHeightPercentage;

/* instance methods */
@end

#endif /* BKBloksDataScreenContainerconfigBottomsheetIg_h */
