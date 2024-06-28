//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGraphQLRequest_h
#define IGGraphQLRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSString;
@protocol IGGraphQLCachePolicy, IGGraphQLParsing;

@interface IGGraphQLRequest : NSObject<NSCopying> {
  /* instance variables */
  BOOL _useDjangoProxy;
  BOOL _ignoreNonCriticalErrors;
  BOOL _doNotCacheResponse;
  unsigned int _fieldSetId;
  unsigned long long _operationType;
  NSString *_vcPolicy;
  unsigned long long _cacheTtlSeconds;
  id /* block */ _successHandler;
  id /* block */ _failHandler;
}

@property (readonly, copy, nonatomic) NSString *queryId;
@property (readonly, copy, nonatomic) NSString *queryName;
@property (readonly, copy, nonatomic) NSDictionary *queryParams;
@property (readonly, nonatomic) NSObject<IGGraphQLParsing> *parser;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) unsigned long long schemaType;
@property (readonly, nonatomic) NSObject<IGGraphQLCachePolicy> *cachePolicy;

/* instance methods */
- (id)initRequestWithQueryId:(id)id queryName:(id)name queryParams:(id)params requestType:(unsigned long long)type schemaType:(unsigned long long)type useDjangoProxy:(BOOL)proxy ignoreNonCriticalErrors:(BOOL)errors vcPolicy:(id)policy parser:(id)parser cachePolicy:(id)policy successHandler:(id /* block */)handler failHandler:(id /* block */)handler;
- (id)initRequestWithQueryName:(id)name queryParams:(id)params requestType:(unsigned long long)type schemaType:(unsigned long long)type useDjangoProxy:(BOOL)proxy ignoreNonCriticalErrors:(BOOL)errors vcPolicy:(id)policy parser:(id)parser cachePolicy:(id)policy successHandler:(id /* block */)handler failHandler:(id /* block */)handler;
- (void)failWithError:(id)error;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGGraphQLRequest_h */
