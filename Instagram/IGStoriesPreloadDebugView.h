//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoriesPreloadDebugView_h
#define IGStoriesPreloadDebugView_h
@import Foundation;

#include "UIView.h"
#include "NSObject-Protocol.h"

@class NSString, UILabel;

@interface IGStoriesPreloadDebugView : UIView<NSObject> {
  /* instance variables */
  UILabel *_debuggingLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateDebugOverlayState:(unsigned long long)state;
@end

#endif /* IGStoriesPreloadDebugView_h */