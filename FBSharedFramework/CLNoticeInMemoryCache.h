//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CLNoticeInMemoryCache_h
#define CLNoticeInMemoryCache_h
@import Foundation;

#include "CLNoticeCacheSignatureProtocol-Protocol.h"
#include "IGUserSession.h"

@class NSMutableDictionary, NSString;

@interface CLNoticeInMemoryCache : NSObject {
  /* instance variables */
  NSMutableDictionary *_cache;
  NSString *_lastCacheSignature;
  IGUserSession *_userSession;
  NSObject<CLNoticeCacheSignatureProtocol> *_relevanceProvider;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)_reset;
@end

#endif /* CLNoticeInMemoryCache_h */