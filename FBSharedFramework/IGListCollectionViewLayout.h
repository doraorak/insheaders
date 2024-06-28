//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGListCollectionViewLayout_h
#define IGListCollectionViewLayout_h
@import Foundation;

#include "UICollectionViewLayout.h"
#include "IGListCollectionViewLayoutCompatible-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol {vector<IGListSectionEntry, std::allocator<IGListSectionEntry>>="__begin_"^{IGListSectionEntry}"__end_"^{IGListSectionEntry}"__end_cap_"{__compressed_pair<IGListSectionEntry *, std::allocator<IGListSectionEntry>>="__value_"^{IGListSectionEntry}}};

@interface IGListCollectionViewLayout : UICollectionViewLayout<IGListCollectionViewLayoutCompatible> {
  /* instance variables */
  struct vector<IGListSectionEntry, std::allocator<IGListSectionEntry>> { struct IGListSectionEntry *__begin_; struct IGListSectionEntry *__end_; struct __compressed_pair<IGListSectionEntry *, std::allocator<IGListSectionEntry>> { struct IGListSectionEntry *__value_; } __end_cap_; } _sectionData;
  NSMutableDictionary *_attributesCache;
  long long _minimumInvalidatedSection;
  NSMutableDictionary *_supplementaryAttributesCache;
}

@property (readonly, nonatomic) BOOL stickyHeaders;
@property (readonly, nonatomic) double topContentInset;
@property (readonly, nonatomic) BOOL stretchToEdge;
@property (readonly, nonatomic) long long scrollDirection;
@property (nonatomic) double stickyHeaderYOffset;
@property (nonatomic) BOOL showHeaderWhenEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)invalidationContextClass;

/* instance methods */
- (id)initWithStickyHeaders:(BOOL)headers topContentInset:(double)inset stretchToEdge:(BOOL)edge;
- (id)initWithStickyHeaders:(BOOL)headers scrollDirection:(long long)direction topContentInset:(double)inset stretchToEdge:(BOOL)edge;
- (id)initWithCoder:(id)coder;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)path;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)path;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)context;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)prepareLayout;
- (id)_classNameForDelegate:(id)delegate sectionIndex:(long long)index;
- (void)_calculateLayoutIfNeeded;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfSectionsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_resetSupplementaryAttributesCache;
- (void)didModifySection:(long long)section;
@end

#endif /* IGListCollectionViewLayout_h */
