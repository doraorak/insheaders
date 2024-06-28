//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKErrorRecoveryConfiguration_h
#define FBSDKErrorRecoveryConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface FBSDKErrorRecoveryConfiguration : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *localizedRecoveryDescription;
@property (readonly, nonatomic) NSArray *localizedRecoveryOptionDescriptions;
@property (readonly, nonatomic) unsigned long long errorCategory;
@property (readonly, nonatomic) NSString *recoveryActionName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRecoveryDescription:(id)description optionDescriptions:(id)descriptions category:(unsigned long long)category recoveryActionName:(id)name;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBSDKErrorRecoveryConfiguration_h */