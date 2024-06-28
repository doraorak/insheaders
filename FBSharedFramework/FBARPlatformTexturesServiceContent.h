//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARPlatformTexturesServiceContent_h
#define FBARPlatformTexturesServiceContent_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSData, NSString, NSURL;

@interface FBARPlatformTexturesServiceContent : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_imageData_identifier;
  NSData *_imageData_imageData;
  long long _imageData_rotationDegrees;
  NSString *_videoURL_identifier;
  NSURL *_videoURL_videoURL;
  long long _videoURL_rotationDegrees;
}

/* class methods */
+ (id)imageDataWithIdentifier:(id)identifier imageData:(id)data rotationDegrees:(long long)degrees;
+ (id)videoURLWithIdentifier:(id)identifier videoURL:(id)url rotationDegrees:(long long)degrees;

/* instance methods */
- (void)matchImageData:(id /* block */)data videoURL:(id /* block */)url;
@end

#endif /* FBARPlatformTexturesServiceContent_h */