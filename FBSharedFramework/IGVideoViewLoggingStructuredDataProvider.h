//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoViewLoggingStructuredDataProvider_h
#define IGVideoViewLoggingStructuredDataProvider_h
@import Foundation;

@class NSNumber, NSString;

@interface IGVideoViewLoggingStructuredDataProvider : NSObject {
  /* instance variables */
  NSString *_AI;
  NSNumber *_APk;
  NSString *_MPk;
  NSNumber *_MT;
  NSNumber *_MTs;
  NSNumber *_isDashEligible;
  NSString *_playbackFormat;
  NSNumber *_numberOfQualities;
  NSString *_inventorySource;
  NSString *_followStatus;
  NSString *_trackingToken;
  NSNumber *_MIx;
  NSString *_applicationState;
  NSNumber *_drAdType;
  NSString *_feedRequestId;
  NSString *_gatingType;
  NSString *_navChain;
  NSString *_sessionId;
  NSNumber *_hostProfileId;
}

/* instance methods */
- (id)initWithAI:(id)ai APk:(id)apk MPk:(id)mpk MTs:(id)mts isDashEligible:(id)eligible playbackFormat:(id)format;
- (void)setInventorySource:(id)source;
- (void)setFollowStatus:(id)status;
- (void)setCarouselIndex:(id)index;
- (void)setTrackingToken:(id)token;
- (void)setMIx:(id)mix;
- (void)setApplicationState:(id)state;
- (void)setGatingType:(id)type;
- (void)setNavChain:(id)chain;
- (void)setSessionId:(id)id;
@end

#endif /* IGVideoViewLoggingStructuredDataProvider_h */