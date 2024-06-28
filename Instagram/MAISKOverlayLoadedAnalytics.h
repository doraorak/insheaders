//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MAISKOverlayLoadedAnalytics_h
#define MAISKOverlayLoadedAnalytics_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDictionary, NSError, NSString;

@interface MAISKOverlayLoadedAnalytics : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSDictionary *loadParameters;
@property (readonly, nonatomic) double loadStartTime;
@property (readonly, nonatomic) double loadEndTime;
@property (readonly, nonatomic) BOOL didLoadSucceed;
@property (readonly, copy, nonatomic) NSString *iTunesIdentifier;
@property (readonly, copy, nonatomic) NSError *loadError;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *presentingSurface;
@property (readonly, copy, nonatomic) NSString *storeType;

/* instance methods */
- (id)initWithLoadParameters:(id)parameters loadStartTime:(double)time loadEndTime:(double)time didLoadSucceed:(BOOL)succeed iTunesIdentifier:(id)identifier loadError:(id)error sessionID:(id)id presentingSurface:(id)surface storeType:(id)type;
@end

#endif /* MAISKOverlayLoadedAnalytics_h */