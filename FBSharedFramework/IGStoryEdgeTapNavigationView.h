//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryEdgeTapNavigationView_h
#define IGStoryEdgeTapNavigationView_h
@import Foundation;

#include "UIView.h"
#include "IGGestureHandler-Protocol.h"
#include "IGGradientView.h"
#include "IGStoryViewerTapNavigationGestureRecognizer.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol IGStoryEdgeTapNavigationViewDelegate;

@interface IGStoryEdgeTapNavigationView : UIView<UIGestureRecognizerDelegate, IGGestureHandler> {
  /* instance variables */
  IGStoryViewerTapNavigationGestureRecognizer *_edgeTapGesture;
  IGGradientView *_leftTapGradient;
  IGGradientView *_rightTapGradient;
}

@property (nonatomic) BOOL leftTapGradientVisible;
@property (nonatomic) BOOL rightTapGradientVisible;
@property (weak, nonatomic) NSObject<IGStoryEdgeTapNavigationViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (BOOL)canRespondToGesture:(id)gesture;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)_handleEdgeTap:(id)tap;
@end

#endif /* IGStoryEdgeTapNavigationView_h */
