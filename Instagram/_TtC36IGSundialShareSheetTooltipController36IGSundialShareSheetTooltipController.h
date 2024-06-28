//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC36IGSundialShareSheetTooltipController36IGSundialShareSheetTooltipController_h
#define _TtC36IGSundialShareSheetTooltipController36IGSundialShareSheetTooltipController_h
@import Foundation;

@interface _TtC36IGSundialShareSheetTooltipController36IGSundialShareSheetTooltipController : NSObject { // (Swift)
  /* instance variables */
   context;
   tooltipTrailingPadding;
}

@property (nonatomic, retain) id currentTooltipView;

/* instance methods */
- (id)initWithContext:(id)context;
- (BOOL)presentTooltipOnSection:(id)section tooltipProvider:(id)provider key:(id)key maxCount:(long long)count;
- (id)init;
@end

#endif /* _TtC36IGSundialShareSheetTooltipController36IGSundialShareSheetTooltipController_h */
