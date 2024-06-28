//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemRow_h
#define IGFeedItemRow_h
@import Foundation;

#include "IGFeedItemRowIdentifier.h"
#include "IGListDiffable-Protocol.h"

@interface IGFeedItemRow : NSObject<IGListDiffable> {
  /* instance variables */
  IGFeedItemRowIdentifier *_identifier;
  unsigned long long _hash;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) long long textType;
@property (readonly, nonatomic) id value;

/* instance methods */
- (id)initWithType:(int)type;
- (id)initWithType:(int)type value:(id)value;
- (id)initWithType:(int)type textType:(long long)type;
- (id)initWithType:(int)type textType:(long long)type value:(id)value;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGFeedItemRow_h */