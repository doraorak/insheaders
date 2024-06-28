//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectNotesThoughtBubbleView_h
#define IGDirectNotesThoughtBubbleView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectInboxMusicNotesView.h"
#include "IGDirectNotesInteractionDelegate-Protocol.h"
#include "IGDirectNotesLocationNoteView.h"
#include "IGDirectNotesThoughtBubbleLayoutSpec.h"
#include "_TtC18IGMotionTranslator18IGMotionTranslator.h"
#include "_TtP18IGMotionTranslator26IGMotionTranslatorListener_-Protocol.h"

@class IGSingleDoubleTapGestureRecognizer, IGTapButton, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface IGDirectNotesThoughtBubbleView : UIView<_TtP18IGMotionTranslator26IGMotionTranslatorListener_> {
  /* instance variables */
  UIView *_contentBackgroundView;
  UIView *_shadowBackgroundView;
  UILabel *_notesText;
  UILabel *_moreCountText;
  IGDirectNotesThoughtBubbleLayoutSpec *_layoutSpec;
  struct CGSize { double width; double height; } _noteTextMaxSize;
  UIView *_thoughtBubblesView;
  UIView *_bigThoughtBubble;
  UIView *_smallThoughtBubble;
  IGTapButton *_heartIconButton;
  UIView *_heartIconButtonShadowView;
  BOOL _isPersistentHeartEntryPoint;
  BOOL _isMusicAndTextNote;
  IGDirectInboxMusicNotesView *_musicView;
  IGDirectNotesLocationNoteView *_locationView;
  UIImageView *_plusIcon;
  BOOL _isTextEnlargedForEmojis;
  BOOL _isTaggingEnabled;
  BOOL _isShortCTAEnabled;
  NSObject<IGDirectNotesInteractionDelegate> *_delegate;
  BOOL _shouldAnimatePop;
  long long _moreNotesCount;
  long long _notesTextOriginalNumberOfLines;
  long long _noteContentType;
  UIActivityIndicatorView *_loadingSpinner;
  _TtC18IGMotionTranslator18IGMotionTranslator *_motionTranslator;
  BOOL _isAnimatingBubbles;
}

@property (readonly, nonatomic) IGSingleDoubleTapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) BOOL shouldLowerFourLineNoteBubble;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame layoutSpec:(id)spec;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didLongPressNoteView:(id)view;
- (void)_didTapHeartIconButton:(id)button;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)didUpdateWithX:(double)x y:(double)y z:(double)z pitch:(double)pitch;
@end

#endif /* IGDirectNotesThoughtBubbleView_h */
