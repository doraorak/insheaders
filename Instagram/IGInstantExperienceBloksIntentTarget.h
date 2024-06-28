//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInstantExperienceBloksIntentTarget_h
#define IGInstantExperienceBloksIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGIXBloksLoggingContext.h"

@class NSDictionary, NSString, NSURL;

@interface IGInstantExperienceBloksIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *adType;
@property (readonly, nonatomic) NSString *serverParams;
@property (readonly, nonatomic) NSURL *destinationURL;
@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSString *documentID;
@property (readonly, nonatomic) IGIXBloksLoggingContext *loggingContext;
@property (readonly, nonatomic) NSDictionary *clientParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAdType:(id)type serverParams:(id)params destinationURL:(id)url sessionID:(id)id documentID:(id)id loggingContext:(id)context clientParams:(id)params;
@end

#endif /* IGInstantExperienceBloksIntentTarget_h */
