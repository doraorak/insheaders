//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedPhotoBrightnessProcessor_h
#define IGFeedPhotoBrightnessProcessor_h
@import Foundation;

#include "IGImageProcessor-Protocol.h"

@class NSString;

@interface IGFeedPhotoBrightnessProcessor : NSObject<IGImageProcessor> {
  /* instance variables */
  double _gammaAdjustment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)mos_processedImageFromImage:(id)image;
- (id)cacheKeyURLFromURL:(id)url;
- (id)cacheKeyFragment;
- (BOOL)doesDecodeImage;
@end

#endif /* IGFeedPhotoBrightnessProcessor_h */
