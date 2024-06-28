//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQueueTimeObserver_h
#define IGQueueTimeObserver_h
@import Foundation;

#include "IGQueueTimeObserving-Protocol.h"

@class NSString;
@protocol IGQueueTimeLogging, {unordered_map<NSString *, IGPrefetchState, NSStringHash, NSStringEqual, std::allocator<std::pair<NSString *const, IGPrefetchState>>>="__table_"{__hash_table<std::__hash_value_type<NSString *, IGPrefetchState>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, IGPrefetchState>, NSStringHash, NSStringEqual>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, IGPrefetchState>, NSStringEqual, NSStringHash>, std::allocator<std::__hash_value_type<NSString *, IGPrefetchState>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, IGPrefetchState>, NSStringHash, NSStringEqual>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, IGPrefetchState>, NSStringEqual, NSStringHash>>="__value_"f}}};

@interface IGQueueTimeObserver : NSObject<IGQueueTimeObserving> {
  /* instance variables */
  NSObject<IGQueueTimeLogging> *_logger;
  struct unordered_map<NSString *, IGPrefetchState, NSStringHash, NSStringEqual, std::allocator<std::pair<NSString *const, IGPrefetchState>>> { struct __hash_table<std::__hash_value_type<NSString *, IGPrefetchState>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, IGPrefetchState>, NSStringHash, NSStringEqual>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, IGPrefetchState>, NSStringEqual, NSStringHash>, std::allocator<std::__hash_value_type<NSString *, IGPrefetchState>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, IGPrefetchState>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, IGPrefetchState>, NSStringHash, NSStringEqual>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, IGPrefetchState>, NSStringEqual, NSStringHash>> { float __value_; } __p3_; } __table_; } _prefetchIdentifierStateMap;
  double _currentBandwidth;
  BOOL _isEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLogger:(id)logger;
- (void)setEnabled:(BOOL)enabled;
- (void)setShouldLogURLS:(BOOL)urls;
- (void)requestDidEnterQueueWithIdentifier:(id)identifier type:(id)type url:(id)url module:(id)module isOnscreen:(BOOL)onscreen;
- (void)setClientQueueAndExecutionSetDataWithEvent:(struct IGRequestQueueLoggerEvent { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; long long x20; long long x21; })event;
- (void)requestDidEnterNetworkWithIdentifier:(id)identifier;
- (void)requestDidFinishWithIdentifier:(id)identifier;
- (void)estimatedBandwidthInKilobytesPerSecondDidChange:(double)change lastMeasurement:(id)measurement;
@end

#endif /* IGQueueTimeObserver_h */
