//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC23IGGalleryZoomableLayout47IGGalleryZoomableCollectionViewTransitionLayout_h
#define _TtC23IGGalleryZoomableLayout47IGGalleryZoomableCollectionViewTransitionLayout_h
@import Foundation;

#include "UICollectionViewTransitionLayout.h"

@interface _TtC23IGGalleryZoomableLayout47IGGalleryZoomableCollectionViewTransitionLayout : UICollectionViewTransitionLayout { // (Swift)
  /* instance variables */
   targetIndexPath;
   originalContentOffset;
   newContentOffset;
   visibleIndexPaths;
   cachedAttributesRange;
   snapshots;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)prepareForTransitionFromLayout:(id)layout;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)initWithCurrentLayout:(id)layout nextLayout:(id)layout;
@end

#endif /* _TtC23IGGalleryZoomableLayout47IGGalleryZoomableCollectionViewTransitionLayout_h */
