//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewerCubeLayout_h
#define IGStoryViewerCubeLayout_h
@import Foundation;

#include "UICollectionViewFlowLayout.h"
#include "IGUserSession.h"

@protocol IGStoryViewerLayoutDelegate;

@interface IGStoryViewerCubeLayout : UICollectionViewFlowLayout {
  /* instance variables */
  NSObject<IGStoryViewerLayoutDelegate> *_delegate;
  IGUserSession *_userSession;
}

/* class methods */
+ (Class)layoutAttributesClass;

/* instance methods */
- (id)initWithDelegate:(id)delegate userSession:(id)session;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)path;
@end

#endif /* IGStoryViewerCubeLayout_h */