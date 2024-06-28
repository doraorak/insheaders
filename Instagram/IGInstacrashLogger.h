//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInstacrashLogger_h
#define IGInstacrashLogger_h
@import Foundation;

@class NSString, NSURLSession;

@interface IGInstacrashLogger : NSObject {
  /* instance variables */
  NSURLSession *_session;
  NSString *_sessionID;
  id /* block */ _requestBodyFormatter;
}

/* instance methods */
- (id)init;
- (id)initWithRequestBodyFormatter:(id /* block */)formatter;
- (void)logInstacrashEvent:(id)event extras:(id)extras;
- (id)_extrasDictionaryWithSessionID:(id)id;
@end

#endif /* IGInstacrashLogger_h */
