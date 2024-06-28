//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIGLUFilterMediaEffectRenderer_h
#define IGIGLUFilterMediaEffectRenderer_h
@import Foundation;

#include "IGIGLUFilterMediaEffect.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol {shared_ptr<igl::IDevice>="__ptr_"^{IDevice}"__cntrl_"^{__shared_weak_count}}, {unordered_map<std::string, std::shared_ptr<iglu::filterkit::IFilter>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<iglu::filterkit::IFilter>>>>="__table_"{__hash_table<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, std::hash<std::string>, std::equal_to<std::string>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, std::equal_to<std::string>, std::hash<std::string>>>="__value_"f}}};

@interface IGIGLUFilterMediaEffectRenderer : NSObject<NSObject> {
  /* instance variables */
  struct shared_ptr<igl::IDevice> { struct IDevice *__ptr_; struct __shared_weak_count *__cntrl_; } _iglDevice;
  IGIGLUFilterMediaEffect *_srcEffect;
  struct unordered_map<std::string, std::shared_ptr<iglu::filterkit::IFilter>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<iglu::filterkit::IFilter>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<iglu::filterkit::IFilter>>, std::equal_to<std::string>, std::hash<std::string>>> { float __value_; } __p3_; } __table_; } _renderableResource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)shouldRenderEffectForTime:(double)time;
- (BOOL)renderEffectWithSourceTexture:(struct __CVBuffer *)texture time:(double)time outputTexture:(struct __CVBuffer *)texture;
@end

#endif /* IGIGLUFilterMediaEffectRenderer_h */