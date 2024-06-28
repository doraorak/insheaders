//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialCommentPreviewView_h
#define IGSundialCommentPreviewView_h
@import Foundation;

#include "UIView.h"

@class IGCommentModel, IGCoreTextView, IGDSBlurView, IGProfilePictureImageView;
@protocol IGSundialCommentPreviewViewDelegate;

@interface IGSundialCommentPreviewView : UIView {
  /* instance variables */
  IGCommentModel *_comment;
  IGDSBlurView *_blurView;
  IGCoreTextView *_textView;
  struct CGSize { double width; double height; } _textViewSize;
  IGProfilePictureImageView *_profilePicture;
}

@property (weak, nonatomic) NSObject<IGSundialCommentPreviewViewDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)prepareForReuse;
- (void)_handleTap:(id)tap;
@end

#endif /* IGSundialCommentPreviewView_h */