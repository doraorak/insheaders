//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemPageMediaType_h
#define IGFeedItemPageMediaType_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@protocol UICollectionViewCell<IGFeedItemVideoCellType;

@interface IGFeedItemPageMediaType : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  UICollectionViewCell<IGFeedItemVideoCellType> *_modernVideo_cell;
}

/* class methods */
+ (id)modernVideoWithCell:(id)cell;
+ (id)other;

/* instance methods */
@end

#endif /* IGFeedItemPageMediaType_h */