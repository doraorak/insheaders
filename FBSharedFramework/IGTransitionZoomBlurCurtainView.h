//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTransitionZoomBlurCurtainView_h
#define IGTransitionZoomBlurCurtainView_h
@import Foundation;

#include "UIView.h"
#include "NSObject-Protocol.h"

@class NSString, UIVisualEffectView;

@interface IGTransitionZoomBlurCurtainView : UIView<NSObject> {
  /* instance variables */
  BOOL _isForward;
  UIVisualEffectView *_blurView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)curtainViewWithIsForward:(BOOL)forward;

/* instance methods */
- (id)initWithIsForward:(BOOL)forward;
- (void)configureAnimator:(id)animator;
@end

#endif /* IGTransitionZoomBlurCurtainView_h */
