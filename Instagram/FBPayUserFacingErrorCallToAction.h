//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayUserFacingErrorCallToAction_h
#define FBPayUserFacingErrorCallToAction_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBPayUserFacingErrorCallToAction : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *link;
@property (readonly, nonatomic) long long ctaType;

/* instance methods */
- (id)initWithLabel:(id)label link:(id)link ctaType:(long long)type;
@end

#endif /* FBPayUserFacingErrorCallToAction_h */