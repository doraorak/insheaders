//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPageMediaVideoViewLoggerProvider_h
#define IGPageMediaVideoViewLoggerProvider_h
@import Foundation;

#include "IGFeedItemVideoLoggingProviderDelegate-Protocol.h"

@class IGMedia, IGSponsoredSupportConfiguration, NSString;

@interface IGPageMediaVideoViewLoggerProvider : NSObject {
  /* instance variables */
  NSString *_module;
  IGMedia *_post;
  NSObject<IGFeedItemVideoLoggingProviderDelegate> *_loggingProvider;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
}

/* instance methods */
- (id)initWithPost:(id)post module:(id)module loggingProvider:(id)provider userSession:(id)session sponsoredSupportConfiguration:(id)configuration;
@end

#endif /* IGPageMediaVideoViewLoggerProvider_h */