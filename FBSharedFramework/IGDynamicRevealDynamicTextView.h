//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDynamicRevealDynamicTextView_h
#define IGDynamicRevealDynamicTextView_h
@import Foundation;

#include "UIView.h"
#include "IGDynamicRevealDynamicTextViewPhraseViewModel.h"
#include "IGDynamicTextViewProtocol-Protocol.h"

@class NSArray, UIColor;

@interface IGDynamicRevealDynamicTextView : UIView<IGDynamicTextViewProtocol> {
  /* instance variables */
  NSArray *_lines;
  NSArray *_backgrounds;
  NSArray *_fontSequence;
  NSArray *_availableFonts;
  unsigned long long _sequenceStartIndex;
  NSArray *_phrases;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundsForCalculatedViewModels;
  double _numWordsRevealed;
  BOOL _zeroFrameEnabled;
  IGDynamicRevealDynamicTextViewPhraseViewModel *_currentPhrase;
}

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *textBackgroundColor;
@property (nonatomic) double currentTime;
@property (copy, nonatomic) NSArray *phraseModels;

/* instance methods */
- (id)initWithLauncherSetProvider:(id)provider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)outlinePath;
@end

#endif /* IGDynamicRevealDynamicTextView_h */