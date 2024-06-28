//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialCreationTemplateSegment_h
#define IGSundialCreationTemplateSegment_h
@import Foundation;

#include "IGAsyncTask.h"
#include "IGSundialVideoClip.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, UIImage;

@interface IGSundialCreationTemplateSegment : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  double _reusableStartTime;
  double _reusableEndTime;
}

@property (retain, nonatomic) IGSundialVideoClip *videoClip;
@property (retain, nonatomic) IGAsyncTask *videoClipTask;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *assetId;
@property (readonly, nonatomic) double duration;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDuration:(double)duration videoClip:(id)clip;
- (id)initWithDuration:(double)duration videoClip:(id)clip assetId:(id)id;
- (id)initWithDuration:(double)duration videoClipTask:(id)task reusableStartTime:(double)time reusableEndTime:(double)time;
- (id)initWithDuration:(double)duration videoClipTask:(id)task assetId:(id)id;
- (id)initWithDuration:(double)duration videoClip:(id)clip image:(id)image assetId:(id)id;
- (id)newWithDuration:(double)duration videoClip:(id)clip;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* IGSundialCreationTemplateSegment_h */