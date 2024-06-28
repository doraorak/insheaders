//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEmojiModel_h
#define IGEmojiModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface IGEmojiModel : NSObject<IGListDiffable, NSCopying, NSSecureCoding> {
  /* instance variables */
  NSString *_plainTextName;
}

@property (readonly, copy, nonatomic) NSString *emojiUnicode;
@property (copy, nonatomic) NSString *customDiffIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEmojiUnicode:(id)unicode;
- (id)initWithEmojiUnicode:(id)unicode plainTextName:(id)name;
- (id)initWithJSON:(id)json;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGEmojiModel_h */
