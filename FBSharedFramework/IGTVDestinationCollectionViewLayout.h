//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVDestinationCollectionViewLayout_h
#define IGTVDestinationCollectionViewLayout_h
@import Foundation;

#include "IGListCollectionViewLayout.h"

@interface IGTVDestinationCollectionViewLayout : IGListCollectionViewLayout
/* class methods */
+ (Class)layoutAttributesClass;

/* instance methods */
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)path;
@end

#endif /* IGTVDestinationCollectionViewLayout_h */