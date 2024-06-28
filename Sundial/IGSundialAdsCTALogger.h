//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAdsCTALogger_h
#define IGSundialAdsCTALogger_h
@import Foundation;

#include "IGDirectResponseLogging-Protocol.h"

@class IGFeedItemTracker, IGUserSession, NSString;

@interface IGSundialAdsCTALogger : NSObject<IGDirectResponseLogging> {
  /* instance variables */
  IGUserSession *_userSession;
  IGFeedItemTracker *_sponsoredItemTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)logActionForMedia:(id)media feedItemTracker:(id)tracker directResponseInfo:(id)info ctaContext:(unsigned long long)context analyticsModule:(id)module action:(id)action url:(id)url gestureLoggingInfoProviding:(id)providing extraFields:(id)fields sponsoredInfoProvider:(id)provider;
- (void)logActionFailedForMedia:(id)media feedItemTracker:(id)tracker directResponseInfo:(id)info ctaContext:(unsigned long long)context analyticsModule:(id)module openTarget:(id)target action:(id)action url:(id)url sponsoredInfoProvider:(id)provider;
- (void)logShoppingSheetActionForMedia:(id)media userSession:(id)session ctaContext:(unsigned long long)context action:(id)action url:(id)url adMetadata:(id)metadata module:(id)module;
@end

#endif /* IGSundialAdsCTALogger_h */
