//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFollowListLogger_h
#define IGFollowListLogger_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGFollowPeopleLoggerProtocol-Protocol.h"

@class NSMutableSet, NSString;

@interface IGFollowListLogger : NSObject<IGFollowPeopleLoggerProtocol> {
  /* instance variables */
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
}

@property (copy, nonatomic) NSString *module;
@property (copy, nonatomic) NSString *view;
@property (readonly, nonatomic) NSMutableSet *set;
@property (nonatomic) unsigned long long offset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithModule:(id)module view:(id)view analyticsLogger:(id)logger;
- (void)logImpressionWithUserInfo:(id)info position:(unsigned long long)position impressionLength:(id)length;
- (void)logImpressionWithUserInfo:(id)info position:(unsigned long long)position impressionLength:(id)length socialContext:(id)context numFacepiles:(long long)facepiles;
- (void)logViewpointImpressionWithUserInfo:(id)info;
- (void)logClickWithUserInfo:(id)info position:(unsigned long long)position;
- (void)logDismissWithUserInfo:(id)info position:(unsigned long long)position;
- (void)logFollowWithUserInfo:(id)info position:(unsigned long long)position;
- (void)logAcceptFollowRequestWithUserInfo:(id)info position:(unsigned long long)position;
- (void)logDeclineFollowRequestWithUserInfo:(id)info position:(unsigned long long)position;
- (void)logUnblockWithUserInfo:(id)info position:(unsigned long long)position;
- (void)logSeeAllTap;
@end

#endif /* IGFollowListLogger_h */
