//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMediaResolverContextBuilder_h
#define IGDirectMediaResolverContextBuilder_h
@import Foundation;

#include "IGDirectMediaRestorationContext.h"

@class NSArray, NSString;

@interface IGDirectMediaResolverContextBuilder : NSObject {
  /* instance variables */
  NSString *_userPk;
  NSString *_fileEncSha256;
  NSString *_fileSha256;
  NSString *_mediaKey;
  NSString *_mediaKeyTimestamp;
  NSString *_directPath;
  long long _mediaType;
  NSString *_sideCar;
  NSArray *_scanLengths;
  IGDirectMediaRestorationContext *_restorationContext;
}

/* class methods */
+ (id)directMediaResolverContextFromExistingDirectMediaResolverContext:(id)context;

/* instance methods */
- (id)initWithUserPk:(id)pk fileEncSha256:(id)sha256 fileSha256:(id)sha256 mediaKey:(id)key mediaKeyTimestamp:(id)timestamp directPath:(id)path;
- (id)build;
- (id)withUserPk:(id)pk;
- (id)withFileEncSha256:(id)sha256;
- (id)withFileSha256:(id)sha256;
- (id)withMediaKey:(id)key;
- (id)withMediaKeyTimestamp:(id)timestamp;
- (id)withDirectPath:(id)path;
- (id)withMediaType:(long long)type;
- (id)withSideCar:(id)car;
- (id)withScanLengths:(id)lengths;
- (id)withRestorationContext:(id)context;
@end

#endif /* IGDirectMediaResolverContextBuilder_h */