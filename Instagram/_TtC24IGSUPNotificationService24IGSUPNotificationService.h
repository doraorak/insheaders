//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGSUPNotificationService24IGSUPNotificationService_h
#define _TtC24IGSUPNotificationService24IGSUPNotificationService_h
@import Foundation;

#include "_TtP24SUPNotificationServicing24SUPNotificationServicing_-Protocol.h"

@interface _TtC24IGSUPNotificationService24IGSUPNotificationService : NSObject<_TtP24SUPNotificationServicing24SUPNotificationServicing_> // (Swift)
/* instance methods */
- (void)sendLocalNotificationWithContentBody:(id)body identifier:(id)identifier afterSeconds:(double)seconds;
- (id)init;
@end

#endif /* _TtC24IGSUPNotificationService24IGSUPNotificationService_h */