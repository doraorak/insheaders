//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemAdsFeedbackInterfaceLogger_h
#define IGFeedItemAdsFeedbackInterfaceLogger_h
@import Foundation;

#include "IGSponsoredInfoProviding-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol FBAnalyticsLogging><IGAnalyticsEventLoggingProtocol, IGQuantumSignalsManagerProviding, IGQuantumSignalsServiceProviding;

@interface IGFeedItemAdsFeedbackInterfaceLogger : NSObject {
  /* instance variables */
  NSObject<FBAnalyticsLogging><IGAnalyticsEventLoggingProtocol> *_logger;
  NSObject<IGSponsoredInfoProviding> *_sponsoredInfoProvider;
  NSString *_pk;
  NSString *_afiId;
  unsigned long long _afiType;
  unsigned long long _question;
  NSString *_sessionId;
  NSString *_analyticsModule;
  unsigned long long _itemPositionInFeed;
  NSDictionary *_extraData;
  NSString *_authorId;
  NSString *_inventorySource;
  NSString *_mediaId;
  NSArray *_mediaIds;
  NSObject<IGQuantumSignalsManagerProviding> *_quantumSignalsManager;
  NSObject<IGQuantumSignalsServiceProviding> *_quantumSignalsService;
  unsigned long long _quantumSignalsSurface;
}

@property (readonly, nonatomic) NSString *adId;
@property (readonly, nonatomic) unsigned long long triggerType;

/* instance methods */
- (id)initWithLogger:(id)logger pk:(id)pk sponsoredInfoProvider:(id)provider afiId:(id)id afiType:(unsigned long long)type question:(unsigned long long)question triggerType:(unsigned long long)type sessionId:(id)id analyticsModule:(id)module itemPositionInFeed:(unsigned long long)feed extraData:(id)data authorId:(id)id inventorySource:(id)source mediaId:(id)id mediaIds:(id)ids quantumSignalsManager:(id)manager quantumSignalsService:(id)service quantumSignalsSurface:(unsigned long long)surface;
- (void)_logAFIImpressionWithInterests:(id)interests extraData:(id)data;
- (void)_logAFIResponseWithAnswer:(unsigned long long)answer interests:(id)interests extraData:(id)data;
- (void)_logAFIUndoWithAnswer:(unsigned long long)answer interests:(id)interests extraData:(id)data;
@end

#endif /* IGFeedItemAdsFeedbackInterfaceLogger_h */
