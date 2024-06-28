//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoViewLogger_h
#define IGVideoViewLogger_h
@import Foundation;

#include "IGSponsoredSupportConfiguration.h"
#include "IGUserSession.h"
#include "IGVideoPlaybackLogging-Protocol.h"
#include "IGVideoViewLoggingStructuredDataProvider.h"
#include "USLIGVideoViewLoggerHelper.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface IGVideoViewLogger : NSObject<IGVideoPlaybackLogging> {
  /* instance variables */
  IGUserSession *_userSession;
  IGVideoViewLoggingStructuredDataProvider *_loggingDataProvider;
  USLIGVideoViewLoggerHelper *_uslIGVideoViewLoggerHelper;
  BOOL _useNoLatencyLogging;
  NSNumber *_lastPlaybackTime;
}

@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, copy, nonatomic) NSString *module;
@property (retain, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration;
@property long long originalPlaybackReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPlaybackLoggingConfig:(id)config userSession:(id)session;
- (id)initWithMedia:(id)media module:(id)module extraFields:(id)fields sponsoredSupportConfiguration:(id)configuration userSession:(id)session;
- (void)logVideoViewForPlayerWithRepresentationId:(id)id extra:(id)extra lastPlaybackTime:(double)time loopCount:(long long)count eventName:(id)name;
- (void)logVideoViewabilityChangeWithVideoId:(id)id currentVideoTime:(double)time viewabilityReport:(id)report;
@end

#endif /* IGVideoViewLogger_h */