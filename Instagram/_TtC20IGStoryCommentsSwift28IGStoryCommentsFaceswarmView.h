//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGStoryCommentsSwift28IGStoryCommentsFaceswarmView_h
#define _TtC20IGStoryCommentsSwift28IGStoryCommentsFaceswarmView_h
@import Foundation;

#include "IGPassthroughView.h"
#include "_TtP20IGStoryCommentsSwift36IGStoryCommentsFaceswarmViewDelegate_-Protocol.h"

@interface _TtC20IGStoryCommentsSwift28IGStoryCommentsFaceswarmView : IGPassthroughView { // (Swift)
  /* instance variables */
   commentViews;
   cycleNumber;
   allowHaptics;
   userSession;
   currentState;
   currentComments;
   media;
   $__lazy_storage_$_commentBubble;
   feedbackGenerator;
   $__lazy_storage_$_facepileContainerView;
   cycleCommentTimer;
   isCommentInitiallyConfigured;
   commentMerlinHelper;
}

@property (nonatomic, weak) NSObject<_TtP20IGStoryCommentsSwift36IGStoryCommentsFaceswarmViewDelegate_> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)layoutSubviews;
- (void)pauseComments;
- (void)playComments;
- (void)configureWithComments:(id)comments media:(id)media;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)didTapStoryComment;
- (void)didPanStoryComment:(id)comment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC20IGStoryCommentsSwift28IGStoryCommentsFaceswarmView_h */