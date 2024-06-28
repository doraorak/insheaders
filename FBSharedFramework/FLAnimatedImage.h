//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FLAnimatedImage_h
#define FLAnimatedImage_h
@import Foundation;

#include "FLAnimatedImageData.h"
#include "FLAnimatedImageFrameCache.h"
#include "FLAnimatedImageFrameDataSource-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDictionary, UIImage;

@interface FLAnimatedImage : NSObject<NSCopying> {
  /* instance variables */
  FLAnimatedImageFrameCache *_frameCache;
}

@property (readonly, nonatomic) UIImage *posterImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned long long loopCount;
@property (readonly, nonatomic) NSDictionary *delayTimesForIndexes;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) FLAnimatedImageData *data;
@property (readonly, nonatomic) NSObject<FLAnimatedImageFrameDataSource> *frameDataSource;

/* instance methods */
- (id)initWithData:(id)data size:(struct CGSize { double x0; double x1; })size loopCount:(unsigned long long)count frameCount:(unsigned long long)count skippedFrameCount:(unsigned long long)count delayTimesForIndexes:(id)indexes posterImage:(id)image posterImageFrameIndex:(unsigned long long)index frameDataSource:(id)source;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)imageLazilyCachedAtIndex:(unsigned long long)index;
- (id)synchronousImageAtIndex:(unsigned long long)index;
- (id)description;
@end

#endif /* FLAnimatedImage_h */
