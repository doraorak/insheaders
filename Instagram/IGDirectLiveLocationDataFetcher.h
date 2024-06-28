//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectLiveLocationDataFetcher_h
#define IGDirectLiveLocationDataFetcher_h
@import Foundation;

@class IGUserSession, NSString, PNPandoGraphQLService;

@interface IGDirectLiveLocationDataFetcher : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  PNPandoGraphQLService *_pandoGraphQLService;
  NSString *_threadId;
}

/* instance methods */
- (id)initWithUserSession:(id)session threadId:(id)id;
@end

#endif /* IGDirectLiveLocationDataFetcher_h */
