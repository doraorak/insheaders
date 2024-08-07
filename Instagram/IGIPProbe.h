//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIPProbe_h
#define IGIPProbe_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"
#include "IGAPIClient-Protocol.h"

@class IGUserSession, NSString;
@protocol OS_dispatch_queue;

@interface IGIPProbe : NSObject {
  /* instance variables */
  IGUserSession *_session;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<FBAnalyticsLogging> *_logger;
  NSString *_targetHostnameV4;
  NSString *_targetHostnameV6;
  BOOL _bisectDisableResponseHandling;
  BOOL _bisectDisableLogging;
  NSObject<IGAPIClient> *_networker;
  NSString *_clientIPV4;
  NSString *_clientIPV6;
  NSString *_serverIPV4;
  NSString *_serverIPV6;
}

/* instance methods */
- (id)initWithSession:(id)session queue:(id)queue;
@end

#endif /* IGIPProbe_h */
