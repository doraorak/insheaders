//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARGalleryPickerServiceContent_h
#define FBARGalleryPickerServiceContent_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSData, NSString, NSURL;

@interface FBARGalleryPickerServiceContent : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_imageData_identifier;
  NSData *_imageData_imageData;
  NSURL *_videoURL_videoURL;
}

/* class methods */
+ (id)imageDataWithIdentifier:(id)identifier imageData:(id)data;
+ (id)videoURLWithVideoURL:(id)url;

/* instance methods */
- (void)matchImageData:(id /* block */)data videoURL:(id /* block */)url;
@end

#endif /* FBARGalleryPickerServiceContent_h */
