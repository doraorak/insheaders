//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTDeliveryReceiptBatch_h
#define FBMQTTDeliveryReceiptBatch_h
@import Foundation;

#include "TBaseStruct.h"
#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSMutableArray, NSString;

@interface FBMQTTDeliveryReceiptBatch : TBaseStruct<TBase, NSCoding> {
  /* instance variables */
  NSMutableArray *__thrift_deliveryReceipts;
  long long __thrift_batchId;
  NSString *__thrift_source;
  BOOL __thrift_deliveryReceipts_set;
  BOOL __thrift_batchId_set;
  BOOL __thrift_source_set;
}

@property (retain, nonatomic) NSMutableArray *deliveryReceipts;
@property (nonatomic) long long batchId;
@property (retain, nonatomic) NSString *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithDeliveryReceipts:(id)receipts batchId:(long long)id source:(id)source;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)sourceIsSet;
- (void)read:(id)read;
- (void)write:(id)write;
- (id)toDict;
- (BOOL)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBMQTTDeliveryReceiptBatch_h */