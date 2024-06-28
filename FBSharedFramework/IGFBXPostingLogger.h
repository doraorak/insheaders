//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBXPostingLogger_h
#define IGFBXPostingLogger_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGFacebookServiceHelper.h"
#include "IGUser.h"

@class NSString;

@interface IGFBXPostingLogger : NSObject {
  /* instance variables */
  long long _entryPoint;
  long long _mediaType;
  NSString *_mediaId;
  NSString *_shareToSurface;
  IGUser *_user;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  IGFacebookServiceHelper *_facebookServiceHelper;
}

@property (readonly, copy, nonatomic) NSString *waterfallId;

/* instance methods */
- (id)initForShareType:(long long)type user:(id)user analyticsLogger:(id)logger facebookServiceHelper:(id)helper waterfallId:(id)id isStory:(BOOL)story;
- (id)initForEntryPoint:(long long)point user:(id)user analyticsLogger:(id)logger facebookServiceHelper:(id)helper waterfallId:(id)id shareToSurface:(id)surface mediaType:(long long)type mediaId:(id)id;
@end

#endif /* IGFBXPostingLogger_h */