//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxMusicNotesView_h
#define IGDirectInboxMusicNotesView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectInboxMusicNotesViewConfig.h"
#include "IGDirectNotesMarqueeTextView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGAudioIndicatorBars, NSAttributedString, NSString, UIFont, UILabel, UITapGestureRecognizer;
@protocol IGDirectMusicNotesViewDelegate;

@interface IGDirectInboxMusicNotesView : UIView<UIGestureRecognizerDelegate> {
  /* instance variables */
  UILabel *_artistLabel;
  NSAttributedString *_subtitleText;
  UILabel *_subtitleLabel;
  IGDirectNotesMarqueeTextView *_titleView;
  UIFont *_titleFont;
  IGAudioIndicatorBars *_audioIndicatorBars;
  IGDirectInboxMusicNotesViewConfig *_viewConfig;
  UITapGestureRecognizer *_tapGesture;
  long long _surface;
}

@property (weak, nonatomic) NSObject<IGDirectMusicNotesViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMusicModel:(id)model subtitleText:(id)text surface:(long long)surface viewConfig:(id)config;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)_didTapOnView;
@end

#endif /* IGDirectInboxMusicNotesView_h */
