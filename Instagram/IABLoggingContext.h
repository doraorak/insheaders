//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABLoggingContext_h
#define IABLoggingContext_h
@import Foundation;

#include "IABAdsContext.h"

@class NSArray, NSNumber, NSString;

@interface IABLoggingContext : NSObject

@property (nonatomic) BOOL isAds;
@property (copy, nonatomic) NSString *browserMetricsJoinKey;
@property (copy, nonatomic) NSString *trackingToken;
@property (copy, nonatomic) NSArray *trackingCodes;
@property (copy, nonatomic) NSArray *trackingNodes;
@property (nonatomic) BOOL isCrashed;
@property (nonatomic) BOOL isRecoveredFromCrash;
@property (nonatomic) BOOL iawPolicyZonesEnabled;
@property (nonatomic) BOOL isMobileFalcoPolicyEnabled;
@property (retain, nonatomic) IABAdsContext *adsContext;
@property (retain, nonatomic) NSNumber *preservedFromType;
@property (copy, nonatomic) NSString *fromPreservedIabSession;
@property (copy, nonatomic) NSString *viewerSessionID;
@property (copy, nonatomic) NSString *traySessionID;
@property (retain, nonatomic) NSNumber *postID;

/* instance methods */
@end

#endif /* IABLoggingContext_h */
