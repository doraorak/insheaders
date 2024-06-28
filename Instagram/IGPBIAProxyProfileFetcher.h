//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPBIAProxyProfileFetcher_h
#define IGPBIAProxyProfileFetcher_h
@import Foundation;

#include "IGSponsoredInfoProviding-Protocol.h"

@class IGMedia, IGSponsoredSupportConfiguration, IGUserReference, IGUserSession;

@interface IGPBIAProxyProfileFetcher : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  IGMedia *_media;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
  NSObject<IGSponsoredInfoProviding> *_sponsoredInfoProvider;
  IGUserReference *_targetUserReference;
}

/* instance methods */
- (id)initWithUserSession:(id)session media:(id)media sponsoredInfoProvider:(id)provider sponsoredSupportConfiguration:(id)configuration targetUserReference:(id)reference;
@end

#endif /* IGPBIAProxyProfileFetcher_h */