//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMainFeedResponseCachedDirectoryPathResolver_h
#define IGMainFeedResponseCachedDirectoryPathResolver_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface IGMainFeedResponseCachedDirectoryPathResolver : NSObject<NSObject> {
  /* instance variables */
  NSString *_userPk;
  NSString *_suffix;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserPk:(id)pk suffix:(id)suffix;
- (id)resolvePathToReadForVersion:(long long)version;
- (id)resolvePathToWriteForVersion:(long long)version attempt:(long long)attempt;
@end

#endif /* IGMainFeedResponseCachedDirectoryPathResolver_h */