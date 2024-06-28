//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTTypingFromClientThrift_h
#define FBMQTTTypingFromClientThrift_h
@import Foundation;

#include "TBaseStruct.h"
#include "FBMQTTThreadKey.h"
#include "FBMQTTTypingAttribution.h"
#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSString;

@interface FBMQTTTypingFromClientThrift : TBaseStruct<TBase, NSCoding> {
  /* instance variables */
  long long __thrift_recipient;
  long long __thrift_sender;
  int __thrift_state;
  FBMQTTTypingAttribution *__thrift_attribution;
  FBMQTTThreadKey *__thrift_threadKey;
  BOOL __thrift_recipient_set;
  BOOL __thrift_sender_set;
  BOOL __thrift_state_set;
  BOOL __thrift_attribution_set;
  BOOL __thrift_threadKey_set;
}

@property (nonatomic) long long recipient;
@property (nonatomic) long long sender;
@property (nonatomic) int state;
@property (retain, nonatomic) FBMQTTTypingAttribution *attribution;
@property (retain, nonatomic) FBMQTTThreadKey *threadKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithRecipient:(long long)recipient sender:(long long)sender state:(int)state attribution:(id)attribution threadKey:(id)key;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (id)toDict;
- (BOOL)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBMQTTTypingFromClientThrift_h */