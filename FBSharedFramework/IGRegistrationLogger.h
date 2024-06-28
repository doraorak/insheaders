//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationLogger_h
#define IGRegistrationLogger_h
@import Foundation;

#include "IGUserSession.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGRegistrationLogger : NSObject<NSObject> {
  /* instance variables */
  NSString *_signUpFlow;
}

@property (readonly, nonatomic) NSString *actorID;
@property (readonly, nonatomic) NSString *source;
@property (retain, nonatomic) IGUserSession *userSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithActorPk:(id)pk;
- (void)logStartFetchingFacebookUsernameWithStep:(id)step;
- (void)logEndFetchingFacebookUsernameWithStep:(id)step hasFacebookUsername:(BOOL)username;
@end

#endif /* IGRegistrationLogger_h */