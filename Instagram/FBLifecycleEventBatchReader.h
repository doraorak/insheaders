//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBLifecycleEventBatchReader_h
#define FBLifecycleEventBatchReader_h
@import Foundation;

@class NSString;

@interface FBLifecycleEventBatchReader : NSObject {
  /* instance variables */
  NSString *_assumedlifecycleSessionID;
  struct __sFILE * _file;
  unsigned int _offset;
}

/* instance methods */
- (id)initWithlifecycleSessionID:(id)id;
- (BOOL)_readBytes:(void *)bytes length:(unsigned int)length;
- (BOOL)_readDouble:(double *)double;
- (BOOL)_readUInt32:(unsigned int *)uint32;
- (id)_readData;
- (id)_readString;
- (BOOL)_readAndValidateHeader;
- (BOOL)_readNextEvent:(void *)event;
- (BOOL)readEventsInto:(void *)into;
@end

#endif /* FBLifecycleEventBatchReader_h */