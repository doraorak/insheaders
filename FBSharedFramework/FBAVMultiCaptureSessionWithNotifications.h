//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAVMultiCaptureSessionWithNotifications_h
#define FBAVMultiCaptureSessionWithNotifications_h
@import Foundation;

#include "AVCaptureMultiCamSession.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface FBAVMultiCaptureSessionWithNotifications : AVCaptureMultiCamSession {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSString *logName;

/* instance methods */
- (id)initWithLogName:(id)name;
- (void)addInput:(id)input;
- (void)removeInput:(id)input;
@end

#endif /* FBAVMultiCaptureSessionWithNotifications_h */