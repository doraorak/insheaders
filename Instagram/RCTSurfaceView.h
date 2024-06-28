//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTSurfaceView_h
#define RCTSurfaceView_h
@import Foundation;

#include "UIView.h"
#include "RCTSurface.h"
#include "RCTSurfaceRootView.h"

@interface RCTSurfaceView : UIView {
  /* instance variables */
  RCTSurfaceRootView *_rootView;
  long long _stage;
}

@property (readonly, weak, nonatomic) RCTSurface *surface;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithSurface:(id)surface;
- (void)setRootView:(id)view;
- (id)rootView;
- (void)setStage:(long long)stage;
- (long long)stage;
- (void)_updateStage;
@end

#endif /* RCTSurfaceView_h */
