//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAppJobsTriggerState_h
#define FBAppJobsTriggerState_h
@import Foundation;

@protocol {unordered_set<FBAppJobsTriggerType, std::hash<FBAppJobsTriggerType>, std::equal_to<FBAppJobsTriggerType>, std::allocator<FBAppJobsTriggerType>>="__table_"{__hash_table<FBAppJobsTriggerType, std::hash<FBAppJobsTriggerType>, std::equal_to<FBAppJobsTriggerType>, std::allocator<FBAppJobsTriggerType>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *>, std::allocator<std::__hash_node<FBAppJobsTriggerType, void *>>>="__value_"{__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::hash<FBAppJobsTriggerType>>="__value_"Q}"__p3_"{__compressed_pair<float, std::equal_to<FBAppJobsTriggerType>>="__value_"f}}};

@interface FBAppJobsTriggerState : NSObject {
  /* instance variables */
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _lock;
  struct unordered_set<FBAppJobsTriggerType, std::hash<FBAppJobsTriggerType>, std::equal_to<FBAppJobsTriggerType>, std::allocator<FBAppJobsTriggerType>> { struct __hash_table<FBAppJobsTriggerType, std::hash<FBAppJobsTriggerType>, std::equal_to<FBAppJobsTriggerType>, std::allocator<FBAppJobsTriggerType>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *>, std::allocator<std::__hash_node<FBAppJobsTriggerType, void *>>> { struct __hash_node_base<std::__hash_node<FBAppJobsTriggerType, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<FBAppJobsTriggerType>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<FBAppJobsTriggerType>> { float __value_; } __p3_; } __table_; } _state_use_lock;
  int _instanceKey;
  const struct AppJobsTriggerStateSocketPluginData * _plugin;
}

/* instance methods */
- (id)initWithInstanceKey:(int)key;
- (BOOL)hasAlreadyBeenTriggered:(int)triggered;
- (void)markTriggered:(int)triggered metadata:(id)metadata;
- (void)reset;
@end

#endif /* FBAppJobsTriggerState_h */
