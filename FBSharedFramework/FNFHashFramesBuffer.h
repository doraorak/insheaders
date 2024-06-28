//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFHashFramesBuffer_h
#define FNFHashFramesBuffer_h
@import Foundation;

@protocol {FNFFramesFlatMap<FNFFrameBufferDataInternal>="_circularBuckets"{vector<std::pair<double, FNFFrameBufferDataInternal *>, std::allocator<std::pair<double, FNFFrameBufferDataInternal *>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::pair<double, FNFFrameBufferDataInternal *> *, std::allocator<std::pair<double, FNFFrameBufferDataInternal *>>>="__value_"^v}}"_startIndex"Q"_size"Q"_memoryPool"{FNFFramesFlatMapMemoryPool<FNFFrameBufferDataInternal, 16UL>="_firstNode"^{_PoolNode}"_firstFreeBlock"^(_Block)}};

@interface FNFHashFramesBuffer : NSObject {
  /* instance variables */
  struct FNFFramesFlatMap<FNFFrameBufferDataInternal> { struct vector<std::pair<double, FNFFrameBufferDataInternal *>, std::allocator<std::pair<double, FNFFrameBufferDataInternal *>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<double, FNFFrameBufferDataInternal *> *, std::allocator<std::pair<double, FNFFrameBufferDataInternal *>>> { void *__value_; } __end_cap_; } _circularBuckets; unsigned long long _startIndex; unsigned long long _size; struct FNFFramesFlatMapMemoryPool<FNFFrameBufferDataInternal, 16UL> { struct _PoolNode *_firstNode; union _Block *_firstFreeBlock; } _memoryPool; } _hashBufferDataInternal;
}

/* instance methods */
- (void)dealloc;
- (BOOL)appendFrameData:(struct FNFFrameBufferDataInternal { struct __CVBuffer * x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; long long x3; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x4; })data;
- (int)clearFrameBuffer;
- (int)clearFrameBufferUntilAndIncludingTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)clearFrameBufferUntilFrameIndex:(long long)index;
- (int)currentBufferSize;
- (struct FNFFrameBufferDataInternal { struct __CVBuffer * x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; long long x3; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x4; })findFirstFrame;
- (struct FNFFrameBufferDataInternal { struct __CVBuffer * x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; long long x3; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x4; })findNextFrameNearPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time displayBestFrameAvailable:(BOOL)available;
@end

#endif /* FNFHashFramesBuffer_h */
