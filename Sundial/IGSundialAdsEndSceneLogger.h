//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAdsEndSceneLogger_h
#define IGSundialAdsEndSceneLogger_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"

@class NSString;
@protocol IGSessionChainProvider;

@interface IGSundialAdsEndSceneLogger : NSObject {
  /* instance variables */
  NSString *_adId;
  NSString *_analyticsModule;
  NSString *_aPk;
  NSString *_followStatus;
  NSString *_mediaId;
  NSObject<IGSessionChainProvider> *_sessionChainingManager;
  NSObject<FBAnalyticsLogging> *_structuredLogger;
  NSString *_trackingToken;
}

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module adItem:(id)item;
@end

#endif /* IGSundialAdsEndSceneLogger_h */
