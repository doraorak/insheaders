//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUpcomingEventStickerModel_h
#define IGUpcomingEventStickerModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGUpcomingEventStickerModel : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long ctaType;
@property (readonly, nonatomic) double startUnixTimestamp;
@property (readonly, nonatomic) double endUnixTimestamp;
@property (readonly, nonatomic) BOOL reminderEnabled;
@property (readonly, nonatomic) BOOL isDynamicCTA;
@property (readonly, nonatomic) BOOL isCondensedCardStyle;
@property (readonly, copy, nonatomic) NSString *actionText;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithPk:(id)pk title:(id)title ctaType:(long long)type startUnixTimestamp:(double)timestamp endUnixTimestamp:(double)timestamp reminderEnabled:(BOOL)enabled isDynamicCTA:(BOOL)cta isCondensedCardStyle:(BOOL)style actionText:(id)text;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGUpcomingEventStickerModel_h */
