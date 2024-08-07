//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImageDisplayLogger_h
#define IGImageDisplayLogger_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"

@interface IGImageDisplayLogger : NSObject {
  /* instance variables */
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
}

/* class methods */
+ (void)configureSharedLoggerWithAnalyticsLogger:(id)logger;
+ (id)sharedLogger;

/* instance methods */
- (id)_initWithAnalyticsLogger:(id)logger;
- (void)logImageDisplayInView:(id)view image:(id)image url:(id)url module:(id)module loadSource:(unsigned long long)source totalBytesDownloaded:(long long)downloaded;
@end

#endif /* IGImageDisplayLogger_h */
