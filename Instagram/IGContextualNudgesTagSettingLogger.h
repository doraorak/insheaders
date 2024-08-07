//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContextualNudgesTagSettingLogger_h
#define IGContextualNudgesTagSettingLogger_h
@import Foundation;

#include "_TtC24IGContextualNudgesLogger24IGContextualNudgesLogger.h"

@class IGUserSession;

@interface IGContextualNudgesTagSettingLogger : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  _TtC24IGContextualNudgesLogger24IGContextualNudgesLogger *_sharedLogger;
}

/* instance methods */
- (id)initWithSession:(id)session;
@end

#endif /* IGContextualNudgesTagSettingLogger_h */
