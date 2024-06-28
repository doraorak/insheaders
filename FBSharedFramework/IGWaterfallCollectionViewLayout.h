//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGWaterfallCollectionViewLayout_h
#define IGWaterfallCollectionViewLayout_h
@import Foundation;

#include "UICollectionViewLayout.h"
#include "IGCollectionViewLayoutDataSource-Protocol.h"
#include "IGListCollectionViewLayoutCompatible-Protocol.h"

@class NSString;
@protocol {set<std::pair<long, long>, std::less<std::pair<long, long>>, std::allocator<std::pair<long, long>>>="__tree_"{__tree<std::pair<long, long>, std::less<std::pair<long, long>>, std::allocator<std::pair<long, long>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::pair<long, long>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::less<std::pair<long, long>>>="__value_"Q}}}, {unordered_map<std::pair<long, long>, IGWaterfallLayoutCachedItem, std::hash<IGWaterfallIndexPath>, std::equal_to<std::pair<long, long>>, std::allocator<std::pair<const std::pair<long, long>, IGWaterfallLayoutCachedItem>>>="__table_"{__hash_table<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, std::__unordered_map_hasher<std::pair<long, long>, std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, std::hash<IGWaterfallIndexPath>, std::equal_to<std::pair<long, long>>>, std::__unordered_map_equal<std::pair<long, long>, std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, std::equal_to<std::pair<long, long>>, std::hash<IGWaterfallIndexPath>>, std::allocator<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<std::pair<long, long>, std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, std::hash<IGWaterfallIndexPath>, std::equal_to<std::pair<long, long>>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<std::pair<long, long>, std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, std::equal_to<std::pair<long, long>>, std::hash<IGWaterfallIndexPath>>>="__value_"f}}};

@interface IGWaterfallCollectionViewLayout : UICollectionViewLayout<IGListCollectionViewLayoutCompatible> {
  /* instance variables */
  struct unordered_map<std::pair<long, long>, IGWaterfallLayoutCachedItem, std::hash<IGWaterfallIndexPath>, std::equal_to<std::pair<long, long>>, std::allocator<std::pair<const std::pair<long, long>, IGWaterfallLayoutCachedItem>>> { struct __hash_table<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, std::__unordered_map_hasher<std::pair<long, long>, std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, std::hash<IGWaterfallIndexPath>, std::equal_to<std::pair<long, long>>>, std::__unordered_map_equal<std::pair<long, long>, std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, std::equal_to<std::pair<long, long>>, std::hash<IGWaterfallIndexPath>>, std::allocator<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::pair<long, long>, std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, std::hash<IGWaterfallIndexPath>, std::equal_to<std::pair<long, long>>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::pair<long, long>, std::__hash_value_type<std::pair<long, long>, IGWaterfallLayoutCachedItem>, std::equal_to<std::pair<long, long>>, std::hash<IGWaterfallIndexPath>>> { float __value_; } __p3_; } __table_; } _cachedItems;
  struct set<std::pair<long, long>, std::less<std::pair<long, long>>, std::allocator<std::pair<long, long>>> { struct __tree<std::pair<long, long>, std::less<std::pair<long, long>>, std::allocator<std::pair<long, long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::pair<long, long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<std::pair<long, long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _cachedIndexPaths;
  long long _leadingModifiedSection;
  long long _layoutStyle;
}

@property (nonatomic) struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; } layoutConfig;
@property (readonly, weak, nonatomic) NSObject<IGCollectionViewLayoutDataSource> *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataSource:(id)source layoutConfiguration:(struct IGGridLayoutConfiguration { double x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; double x4; })configuration layoutStyle:(long long)style;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (void)invalidateLayoutWithContext:(id)context;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)didModifySection:(long long)section;
- (struct { unsigned long long x0; unsigned long long x1; })positionForItemAtIndexPath:(id)path;
@end

#endif /* IGWaterfallCollectionViewLayout_h */