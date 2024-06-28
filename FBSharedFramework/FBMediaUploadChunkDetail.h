//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMediaUploadChunkDetail_h
#define FBMediaUploadChunkDetail_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSMutableDictionary;

@interface FBMediaUploadChunkDetail : NSObject<NSCopying, NSCoding> {
  /* instance variables */
  NSMutableDictionary *_internalStore;
}

/* instance methods */
- (id)initWithContentSource:(id)source videoUploadChunkDetail:(id)detail;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBMediaUploadChunkDetail_h */
