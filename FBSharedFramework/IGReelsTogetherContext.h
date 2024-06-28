//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGReelsTogetherContext_h
#define IGReelsTogetherContext_h
@import Foundation;

#include "TBaseStruct.h"
#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSString;

@interface IGReelsTogetherContext : TBaseStruct<TBase, NSCoding> {
  /* instance variables */
  int __thrift_surfaceType;
  long long __thrift_surfaceId;
  long long __thrift_clipId;
  BOOL __thrift_isInLobby;
  NSString *__thrift_mutationId;
  long long __thrift_clientTimestamp;
  BOOL __thrift_surfaceType_set;
  BOOL __thrift_surfaceId_set;
  BOOL __thrift_clipId_set;
  BOOL __thrift_isInLobby_set;
  BOOL __thrift_mutationId_set;
  BOOL __thrift_clientTimestamp_set;
}

@property (nonatomic) int surfaceType;
@property (nonatomic) long long surfaceId;
@property (nonatomic) long long clipId;
@property (retain, nonatomic) NSString *mutationId;
@property (nonatomic) long long clientTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithSurfaceType:(int)type surfaceId:(long long)id clipId:(long long)id isInLobby:(BOOL)lobby mutationId:(id)id clientTimestamp:(long long)timestamp;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (id)toDict;
- (BOOL)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGReelsTogetherContext_h */
