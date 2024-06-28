//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef TMemoryBuffer_h
#define TMemoryBuffer_h
@import Foundation;

#include "TTransport-Protocol.h"

@class NSMutableData, NSString;

@interface TMemoryBuffer : NSObject<TTransport> {
  /* instance variables */
  NSMutableData *mBuffer;
  unsigned long long mOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (int)readAll:(char *)all offset:(int)offset length:(int)length;
- (void)write:(const char *)write offset:(unsigned int)offset length:(unsigned int)length;
- (void)flush;
- (id)getBuffer;
- (void)dealloc;
- (unsigned long long)getOffset;
@end

#endif /* TMemoryBuffer_h */