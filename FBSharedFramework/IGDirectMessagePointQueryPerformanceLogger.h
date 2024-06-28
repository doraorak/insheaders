//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessagePointQueryPerformanceLogger_h
#define IGDirectMessagePointQueryPerformanceLogger_h
@import Foundation;

#include "IGDirectBasePerformanceLogger.h"

@class NSMutableDictionary;

@interface IGDirectMessagePointQueryPerformanceLogger : NSObject {
  /* instance variables */
  NSMutableDictionary *_messageOtidtoQplInstanceKeyMapping;
  IGDirectBasePerformanceLogger *_basePerformanceLogger;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _messageOtidtoMarkerMappingLock;
}

/* instance methods */
- (int)_getQPLInstanceKeyForMessageOtid:(id)otid;
- (void)_setQPLInstanceKeyForMessageOtid:(id)otid qplInstanceKey:(int *)key;
@end

#endif /* IGDirectMessagePointQueryPerformanceLogger_h */
