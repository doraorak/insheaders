//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGFBCrossPostingModels43IGFBCrossPostingFacebookDestinationIdentity_h
#define _TtC22IGFBCrossPostingModels43IGFBCrossPostingFacebookDestinationIdentity_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSString;

@interface _TtC22IGFBCrossPostingModels43IGFBCrossPostingFacebookDestinationIdentity : NSObject<NSCoding> // (Swift)

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) long long destinationType;

/* instance methods */
- (id)initWithId:(id)id destinationType:(long long)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;
@end

#endif /* _TtC22IGFBCrossPostingModels43IGFBCrossPostingFacebookDestinationIdentity_h */