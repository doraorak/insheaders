//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdMetadataItem_h
#define IGAdMetadataItem_h
@import Foundation;

#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface IGAdMetadataItem : NSObject<NSCoding, IGListDiffable> {
  /* instance variables */
  unsigned long long _type;
  NSString *_text;
  NSString *_strikethroughText;
  NSString *_destinationAdText;
}

@property (retain, nonatomic) NSNumber *appStoreRating;

/* instance methods */
- (id)initWithType:(unsigned long long)type text:(id)text appStoreRating:(id)rating strikethroughText:(id)text destinationAdText:(id)text;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (unsigned long long)type;
- (id)text;
@end

#endif /* IGAdMetadataItem_h */
