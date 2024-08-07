//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTClientConfiguration_h
#define FBMQTTClientConfiguration_h
@import Foundation;

#include "FBValueObject.h"
#include "FBMQTTSocketConfig.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface FBMQTTClientConfiguration : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) NSString *regionPreference;
@property (readonly, copy, nonatomic) FBMQTTSocketConfig *socketConfig;
@property (readonly, copy, nonatomic) NSString *clientType;
@property (readonly, copy, nonatomic) NSString *connectionMergeHost;
@property (readonly, copy, nonatomic) NSString *connectionMergeHostCname;
@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, copy, nonatomic) NSURL *PACFileCheckURL;

/* instance methods */
- (id)initWithClientID:(id)id regionPreference:(id)preference socketConfig:(id)config clientType:(id)type connectionMergeHost:(id)host connectionMergeHostCname:(id)cname appID:(id)id PACFileCheckURL:(id)url;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FBMQTTClientConfiguration_h */
