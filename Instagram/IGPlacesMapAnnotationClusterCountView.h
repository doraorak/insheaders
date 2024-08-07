//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPlacesMapAnnotationClusterCountView_h
#define IGPlacesMapAnnotationClusterCountView_h
@import Foundation;

#include "UIView.h"

@class CALayer, UILabel;

@interface IGPlacesMapAnnotationClusterCountView : UIView {
  /* instance variables */
  double _height;
  UILabel *_label;
  CALayer *_backgroundLayer;
  long long _clusterCount;
}

@property (readonly, nonatomic) long long style;

/* instance methods */
- (id)initWithHeight:(double)height;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGPlacesMapAnnotationClusterCountView_h */
