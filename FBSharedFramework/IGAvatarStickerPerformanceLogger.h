//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAvatarStickerPerformanceLogger_h
#define IGAvatarStickerPerformanceLogger_h
@import Foundation;

#include "IGAvatarStickerPerformanceLoggingMetadata.h"

@interface IGAvatarStickerPerformanceLogger : NSObject {
  /* instance variables */
  unsigned long long _markerId;
  unsigned long long _instanceKey;
  IGAvatarStickerPerformanceLoggingMetadata *_metadata;
}

/* instance methods */
- (id)initWithLoggingMetadata:(id)metadata;
- (void)markStart;
@end

#endif /* IGAvatarStickerPerformanceLogger_h */
