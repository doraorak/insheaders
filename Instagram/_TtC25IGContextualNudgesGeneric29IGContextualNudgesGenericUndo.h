//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC25IGContextualNudgesGeneric29IGContextualNudgesGenericUndo_h
#define _TtC25IGContextualNudgesGeneric29IGContextualNudgesGenericUndo_h
@import Foundation;

@interface _TtC25IGContextualNudgesGeneric29IGContextualNudgesGenericUndo : NSObject { // (Swift)
  /* instance variables */
   settingsIcon;
   undoToastDuration;
   toastUndoTitle;
   toastUndoActionString;
   networkCaller;
   logger;
}

/* instance methods */
- (id)initWithUndoToastDuration:(double)duration toastUndoTitle:(id)title toastUndoActionString:(id)string networkCaller:(id)caller loggerProtocol:(id)protocol deviceSession:(id)session analyticsLogger:(id)logger;
- (void)presentUndoToast;
- (id)init;
@end

#endif /* _TtC25IGContextualNudgesGeneric29IGContextualNudgesGenericUndo_h */
