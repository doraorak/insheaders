//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayServerKeyManager_h
#define FBPayServerKeyManager_h
@import Foundation;

#include "FBPayServerKeyDataSource-Protocol.h"

@class NSMutableDictionary, NSString;

@interface FBPayServerKeyManager : NSObject {
  /* instance variables */
  NSObject<FBPayServerKeyDataSource> *_dataSource;
  id /* block */ _backgroundDispatcher;
  NSMutableDictionary *_cachedServerKeys;
  BOOL _skipCertVerification;
  NSString *_targetAccountId;
}

/* instance methods */
- (id)initWithDataSource:(id)source targetAccountId:(id)id withBackgroundDispatcher:(id /* block */)dispatcher skipCertVerification:(BOOL)verification;
- (id)initWithDataSource:(id)source withBackgroundDispatcher:(id /* block */)dispatcher skipCertVerification:(BOOL)verification;
- (id)initWithDataSource:(id)source withBackgroundDispatcher:(id /* block */)dispatcher;
- (id)initWithDataSource:(id)source;
- (id)initWithDataSource:(id)source skipCertVerification:(BOOL)verification;
- (void)forceFetchServerKey:(id)key;
- (void)forceFetchServerKey:(id)key receiverId:(id)id targetAccountId:(id)id otcSessionId:(id)id otcType:(id)type;
- (id)serverKey;
- (id)serverKeyWithTargetAccountId:(id)id receiverId:(id)id otcSessionId:(id)id otcType:(id)type paymentType:(id)type;
- (id)_defaultCacheKey;
@end

#endif /* FBPayServerKeyManager_h */