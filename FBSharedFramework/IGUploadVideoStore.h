//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUploadVideoStore_h
#define IGUploadVideoStore_h
@import Foundation;

#include "IGUserLauncherSet-Protocol.h"

@class NSString;

@interface IGUploadVideoStore : NSObject {
  /* instance variables */
  NSString *_rootPath;
  NSObject<IGUserLauncherSet> *_launcherSet;
}

/* instance methods */
- (id)initWithRootPath:(id)path launcherSet:(id)set;
@end

#endif /* IGUploadVideoStore_h */
