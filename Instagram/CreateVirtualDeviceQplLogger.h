//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CreateVirtualDeviceQplLogger_h
#define CreateVirtualDeviceQplLogger_h
@import Foundation;

#include "StateManagerApiLogger.h"
#include "StateManagerApiLoggerProtocol-Protocol.h"

@class NSString;

@interface CreateVirtualDeviceQplLogger : StateManagerApiLogger<StateManagerApiLoggerProtocol> {
  /* instance variables */
  int _loggingId;
}

@property (nonatomic) int event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initNewEvent;
- (void)annotateIsCreateUniqueCall:(BOOL)call;
@end

#endif /* CreateVirtualDeviceQplLogger_h */