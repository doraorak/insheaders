//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTagHintDisplayView_h
#define IGTagHintDisplayView_h
@import Foundation;

#include "UIView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString;
@protocol IGTagHintDisplayViewDelegate;

@interface IGTagHintDisplayView : UIView<UIGestureRecognizerDelegate> {
  /* instance variables */
  NSArray *_tagGroups;
}

@property (weak, nonatomic) NSObject<IGTagHintDisplayViewDelegate> *delegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tapPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_onTap:(id)tap;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
@end

#endif /* IGTagHintDisplayView_h */