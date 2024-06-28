//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksNetegoEnvironment_h
#define IGBloksNetegoEnvironment_h
@import Foundation;

@protocol {unordered_map<long, void (^)(IGBloksNetegoContext *), std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, void (^)(IGBloksNetegoContext *)>>>="__table_"{__hash_table<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, std::hash<long>, std::equal_to<long>>, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, std::equal_to<long>, std::hash<long>>, std::allocator<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, std::hash<long>, std::equal_to<long>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, std::equal_to<long>, std::hash<long>>>="__value_"f}}};

@interface IGBloksNetegoEnvironment : NSObject {
  /* instance variables */
  struct unordered_map<long, void (^)(IGBloksNetegoContext *), std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, void (^)(IGBloksNetegoContext *)>>> { struct __hash_table<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, std::hash<long>, std::equal_to<long>>, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, std::equal_to<long>, std::hash<long>>, std::allocator<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, std::hash<long>, std::equal_to<long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, void (^)(IGBloksNetegoContext *)>, std::equal_to<long>, std::hash<long>>> { float __value_; } __p3_; } __table_; } _callbacks;
}

/* instance methods */
@end

#endif /* IGBloksNetegoEnvironment_h */
