//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayBusinessLogger_h
#define FBPayBusinessLogger_h
@import Foundation;

#include "FBPayUPLLogger.h"

@class NSString;
@protocol FBPayBusinessGatingConfiguring;

@interface FBPayBusinessLogger : NSObject {
  /* instance variables */
  NSString *_uplInterfaceType;
  NSString *_uplLoginMode;
  long long _qplSessionId;
  NSObject<FBPayBusinessGatingConfiguring> *_gatingConfig;
  FBPayUPLLogger *_uplLogger;
}

/* instance methods */
- (id)initWithIntefaceType:(unsigned long long)type logger:(id)logger uplSessionId:(id)id qplSessionId:(long long)id gatingConfig:(id)config;
@end

#endif /* FBPayBusinessLogger_h */
