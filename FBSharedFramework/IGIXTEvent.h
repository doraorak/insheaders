//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIXTEvent_h
#define IGIXTEvent_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSDictionary, NSString;

@interface IGIXTEvent : NSObject {
  /* instance variables */
  BOOL _isE2EEMandated;
  NSDictionary *_eventParams;
  NSString *_firstScreenId;
}

@property (readonly, nonatomic) NSString *eventID;
@property (readonly, nonatomic) NSString *appID;
@property (readonly, nonatomic) NSObject<NSObject> *clientContext;
@property (readonly, nonatomic) NSString *analyticsModule;

/* instance methods */
- (id)initWithAppID:(id)id eventName:(unsigned long long)name isE2EEMandated:(BOOL)eemandated analyticsModule:(id)module clientContext:(id)context additionalEventParams:(id)params;
@end

#endif /* IGIXTEvent_h */
