//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksStaggeredGridCollectionViewFlowLayout_h
#define BKBloksStaggeredGridCollectionViewFlowLayout_h
@import Foundation;

#include "UICollectionViewLayout.h"

@protocol {unordered_map<long, StaggeredGridCellLayoutAttributes *, std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, StaggeredGridCellLayoutAttributes *>>>="__table_"{__hash_table<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, std::__unordered_map_hasher<long, std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, std::hash<long>, std::equal_to<long>>, std::__unordered_map_equal<long, std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, std::equal_to<long>, std::hash<long>>, std::allocator<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, std::hash<long>, std::equal_to<long>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, std::equal_to<long>, std::hash<long>>>="__value_"f}}};

@interface BKBloksStaggeredGridCollectionViewFlowLayout : UICollectionViewLayout {
  /* instance variables */
  struct CGSize { double width; double height; } _collectionViewContentSize;
  struct CGSize { double width; double height; } _cachedCollectionViewContentSize;
  struct unordered_map<long, StaggeredGridCellLayoutAttributes *, std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, StaggeredGridCellLayoutAttributes *>>> { struct __hash_table<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, std::__unordered_map_hasher<long, std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, std::hash<long>, std::equal_to<long>>, std::__unordered_map_equal<long, std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, std::equal_to<long>, std::hash<long>>, std::allocator<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, std::hash<long>, std::equal_to<long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, StaggeredGridCellLayoutAttributes *>, std::equal_to<long>, std::hash<long>>> { float __value_; } __p3_; } __table_; } _cachedCellLayoutAttributes;
  long long _minimumInvalidatedItemIndex;
}

/* instance methods */
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)prepareForCollectionViewUpdates:(id)updates;
- (void)_clearCachedCellLayoutAttributesIfNeeded;
- (struct BKStaggeredGridLayoutWithAttributeConfigurator { id x0; struct CGSize { double x0; double x1; } x1; unsigned long long x2; id x3; id /* block */ x4; unsigned long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; id x7; })_staggeredGridLayoutConfiguratorForType:(unsigned long long)type rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect indexpath:(id)indexpath;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })_staggeredGridCollectionContentSizeForConfigurator:(struct BKStaggeredGridLayoutWithAttributeConfigurator { id x0; struct CGSize { double x0; double x1; } x1; unsigned long long x2; id x3; id /* block */ x4; unsigned long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; id x7; })configurator calculatedContentSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* BKBloksStaggeredGridCollectionViewFlowLayout_h */
