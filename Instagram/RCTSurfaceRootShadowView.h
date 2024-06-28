//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTSurfaceRootShadowView_h
#define RCTSurfaceRootShadowView_h
@import Foundation;

#include "RCTShadowView.h"
#include "RCTSurfaceRootShadowViewDelegate-Protocol.h"

@interface RCTSurfaceRootShadowView : RCTShadowView {
  /* instance variables */
  BOOL _isRendered;
  BOOL _isLaidOut;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicSize;
@property (weak, nonatomic) NSObject<RCTSurfaceRootShadowViewDelegate> *delegate;
@property (nonatomic) int baseDirection;

/* instance methods */
- (id)init;
- (void)insertReactSubview:(id)subview atIndex:(long long)index;
- (void)layoutWithAffectedShadowViews:(id)views;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })size maximumSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* RCTSurfaceRootShadowView_h */
