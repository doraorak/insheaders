//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialTimelineVideoSegment_h
#define IGSundialTimelineVideoSegment_h
@import Foundation;

#include "UIView.h"
#include "IGSundialVideoClip.h"
#include "IGSundialVideoThumbnailGenerationListener-Protocol.h"

@class NSMutableArray, NSString, UIImage, UIView;
@protocol IGSundialTimelineVideoSegmentDelegate;

@interface IGSundialTimelineVideoSegment : UIView<IGSundialVideoThumbnailGenerationListener> {
  /* instance variables */
  IGSundialVideoClip *_cachedVideoClip;
  UIView *_thumbnailContainer;
  UIView *_snapshottableThumbnailWrapperView;
  NSMutableArray *_thumbnailLayers;
  UIImage *_previewImg;
  BOOL _didAdjustClip;
  double _prevTimeToDistanceRatio;
  BOOL _shouldRetryThumbnailFetch;
  double _numTotalThumbnails;
  double _thumbnailHeight;
  long long _thumbnailUserFlowTimeout;
  BOOL _disableDisplayLayer;
  long long _indexOfFirstVisibleThumbnail;
  long long _indexOfLastVisibleThumbnail;
  double _offsetIntoFirstVisibleThumbnail;
  double _offsetIntoLastVisibleThumbnail;
}

@property (readonly, nonatomic) IGSundialVideoClip *videoClip;
@property (readonly, nonatomic) double duration;
@property (nonatomic) double amountTrimmedFromStart;
@property (nonatomic) double amountTrimmedFromEnd;
@property (nonatomic) double playbackSpeed;
@property (weak, nonatomic) NSObject<IGSundialTimelineVideoSegmentDelegate> *delegate;
@property (readonly, nonatomic) double thumbnailWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoClip:(id)clip;
- (void)layoutSubviews;
- (void)setPreviewImage:(id)image;
- (void)thumbnailGenerated:(id)generated atIndex:(long long)index;
- (void)thumbnailGenerationFailedWithIndex:(long long)index;
@end

#endif /* IGSundialTimelineVideoSegment_h */
