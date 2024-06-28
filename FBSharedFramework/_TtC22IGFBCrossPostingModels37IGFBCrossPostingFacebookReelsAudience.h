//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGFBCrossPostingModels37IGFBCrossPostingFacebookReelsAudience_h
#define _TtC22IGFBCrossPostingModels37IGFBCrossPostingFacebookReelsAudience_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSString;

@interface _TtC22IGFBCrossPostingModels37IGFBCrossPostingFacebookReelsAudience : NSObject<NSCoding> // (Swift)

@property (nonatomic, readonly) long long audienceType;
@property (nonatomic, readonly) NSString *rawAudienceType;
@property (nonatomic, readonly) NSString *audienceDisplayName;

/* instance methods */
- (id)initWithAudienceType:(long long)type audienceDisplayName:(id)name;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)init;
@end

#endif /* _TtC22IGFBCrossPostingModels37IGFBCrossPostingFacebookReelsAudience_h */