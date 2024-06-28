//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef GCDAsyncSocketPreBuffer_h
#define GCDAsyncSocketPreBuffer_h
@import Foundation;

@interface GCDAsyncSocketPreBuffer : NSObject {
  /* instance variables */
  char * preBuffer;
  unsigned long long preBufferSize;
  char * readPointer;
  char * writePointer;
}

/* instance methods */
- (id)init;
- (id)initWithCapacity:(unsigned long long)capacity;
- (void)dealloc;
- (void)ensureCapacityForWrite:(unsigned long long)write;
- (unsigned long long)availableBytes;
- (char *)readBuffer;
- (void)getReadBuffer:(char * *)buffer availableBytes:(unsigned long long *)bytes;
- (void)didRead:(unsigned long long)read;
- (unsigned long long)availableSpace;
- (char *)writeBuffer;
- (void)getWriteBuffer:(char * *)buffer availableSpace:(unsigned long long *)space;
- (void)didWrite:(unsigned long long)write;
- (void)reset;
@end

#endif /* GCDAsyncSocketPreBuffer_h */