//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadSubscriptionService_h
#define IGDirectThreadSubscriptionService_h
@import Foundation;

#include "IGDirectBlendedThreadSubscriptionService.h"
#include "IGDirectMsysThreadSubscriptionService.h"

@class IGDirectDjangoThreadSubscriptionService;

@interface IGDirectThreadSubscriptionService : NSObject {
  /* instance variables */
  IGDirectDjangoThreadSubscriptionService *_djangoThreadSubscriptionService;
  IGDirectMsysThreadSubscriptionService *_msysThreadSubscriptionService;
  IGDirectBlendedThreadSubscriptionService *_blendedThreadSubscriptionService;
}

/* instance methods */
- (id)initWithDjangoThreadSubscriptionService:(id)service msysThreadSubscriptionService:(id)service blendedThreadSubscriptionService:(id)service;
@end

#endif /* IGDirectThreadSubscriptionService_h */
