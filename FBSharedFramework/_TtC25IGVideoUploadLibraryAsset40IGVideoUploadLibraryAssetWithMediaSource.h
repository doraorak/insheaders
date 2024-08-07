//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC25IGVideoUploadLibraryAsset40IGVideoUploadLibraryAssetWithMediaSource_h
#define _TtC25IGVideoUploadLibraryAsset40IGVideoUploadLibraryAssetWithMediaSource_h
@import Foundation;

#include "NSCoding-Protocol.h"

@interface _TtC25IGVideoUploadLibraryAsset40IGVideoUploadLibraryAssetWithMediaSource : NSObject<NSCoding> {
  /* instance variables */
   assetLocalIdentifier;
   videoConfiguration;
   skipMediaProcessorRendering;
   colorSpaceName;
}

/* instance methods */
- (id)initWithAssetLocalIdentifier:(id)identifier videoConfiguration:(id)configuration skipMediaProcessorRendering:(BOOL)rendering colorSpaceName:(const struct __CFString *)name;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;
@end

#endif /* _TtC25IGVideoUploadLibraryAsset40IGVideoUploadLibraryAssetWithMediaSource_h */
