//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGListWorkingRangeHandler_h
#define IGListWorkingRangeHandler_h
@import Foundation;

@protocol {unordered_set<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::allocator<_IGListWorkingRangeHandlerIndexPath>>="__table_"{__hash_table<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::allocator<_IGListWorkingRangeHandlerIndexPath>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *>, std::allocator<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *>>>="__value_"{__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, _IGListWorkingRangeHandlerIndexPathHash>="__value_"Q}"__p3_"{__compressed_pair<float, std::equal_to<_IGListWorkingRangeHandlerIndexPath>>="__value_"f}}}, {unordered_set<_IGListWorkingRangeHandlerSectionControllerWrapper, _IGListWorkingRangeHashID, std::equal_to<_IGListWorkingRangeHandlerSectionControllerWrapper>, std::allocator<_IGListWorkingRangeHandlerSectionControllerWrapper>>="__table_"{__hash_table<_IGListWorkingRangeHandlerSectionControllerWrapper, _IGListWorkingRangeHashID, std::equal_to<_IGListWorkingRangeHandlerSectionControllerWrapper>, std::allocator<_IGListWorkingRangeHandlerSectionControllerWrapper>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *>, std::allocator<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *>>>="__value_"{__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, _IGListWorkingRangeHashID>="__value_"Q}"__p3_"{__compressed_pair<float, std::equal_to<_IGListWorkingRangeHandlerSectionControllerWrapper>>="__value_"f}}};

@interface IGListWorkingRangeHandler : NSObject {
  /* instance variables */
  struct unordered_set<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::allocator<_IGListWorkingRangeHandlerIndexPath>> { struct __hash_table<_IGListWorkingRangeHandlerIndexPath, _IGListWorkingRangeHandlerIndexPathHash, std::equal_to<_IGListWorkingRangeHandlerIndexPath>, std::allocator<_IGListWorkingRangeHandlerIndexPath>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *>, std::allocator<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *>>> { struct __hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerIndexPath, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, _IGListWorkingRangeHandlerIndexPathHash> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<_IGListWorkingRangeHandlerIndexPath>> { float __value_; } __p3_; } __table_; } _visibleSectionIndices;
  struct unordered_set<_IGListWorkingRangeHandlerSectionControllerWrapper, _IGListWorkingRangeHashID, std::equal_to<_IGListWorkingRangeHandlerSectionControllerWrapper>, std::allocator<_IGListWorkingRangeHandlerSectionControllerWrapper>> { struct __hash_table<_IGListWorkingRangeHandlerSectionControllerWrapper, _IGListWorkingRangeHashID, std::equal_to<_IGListWorkingRangeHandlerSectionControllerWrapper>, std::allocator<_IGListWorkingRangeHandlerSectionControllerWrapper>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *>, std::allocator<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *>>> { struct __hash_node_base<std::__hash_node<_IGListWorkingRangeHandlerSectionControllerWrapper, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, _IGListWorkingRangeHashID> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<_IGListWorkingRangeHandlerSectionControllerWrapper>> { float __value_; } __p3_; } __table_; } _workingRangeSectionControllers;
}

@property (readonly, nonatomic) long long workingRangeSize;

/* instance methods */
- (id)initWithWorkingRangeSize:(long long)size;
- (void)willDisplayItemAtIndexPath:(id)path forListAdapter:(id)adapter;
- (void)didEndDisplayingItemAtIndexPath:(id)path forListAdapter:(id)adapter;
- (void)_updateWorkingRangesWithListAdapter:(id)adapter;
@end

#endif /* IGListWorkingRangeHandler_h */
