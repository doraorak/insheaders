//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLegacyDiskPaths_h
#define IGLegacyDiskPaths_h
@import Foundation;

@class NSFileManager, NSString;

@interface IGLegacyDiskPaths : NSObject {
  /* instance variables */
  NSFileManager *_fileManager;
  NSString *_userPK;
  NSString *_executableName;
}

/* instance methods */
- (id)initWithFileManager:(id)manager withuserPK:(id)pk;
- (id)directRecentStickerService;
@end

#endif /* IGLegacyDiskPaths_h */