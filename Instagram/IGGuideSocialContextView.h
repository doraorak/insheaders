//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGuideSocialContextView_h
#define IGGuideSocialContextView_h
@import Foundation;

#include "IGPassthroughView.h"

@class NSNumber, UIButton;

@interface IGGuideSocialContextView : IGPassthroughView {
  /* instance variables */
  UIButton *_likesButton;
  UIButton *_commentsButton;
}

@property (retain, nonatomic) NSNumber *likeCount;
@property (retain, nonatomic) NSNumber *commentCount;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
@end

#endif /* IGGuideSocialContextView_h */
