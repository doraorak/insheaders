//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef InstagramContextualPresenceMutationArgs_h
#define InstagramContextualPresenceMutationArgs_h
@import Foundation;

#include "TBaseStruct.h"
#include "IGReelsTogetherContextMutation.h"
#include "IGThreadCopresenceContextMutation.h"
#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSString;

@interface InstagramContextualPresenceMutationArgs : TBaseStruct<TBase, NSCoding> {
  /* instance variables */
  IGThreadCopresenceContextMutation *__thrift_threadCopresenceMutation;
  IGReelsTogetherContextMutation *__thrift_reelsTogetherMutation;
  BOOL __thrift_threadCopresenceMutation_set;
  BOOL __thrift_reelsTogetherMutation_set;
}

@property (retain, nonatomic) IGThreadCopresenceContextMutation *threadCopresenceMutation;
@property (retain, nonatomic) IGReelsTogetherContextMutation *reelsTogetherMutation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithThreadCopresenceMutation:(id)mutation reelsTogetherMutation:(id)mutation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)threadCopresenceMutationIsSet;
- (void)unsetThreadCopresenceMutation;
- (BOOL)reelsTogetherMutationIsSet;
- (void)unsetReelsTogetherMutation;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;
- (id)toDict;
- (BOOL)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* InstagramContextualPresenceMutationArgs_h */