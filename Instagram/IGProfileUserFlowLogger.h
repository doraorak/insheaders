//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileUserFlowLogger_h
#define IGProfileUserFlowLogger_h
@import Foundation;

#include "IGUserFlowLoggerType-Protocol.h"

@class NSMutableDictionary;

@interface IGProfileUserFlowLogger : NSObject {
  /* instance variables */
  NSObject<IGUserFlowLoggerType> *_userFlowLogger;
  NSMutableDictionary *_flowNameToMarker;
  NSMutableDictionary *_offensiveFlowCategoryToInstanceId;
  NSMutableDictionary *_offensiveFlowCategoryDidSeeError;
}

/* instance methods */
- (id)initWithUserFlowLogger:(id)logger;
- (void)dealloc;
- (void)marker:(id)marker addedPoint:(id)point atTimestamp:(double)timestamp;
- (void)marker:(id)marker willFinishWithReason:(long long)reason;
- (void)marker:(id)marker didFinishWithReason:(long long)reason;
@end

#endif /* IGProfileUserFlowLogger_h */
