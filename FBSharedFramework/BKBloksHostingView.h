//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksHostingView_h
#define BKBloksHostingView_h
@import Foundation;

#include "UIView.h"
#include "BKHostController.h"
#include "NSObject-Protocol.h"

@class NSString, UIView;
@protocol BKBloksHostingViewDelegate, {Optional<(anonymous namespace)::LayoutReason>="_storage"{Storage<(anonymous namespace)::LayoutReason, true, true, true>="hasValue"I"value"i}}, {unordered_map<(anonymous namespace)::LayoutReason, int, std::hash<(anonymous namespace)::LayoutReason>, std::equal_to<(anonymous namespace)::LayoutReason>, std::allocator<std::pair<const (anonymous namespace)::LayoutReason, int>>>="__table_"{__hash_table<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, std::__unordered_map_hasher<(anonymous namespace)::LayoutReason, std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, std::hash<(anonymous namespace)::LayoutReason>, std::equal_to<(anonymous namespace)::LayoutReason>>, std::__unordered_map_equal<(anonymous namespace)::LayoutReason, std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, std::equal_to<(anonymous namespace)::LayoutReason>, std::hash<(anonymous namespace)::LayoutReason>>, std::allocator<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<(anonymous namespace)::LayoutReason, std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, std::hash<(anonymous namespace)::LayoutReason>, std::equal_to<(anonymous namespace)::LayoutReason>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<(anonymous namespace)::LayoutReason, std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, std::equal_to<(anonymous namespace)::LayoutReason>, std::hash<(anonymous namespace)::LayoutReason>>>="__value_"f}}};

@interface BKBloksHostingView : UIView<NSObject> {
  /* instance variables */
  BKHostController *_hostController;
  UIView *_contentView;
  BOOL _setNeedsLayoutOnInvalidateSizeEnabled;
  BOOL _appTerminationInfoLoggingEnabled;
  struct unordered_map<(anonymous namespace)::LayoutReason, int, std::hash<(anonymous namespace)::LayoutReason>, std::equal_to<(anonymous namespace)::LayoutReason>, std::allocator<std::pair<const (anonymous namespace)::LayoutReason, int>>> { struct __hash_table<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, std::__unordered_map_hasher<(anonymous namespace)::LayoutReason, std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, std::hash<(anonymous namespace)::LayoutReason>, std::equal_to<(anonymous namespace)::LayoutReason>>, std::__unordered_map_equal<(anonymous namespace)::LayoutReason, std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, std::equal_to<(anonymous namespace)::LayoutReason>, std::hash<(anonymous namespace)::LayoutReason>>, std::allocator<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<(anonymous namespace)::LayoutReason, std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, std::hash<(anonymous namespace)::LayoutReason>, std::equal_to<(anonymous namespace)::LayoutReason>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<(anonymous namespace)::LayoutReason, std::__hash_value_type<(anonymous namespace)::LayoutReason, int>, std::equal_to<(anonymous namespace)::LayoutReason>, std::hash<(anonymous namespace)::LayoutReason>>> { float __value_; } __p3_; } __table_; } _layoutReasonToCountMap;
  struct Optional<(anonymous namespace)::LayoutReason> { struct Storage<(anonymous namespace)::LayoutReason, true, true, true> { unsigned int hasValue; int value; } _storage; } _currentLayoutReason;
}

@property (weak, nonatomic) NSObject<BKBloksHostingViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct Optional<RCLayout> { struct Storage<RCLayout, false, false, true> { BOOL x0; union { char x0; struct RCLayout { id x0; struct CGSize { double x0; double x1; } x1; struct shared_ptr<const std::vector<RCLayoutChild>> { void * x0; struct __shared_weak_count * x1; } x2; id x3; } x1; } x1; } x0; })mountedLayout;
- (void)bloksHostController:(id)controller didInvalidateSize:(struct CGSize { double x0; double x1; })size;
- (void)bloksHostControllerDidBind:(id)bind;
- (void)dealloc;
@end

#endif /* BKBloksHostingView_h */