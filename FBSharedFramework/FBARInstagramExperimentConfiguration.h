//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARInstagramExperimentConfiguration_h
#define FBARInstagramExperimentConfiguration_h
@import Foundation;

#include "IGUserSession.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface FBARInstagramExperimentConfiguration : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (BOOL)boolForParameter:(int)parameter withDefault:(BOOL)default;
- (BOOL)boolWithoutLoggingForParameter:(int)parameter withDefault:(BOOL)default;
- (long long)int64ForParameter:(int)parameter withDefault:(long long)default;
- (id)stringForParameter:(int)parameter withDefault:(id)default;
- (double)doubleForParameter:(int)parameter withDefault:(double)default;
@end

#endif /* FBARInstagramExperimentConfiguration_h */