//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerFakeCommentComposer_h
#define IGSundialViewerFakeCommentComposer_h
@import Foundation;

#include "UIView.h"

@class UIButton, UIView;
@protocol IGSundialViewerFakeCommentComposerDelegate;

@interface IGSundialViewerFakeCommentComposer : UIView {
  /* instance variables */
  UIButton *_addCommentButton;
  UIView *_ovalContainer;
}

@property (weak, nonatomic) NSObject<IGSundialViewerFakeCommentComposerDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_didTapAddComment;
@end

#endif /* IGSundialViewerFakeCommentComposer_h */
