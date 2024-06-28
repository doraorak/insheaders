//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBLifecycleEventBatchWriter_h
#define FBLifecycleEventBatchWriter_h
@import Foundation;

@class NSString;
@protocol {unique_ptr<reliability::MmappedFile, std::default_delete<reliability::MmappedFile>>="__ptr_"{__compressed_pair<reliability::MmappedFile *, std::default_delete<reliability::MmappedFile>>="__value_"^{MmappedFile}}};

@interface FBLifecycleEventBatchWriter : NSObject {
  /* instance variables */
  struct unique_ptr<reliability::MmappedFile, std::default_delete<reliability::MmappedFile>> { struct __compressed_pair<reliability::MmappedFile *, std::default_delete<reliability::MmappedFile>> { struct MmappedFile *__value_; } __ptr_; } _file;
  unsigned int _offset;
  unsigned int _maxPageSize;
  unsigned long long _batchSize;
  unsigned long long _expectedBytesPerBatch;
  NSString *_lifecycleSessionID;
}

/* instance methods */
- (id)initWithBatchSize:(unsigned long long)size expectedBatchBytes:(unsigned long long)bytes lifecycleSessionID:(id)id;
- (void)_clear;
- (void)reset;
@end

#endif /* FBLifecycleEventBatchWriter_h */
