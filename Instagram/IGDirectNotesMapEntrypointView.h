//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectNotesMapEntrypointView_h
#define IGDirectNotesMapEntrypointView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectNotesMapEntrypointStrokeLabel.h"

@class UIImageView, UIView;

@interface IGDirectNotesMapEntrypointView : UIView {
  /* instance variables */
  UIView *_placeholderView;
  UIImageView *_mapSnapshotView;
  UIView *_indicatorView;
  IGDirectNotesMapEntrypointStrokeLabel *_locationLabel;
  double _diameter;
}

/* instance methods */
- (id)initWithAvatarDiameter:(double)diameter;
- (void)layoutSubviews;
@end

#endif /* IGDirectNotesMapEntrypointView_h */