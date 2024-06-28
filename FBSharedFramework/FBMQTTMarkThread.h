//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTMarkThread_h
#define FBMQTTMarkThread_h
@import Foundation;

#include "TBaseStruct.h"
#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSString;

@interface FBMQTTMarkThread : TBaseStruct<TBase, NSCoding> {
  /* instance variables */
  NSString *__thrift_mark;
  BOOL __thrift_state;
  NSString *__thrift_threadId;
  long long __thrift_actionId;
  long long __thrift_syncSeqId;
  long long __thrift_threadFbId;
  long long __thrift_otherUserFbId;
  long long __thrift_actorFbId;
  long long __thrift_watermarkTimestamp;
  NSString *__thrift_titanOriginatedThreadId;
  BOOL __thrift_shouldSendReadReceipt;
  NSString *__thrift_adPageMessageType;
  long long __thrift_attemptId;
  BOOL __thrift_mark_set;
  BOOL __thrift_state_set;
  BOOL __thrift_threadId_set;
  BOOL __thrift_actionId_set;
  BOOL __thrift_syncSeqId_set;
  BOOL __thrift_threadFbId_set;
  BOOL __thrift_otherUserFbId_set;
  BOOL __thrift_actorFbId_set;
  BOOL __thrift_watermarkTimestamp_set;
  BOOL __thrift_titanOriginatedThreadId_set;
  BOOL __thrift_shouldSendReadReceipt_set;
  BOOL __thrift_adPageMessageType_set;
  BOOL __thrift_attemptId_set;
}

@property (retain, nonatomic) NSString *mark;
@property (nonatomic) BOOL state;
@property (retain, nonatomic) NSString *threadId;
@property (nonatomic) long long actionId;
@property (nonatomic) long long syncSeqId;
@property (nonatomic) long long threadFbId;
@property (nonatomic) long long otherUserFbId;
@property (nonatomic) long long actorFbId;
@property (nonatomic) long long watermarkTimestamp;
@property (retain, nonatomic) NSString *titanOriginatedThreadId;
@property (nonatomic) BOOL shouldSendReadReceipt;
@property (retain, nonatomic) NSString *adPageMessageType;
@property (nonatomic) long long attemptId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithMark:(id)mark state:(BOOL)state threadId:(id)id actionId:(long long)id syncSeqId:(long long)id threadFbId:(long long)id otherUserFbId:(long long)id actorFbId:(long long)id watermarkTimestamp:(long long)timestamp titanOriginatedThreadId:(id)id shouldSendReadReceipt:(BOOL)receipt adPageMessageType:(id)type attemptId:(long long)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (id)toDict;
- (BOOL)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBMQTTMarkThread_h */