//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MAIAppStoreDismissedAnalytics_h
#define MAIAppStoreDismissedAnalytics_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString;

@interface MAIAppStoreDismissedAnalytics : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) BOOL isPreloadingEnabled;
@property (readonly, nonatomic) BOOL didLoadSucceed;
@property (readonly, nonatomic) double timeSpent;
@property (readonly, nonatomic) double tti;
@property (readonly, nonatomic) double backgroundTime;
@property (readonly, nonatomic) double loadDuration;
@property (readonly, copy, nonatomic) NSError *loadError;
@property (readonly, copy, nonatomic) NSString *iTunesIdentifier;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *presentingSurface;
@property (readonly, copy, nonatomic) NSString *storeType;
@property (readonly, copy, nonatomic) NSDictionary *loadParameters;
@property (readonly, copy, nonatomic) NSArray *trackingNodes;

/* instance methods */
- (id)initWithIsPreloadingEnabled:(BOOL)enabled didLoadSucceed:(BOOL)succeed timeSpent:(double)spent tti:(double)tti backgroundTime:(double)time loadDuration:(double)duration loadError:(id)error iTunesIdentifier:(id)identifier sessionID:(id)id presentingSurface:(id)surface storeType:(id)type loadParameters:(id)parameters trackingNodes:(id)nodes;
@end

#endif /* MAIAppStoreDismissedAnalytics_h */