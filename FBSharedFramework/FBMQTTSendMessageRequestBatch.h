//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTSendMessageRequestBatch_h
#define FBMQTTSendMessageRequestBatch_h
@import Foundation;

#include "TBaseStruct.h"
#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSMutableArray, NSString;

@interface FBMQTTSendMessageRequestBatch : TBaseStruct<TBase, NSCoding> {
  /* instance variables */
  long long __thrift_batchId;
  NSString *__thrift_fbTraceMeta;
  NSMutableArray *__thrift_requests;
  BOOL __thrift_batchId_set;
  BOOL __thrift_fbTraceMeta_set;
  BOOL __thrift_requests_set;
}

@property (nonatomic) long long batchId;
@property (retain, nonatomic) NSString *fbTraceMeta;
@property (retain, nonatomic) NSMutableArray *requests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithBatchId:(long long)id fbTraceMeta:(id)meta requests:(id)requests;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (id)toDict;
- (BOOL)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBMQTTSendMessageRequestBatch_h */
