//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTDeliveryReceiptResponse_h
#define FBMQTTDeliveryReceiptResponse_h
@import Foundation;

#include "TBaseStruct.h"
#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSString;

@interface FBMQTTDeliveryReceiptResponse : TBaseStruct<TBase, NSCoding> {
  /* instance variables */
  long long __thrift_batchId;
  BOOL __thrift_isSuccess;
  BOOL __thrift_isRetryable;
  NSString *__thrift_errorMessage;
  BOOL __thrift_batchId_set;
  BOOL __thrift_isSuccess_set;
  BOOL __thrift_isRetryable_set;
  BOOL __thrift_errorMessage_set;
}

@property (nonatomic) long long batchId;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isRetryable;
@property (retain, nonatomic) NSString *errorMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithBatchId:(long long)id isSuccess:(BOOL)success isRetryable:(BOOL)retryable errorMessage:(id)message;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (id)toDict;
- (BOOL)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBMQTTDeliveryReceiptResponse_h */