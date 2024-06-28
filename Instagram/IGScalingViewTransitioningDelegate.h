//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGScalingViewTransitioningDelegate_h
#define IGScalingViewTransitioningDelegate_h
@import Foundation;

#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIView;

@interface IGScalingViewTransitioningDelegate : NSObject<UIViewControllerTransitioningDelegate> {
  /* instance variables */
  UIView *_sourceView;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceFrame;
  id /* block */ _destinationViewFetcher;
  id /* block */ _destinationFrameFetcher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSourceView:(id)view sourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame destinationViewFetcher:(id /* block */)fetcher destinationFrameFetcher:(id /* block */)fetcher;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
@end

#endif /* IGScalingViewTransitioningDelegate_h */
