//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVerticalCollectionViewLayout_h
#define IGVerticalCollectionViewLayout_h
@import Foundation;

#include "UICollectionViewLayout.h"

@class NSMutableDictionary;
@protocol {vector<IGSectionEntry, std::allocator<IGSectionEntry>>="__begin_"^{IGSectionEntry}"__end_"^{IGSectionEntry}"__end_cap_"{__compressed_pair<IGSectionEntry *, std::allocator<IGSectionEntry>>="__value_"^{IGSectionEntry}}};

@interface IGVerticalCollectionViewLayout : UICollectionViewLayout {
  /* instance variables */
  struct vector<IGSectionEntry, std::allocator<IGSectionEntry>> { struct IGSectionEntry *__begin_; struct IGSectionEntry *__end_; struct __compressed_pair<IGSectionEntry *, std::allocator<IGSectionEntry>> { struct IGSectionEntry *__value_; } __end_cap_; } _sectionData;
  NSMutableDictionary *_attributesCache;
  BOOL _cachedLayoutInvalid;
  NSMutableDictionary *_headerAttributesCache;
  NSMutableDictionary *_borderAttributesCache;
  double _stickyHeaderOriginYAdjustment;
  double _topContentInset;
}

/* class methods */
+ (Class)invalidationContextClass;

/* instance methods */
- (id)initWithTopContentInset:(double)inset;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)path;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)path;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (id)layoutAttributesForDecorationViewOfKind:(id)kind atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)invalidateLayoutWithContext:(id)context;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)prepareLayout;
@end

#endif /* IGVerticalCollectionViewLayout_h */