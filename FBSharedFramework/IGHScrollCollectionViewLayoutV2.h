//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHScrollCollectionViewLayoutV2_h
#define IGHScrollCollectionViewLayoutV2_h
@import Foundation;

#include "UICollectionViewFlowLayout.h"
#include "IGHScrollCollectionViewLayoutProtocol-Protocol.h"

@class NSString;

@interface IGHScrollCollectionViewLayoutV2 : UICollectionViewFlowLayout<IGHScrollCollectionViewLayoutProtocol> {
  /* instance variables */
  BOOL _centersCellsWhenPaging;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCentersCellsWhenPaging:(BOOL)paging;
- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)index;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset withScrollingVelocity:(struct CGPoint { double x0; double x1; })velocity;
@end

#endif /* IGHScrollCollectionViewLayoutV2_h */
