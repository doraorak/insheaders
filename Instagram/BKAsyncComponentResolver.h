//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKAsyncComponentResolver_h
#define BKAsyncComponentResolver_h
@import Foundation;

#include "NSObject-Protocol.h"

@class BKObjectSet, NSMutableDictionary, NSMutableSet, NSString;
@protocol {unordered_map<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>, std::allocator<std::pair<const id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>>>="__table_"{__hash_table<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, std::__unordered_map_hasher<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>, std::__unordered_map_equal<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, FB::EqualFunctor<NSObject *>, FB::HashFunctor<NSObject *>>, std::allocator<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, FB::EqualFunctor<NSObject *>, FB::HashFunctor<NSObject *>>>="__value_"f}}}, {unordered_map<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>, std::allocator<std::pair<const id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>>>="__table_"{__hash_table<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, std::__unordered_map_hasher<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>, std::__unordered_map_equal<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, FB::EqualFunctor<NSObject *>, FB::HashFunctor<NSObject *>>, std::allocator<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, FB::EqualFunctor<NSObject *>, FB::HashFunctor<NSObject *>>>="__value_"f}}};

@interface BKAsyncComponentResolver : NSObject<NSObject> {
  /* instance variables */
  id /* block */ _treeUpdater;
  BKObjectSet *_objectSet;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _mutex;
  NSMutableDictionary *_subscriptions;
  NSMutableSet *_completedQueries;
  struct unordered_map<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>, std::allocator<std::pair<const id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>>> { struct __hash_table<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, std::__unordered_map_hasher<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>, std::__unordered_map_equal<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, FB::EqualFunctor<NSObject *>, FB::HashFunctor<NSObject *>>, std::allocator<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, (anonymous namespace)::PendingResponse>, FB::EqualFunctor<NSObject *>, FB::HashFunctor<NSObject *>>> { float __value_; } __p3_; } __table_; } _pendingResponses;
  struct unordered_map<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>, std::allocator<std::pair<const id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>>> { struct __hash_table<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, std::__unordered_map_hasher<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>, std::__unordered_map_equal<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, FB::EqualFunctor<NSObject *>, FB::HashFunctor<NSObject *>>, std::allocator<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<id<BKComponentQueryID>, std::__hash_value_type<id<BKComponentQueryID>, std::unordered_set<id<BKComponentQueryID>, FB::HashFunctor<NSObject *>, FB::EqualFunctor<NSObject *>>>, FB::EqualFunctor<NSObject *>, FB::HashFunctor<NSObject *>>> { float __value_; } __p3_; } __table_; } _pendingDepsGraph;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUpdatesHandler:(id /* block */)handler objectSet:(id)set;
- (struct BKTreeUpdates { struct vector<BKTreeManagerModification, std::allocator<BKTreeManagerModification>> { struct BKTreeManagerModification * x0; struct BKTreeManagerModification * x1; struct __compressed_pair<BKTreeManagerModification *, std::allocator<BKTreeManagerModification>> { struct BKTreeManagerModification * x0; } x2; } x0; id x1; })processTreeResource:(id)resource environment:(id)environment;
@end

#endif /* BKAsyncComponentResolver_h */