//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC16IGContentNotesUI17IGContentNoteView_h
#define _TtC16IGContentNotesUI17IGContentNoteView_h
@import Foundation;

#include "IGBaseView.h"

@interface _TtC16IGContentNotesUI17IGContentNoteView : IGBaseView { // (Swift)
  /* instance variables */
   bubbleView;
   bubbleViewMaxContentSize;
   profilePictureSize;
   bubbleViewCenteredMinContentWidth;
   bubbleViewLeftAlignedXOffset;
   likeEmojiUnicode;
   eventSource;
   $__lazy_storage_$_profilePictureView;
   $__lazy_storage_$_heartAnimator;
   $__lazy_storage_$_singleTapGestureRecognizer;
   $__lazy_storage_$_singleDoubleTapGestureRecognizer;
   gestureNUXView;
   viewModel;
   userSession;
   hasEnteredViewpoint;
   extraPopInDelay;
   viewPointActionKey;
   delegate;
   containingViewForHeartAnimation;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)handleTap:(id)tap;
- (void)handleDoubleTap:(id)tap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC16IGContentNotesUI17IGContentNoteView_h */