//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudienceListModel_h
#define IGAudienceListModel_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGAudienceListModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, copy, nonatomic) NSString *listType;
@property (readonly, copy, nonatomic) NSString *listName;
@property (readonly, nonatomic) BOOL isListNamed;
@property (readonly, copy, nonatomic) NSString *emojiIconUnicode;
@property (readonly, nonatomic) unsigned long long memberCount;
@property (readonly, copy, nonatomic) NSArray *socialContextMembers;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary objectStores:(id)stores error:(id *)error;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithPk:(id)pk listType:(id)type listName:(id)name isListNamed:(BOOL)named emojiIconUnicode:(id)unicode memberCount:(unsigned long long)count socialContextMembers:(id)members;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGAudienceListModel_h */
