//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadSmartSuggestion_h
#define IGDirectThreadSmartSuggestion_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDirectThreadSmartSuggestionCta.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface IGDirectThreadSmartSuggestion : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSString *requestId;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) IGDirectThreadSmartSuggestionCta *primaryCTA;
@property (readonly, copy, nonatomic) IGDirectThreadSmartSuggestionCta *secondaryCTA;
@property (readonly, copy, nonatomic) NSDictionary *additionalInfo;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithType:(id)type title:(id)title body:(id)body requestId:(id)id source:(id)source primaryCTA:(id)cta secondaryCTA:(id)cta additionalInfo:(id)info;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectThreadSmartSuggestion_h */
