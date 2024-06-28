//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FLAnimatedWebPDataSource_h
#define FLAnimatedWebPDataSource_h
@import Foundation;

#include "FLAnimatedImageFrameDataSource-Protocol.h"
#include "FLAnimatedWebPDemuxer.h"

@class NSArray, NSString;

@interface FLAnimatedWebPDataSource : NSObject<FLAnimatedImageFrameDataSource> {
  /* instance variables */
  FLAnimatedWebPDemuxer *_demuxer;
  NSArray *_frameInfo;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageRect;
  double _scale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithWebPDemuxer:(id)pdemuxer frameInfo:(id)info scale:(double)scale;
- (id)imageAtIndex:(unsigned long long)index;
- (BOOL)frameRequiresBlendingWithPreviousFrame:(unsigned long long)frame;
- (id)blendImage:(id)image atIndex:(unsigned long long)index withPreviousImage:(id)image;
@end

#endif /* FLAnimatedWebPDataSource_h */
