//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRemovalManager_h
#define IGRemovalManager_h
@import Foundation;

#include "IGTolerantRemovalDelegate.h"

@class NSFileManager;

@interface IGRemovalManager : NSObject {
  /* instance variables */
  NSFileManager *_fileManager;
  IGTolerantRemovalDelegate *_removalDelegate;
}

/* class methods */
+ (id)defaultManager;

/* instance methods */
- (id)_init;
- (BOOL)removeItemAtPath:(id)path error:(id *)error;
- (BOOL)removeItemAtURL:(id)url error:(id *)error;
@end

#endif /* IGRemovalManager_h */
