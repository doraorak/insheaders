//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIABPCMDataManager_h
#define IGIABPCMDataManager_h
@import Foundation;

@class IGUserSession, NSString;

@interface IGIABPCMDataManager : NSObject {
  /* instance variables */
  NSString *_sessionID;
  IGUserSession *_userSession;
  long long _pcmLongAttributionWindowInSeconds;
}

/* instance methods */
- (id)initWithSessionID:(id)id userSession:(id)session;
@end

#endif /* IGIABPCMDataManager_h */