//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTThreadKey_h
#define FBMQTTThreadKey_h
@import Foundation;

#include "TBaseStruct.h"
#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSString;

@interface FBMQTTThreadKey : TBaseStruct<TBase, NSCoding> {
  /* instance variables */
  NSString *__thrift_threadId;
  int __thrift_threadType;
  BOOL __thrift_threadId_set;
  BOOL __thrift_threadType_set;
}

@property (retain, nonatomic) NSString *threadId;
@property (nonatomic) int threadType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithThreadId:(id)id threadType:(int)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (id)toDict;
- (BOOL)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBMQTTThreadKey_h */
