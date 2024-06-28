//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAREffectLoggingInfo_h
#define FBAREffectLoggingInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString, NSUUID;

@interface FBAREffectLoggingInfo : NSObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSUUID *operationsUniqueID;
@property (readonly, copy, nonatomic) NSString *effectID;
@property (readonly, copy, nonatomic) NSString *effectInstanceID;
@property (readonly, copy, nonatomic) NSUUID *effectSessionID;
@property (readonly, nonatomic) BOOL loggingEnabled;
@property (readonly, nonatomic) BOOL preload;
@property (readonly, copy, nonatomic) NSString *productName;
@property (readonly, copy, nonatomic) NSString *productSessionID;
@property (readonly, copy, nonatomic) NSString *requestSource;
@property (readonly, copy, nonatomic) NSString *oneCameraActiveSessionID;
@property (readonly, nonatomic) BOOL isLegacyEffect;

/* instance methods */
- (id)initWithOperationsUniqueID:(id)id effectID:(id)id effectInstanceID:(id)id effectSessionID:(id)id loggingEnabled:(BOOL)enabled preload:(BOOL)preload productName:(id)name productSessionID:(id)id requestSource:(id)source;
- (id)initWithOperationsUniqueID:(id)id effectID:(id)id effectInstanceID:(id)id effectSessionID:(id)id loggingEnabled:(BOOL)enabled preload:(BOOL)preload productName:(id)name productSessionID:(id)id requestSource:(id)source isLegacyEffect:(BOOL)effect;
- (id)initWithOperationsUniqueID:(id)id effectID:(id)id effectInstanceID:(id)id effectSessionID:(id)id loggingEnabled:(BOOL)enabled preload:(BOOL)preload productName:(id)name productSessionID:(id)id requestSource:(id)source oneCameraActiveSessionID:(id)id isLegacyEffect:(BOOL)effect;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FBAREffectLoggingInfo_h */