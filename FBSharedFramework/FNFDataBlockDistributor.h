//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFDataBlockDistributor_h
#define FNFDataBlockDistributor_h
@import Foundation;

@protocol FBDataBlockConsumer, {map<FBDataSegment, NSData *, cmpOfDataSegment, std::allocator<std::pair<const FBDataSegment, NSData *>>>="__tree_"{__tree<std::__value_type<FBDataSegment, NSData *>, std::__map_value_compare<FBDataSegment, std::__value_type<FBDataSegment, NSData *>, cmpOfDataSegment>, std::allocator<std::__value_type<FBDataSegment, NSData *>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<FBDataSegment, NSData *>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<FBDataSegment, std::__value_type<FBDataSegment, NSData *>, cmpOfDataSegment>>="__value_"Q}}};

@interface FNFDataBlockDistributor : NSObject {
  /* instance variables */
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _lock;
  struct map<FBDataSegment, NSData *, cmpOfDataSegment, std::allocator<std::pair<const FBDataSegment, NSData *>>> { struct __tree<std::__value_type<FBDataSegment, NSData *>, std::__map_value_compare<FBDataSegment, std::__value_type<FBDataSegment, NSData *>, cmpOfDataSegment>, std::allocator<std::__value_type<FBDataSegment, NSData *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<FBDataSegment, NSData *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<FBDataSegment, std::__value_type<FBDataSegment, NSData *>, cmpOfDataSegment>> { unsigned long long __value_; } __pair3_; } __tree_; } _dataSegments;
  BOOL activeHeads[3];
  unsigned long long starvingHeads[3];
  unsigned long long heads[3];
  char * stitches[3];
  BOOL _shouldCacheLoadedData;
}

@property (weak, nonatomic) NSObject<FBDataBlockConsumer> *consumer;
@property (nonatomic) BOOL allowsToDecreaseHead;

/* instance methods */
- (id)initWithShouldCacheLoadedData:(BOOL)data;
- (id)description;
- (void)deliverData:(id)data withOffset:(unsigned long long)offset;
- (void)moveHeadTo:(unsigned long long)to withHeadType:(unsigned long long)type;
- (void)moveHeadTo:(unsigned long long)to withHeadType:(unsigned long long)type allowDataPurge:(BOOL)purge;
- (const char *)_unlockedBytesAtHead:(unsigned long long)head withHeadType:(unsigned long long)type;
- (unsigned long long)offsetForHeadType:(unsigned long long)type;
- (void)dealloc;
@end

#endif /* FNFDataBlockDistributor_h */