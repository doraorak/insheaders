//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoProfilerStaticPlaybackData_h
#define IGVideoProfilerStaticPlaybackData_h
@import Foundation;

#include "IGVideoProfilerDashMetadata.h"

@class NSString;

@interface IGVideoProfilerStaticPlaybackData : NSObject

@property (readonly, nonatomic) NSString *mediaId;
@property (readonly, nonatomic) NSString *playerVersion;
@property (readonly, nonatomic) NSString *playerId;
@property (readonly, nonatomic) NSString *playerOrigin;
@property (readonly, nonatomic) NSString *streamingFormat;
@property (readonly, nonatomic) BOOL isLive;
@property (readonly, nonatomic) BOOL isFacebookVideo;
@property (readonly, nonatomic) IGVideoProfilerDashMetadata *dashMetadata;
@property (readonly, nonatomic) NSString *loomTraceID;

/* instance methods */
- (id)initWithMediaId:(id)id playerVersion:(id)version playerId:(id)id playerOrigin:(id)origin streamingFormat:(id)format isLive:(BOOL)live isFacebookVideo:(BOOL)video dashMetadata:(id)metadata loomTraceID:(id)id;
@end

#endif /* IGVideoProfilerStaticPlaybackData_h */
