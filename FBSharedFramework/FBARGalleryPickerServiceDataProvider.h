//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARGalleryPickerServiceDataProvider_h
#define FBARGalleryPickerServiceDataProvider_h
@import Foundation;

#include "FBARGalleryPickerServiceDataSource-Protocol.h"

@class NSArray, NSString;

@interface FBARGalleryPickerServiceDataProvider : NSObject<FBARGalleryPickerServiceDataSource> {
  /* instance variables */
  NSArray *_items;
}

@property (readonly) NSArray *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setVideoURL:(id)url;
@end

#endif /* FBARGalleryPickerServiceDataProvider_h */