//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoQualityLogger_h
#define IGVideoQualityLogger_h
@import Foundation;

#include "IGPostSessionLogger.h"
#include "IGUserLauncherSet-Protocol.h"

@interface IGVideoQualityLogger : NSObject {
  /* instance variables */
  IGPostSessionLogger *_postSessionLogger;
  NSObject<IGUserLauncherSet> *_launcherSet;
  BOOL _didPause;
}

/* instance methods */
- (id)initWithPostSessionLogger:(id)logger launcherSet:(id)set;
- (void)logUploadSuccess;
@end

#endif /* IGVideoQualityLogger_h */
