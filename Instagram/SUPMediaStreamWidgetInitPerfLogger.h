//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SUPMediaStreamWidgetInitPerfLogger_h
#define SUPMediaStreamWidgetInitPerfLogger_h
@import Foundation;

#include "SUPPerfLogging-Protocol.h"

@interface SUPMediaStreamWidgetInitPerfLogger : NSObject {
  /* instance variables */
  NSObject<SUPPerfLogging> *_perfLogger;
}

/* instance methods */
- (id)initWithPerfLogger:(id)logger;
- (void)start;
- (void)cancel;
- (void)dealloc;
@end

#endif /* SUPMediaStreamWidgetInitPerfLogger_h */
