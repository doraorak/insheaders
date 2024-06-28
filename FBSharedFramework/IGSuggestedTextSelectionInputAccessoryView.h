//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSuggestedTextSelectionInputAccessoryView_h
#define IGSuggestedTextSelectionInputAccessoryView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectSuggestedTextHScrollViewConfiguration.h"
#include "IGEmojiSelectionViewController.h"
#include "IGEmojiSelectionViewControllerDelegate-Protocol.h"
#include "IGSuggestedTextHScrollView.h"

@class NSArray, NSString;
@protocol IGMessageInputAccessoryViewDelegate, IGSuggestedTextSelectionInputAccessoryViewLoggingDelegate;

@interface IGSuggestedTextSelectionInputAccessoryView : UIView<IGEmojiSelectionViewControllerDelegate> {
  /* instance variables */
  IGSuggestedTextHScrollView *_suggestedTextHScrollView;
  BOOL _isTextSuggestionsEnabled;
  BOOL _isStaticEmojiSuggestionsEnabled;
  IGEmojiSelectionViewController *_inlineEmojiSelectionViewController;
  NSArray *_emojis;
  BOOL _loggedEmojiImpressions;
  IGDirectSuggestedTextHScrollViewConfiguration *_configuration;
  unsigned long long _currentInputType;
}

@property (weak, nonatomic) NSObject<IGSuggestedTextSelectionInputAccessoryViewLoggingDelegate> *loggingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGMessageInputAccessoryViewDelegate> *delegate;
@property (nonatomic) BOOL hidden;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame userSession:(id)session analyticsModule:(id)module textSuggestionEnabled:(BOOL)enabled;
- (void)layoutSubviews;
- (void)updateWithStrings:(id)strings;
- (BOOL)hasSuggestions;
- (double)height;
- (void)viewAppeared;
- (void)scrollView:(id)view didSelectItem:(id)item atIndex:(long long)index;
- (void)emojiSelectionViewController:(id)controller didSelectEmoji:(id)emoji suggestedComment:(id)comment atIndex:(unsigned long long)index;
- (void)emojiSelectionViewController:(id)controller didUpdateEmojis:(id)emojis;
- (void)scrollView:(id)view itemDidBecomeVisible:(id)visible atIndex:(long long)index;
- (BOOL)isHidden;
@end

#endif /* IGSuggestedTextSelectionInputAccessoryView_h */