//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingProductSelectionBehavior_h
#define IGShoppingProductSelectionBehavior_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGShoppingProductTaggingCollectionInfoMetadata.h"

@class NSString;

@interface IGShoppingProductSelectionBehavior : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_story_stickerStyleValue;
  IGShoppingProductTaggingCollectionInfoMetadata *_feedPost_collectionInfoMetadata;
}

/* class methods */
+ (id)feedPostWithCollectionInfoMetadata:(id)metadata;
+ (id)storyWithStickerStyleValue:(id)value;

/* instance methods */
@end

#endif /* IGShoppingProductSelectionBehavior_h */
