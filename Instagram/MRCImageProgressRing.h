//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MRCImageProgressRing_h
#define MRCImageProgressRing_h
@import Foundation;

#include "UIView.h"
#include "FBWebImageViewListener-Protocol.h"
#include "MRCArcLayer.h"

@class NSString;

@interface MRCImageProgressRing : UIView<FBWebImageViewListener> {
  /* instance variables */
  struct MRCProgressRingDiameter { unsigned long long type; double value; } _ringDiameter;
  double _progress;
  MRCArcLayer *_progressLayer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProgressRingOptions:(struct MRCProgressRingOptions { struct MRCProgressRingDiameter { unsigned long long x0; double x1; } x0; double x1; id x2; })options;
- (void)layoutSubviews;
- (void)webImageView:(id)view didUpdateLoadProgress:(double)progress;
@end

#endif /* MRCImageProgressRing_h */
