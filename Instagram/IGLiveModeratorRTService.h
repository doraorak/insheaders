//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveModeratorRTService_h
#define IGLiveModeratorRTService_h
@import Foundation;

@class FBGraphQLServiceToken, NSString, PNPandoGraphQLService;
@protocol IGLiveModeratorRTServiceDelegate;

@interface IGLiveModeratorRTService : NSObject {
  /* instance variables */
  PNPandoGraphQLService *_pandoGraphQLService;
  NSString *_broadcastId;
  FBGraphQLServiceToken *_pandoGraphQLToken;
}

@property (weak, nonatomic) NSObject<IGLiveModeratorRTServiceDelegate> *delegate;

/* instance methods */
- (id)initWithBroadcastId:(id)id userSession:(id)session;
- (void)dealloc;
@end

#endif /* IGLiveModeratorRTService_h */