//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBViewpointKeyboardTrackable_h
#define FBViewpointKeyboardTrackable_h
@import Foundation;

#include "FBViewpointTrackableExtended-Protocol.h"

@class NSString;

@interface FBViewpointKeyboardTrackable : NSObject<FBViewpointTrackableExtended> {
  /* instance variables */
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)_keyboardWillShow:(id)show;
- (void)_keyboardDidHide:(id)hide;
- (struct CGPoint { double x0; double x1; })vp_bottomRightRelativeToWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })vp_visibleRectRelativeToWindow;
- (long long)vp_level;
- (struct CGPoint { double x0; double x1; })vp_topLeftRelativeToWindow;
- (double)vp_totalArea;
- (double)vp_visibleAreaInViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewport;
- (BOOL)vp_shouldTrack;
- (id)vp_occlusiondetection_parent;
- (id)vp_occlusiondetection_children;
- (BOOL)vp_occlusiondetection_isOpaque;
- (BOOL)vp_shouldOccludeTrackablesBelow;
- (id)vp_parentTrackable;
- (id)vp_childTrackables;
@end

#endif /* FBViewpointKeyboardTrackable_h */
