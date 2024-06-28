//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectCreatePromptViewController_h
#define IGDirectCreatePromptViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "_TtC20IGDirectPromptsSwift23IGDirectPromptsDiceView.h"
#include "_TtC20IGDirectPromptsSwift27IGDirectPromptInputCardView.h"
#include "_TtP20IGDirectPromptsSwift31IGDirectPromptsDiceViewDelegate_-Protocol.h"
#include "_TtP20IGDirectPromptsSwift35IGDirectPromptInputCardViewDelegate_-Protocol.h"

@class IGCoreTextView, IGUserSession, NSArray, NSNumber, NSString;
@protocol IGDirectPromptCreationDelegate;

@interface IGDirectCreatePromptViewController : IGViewController<IGKeyboardObserverShowDelegate, _TtP20IGDirectPromptsSwift31IGDirectPromptsDiceViewDelegate_, _TtP20IGDirectPromptsSwift35IGDirectPromptInputCardViewDelegate_, IGCoreTextLinkHandler> {
  /* instance variables */
  _TtC20IGDirectPromptsSwift27IGDirectPromptInputCardView *_promptCardView;
  unsigned long long _promptType;
  IGCoreTextView *_footerTextView;
  IGUserSession *_userSession;
  NSString *_sessionId;
  NSString *_threadId;
  NSNumber *_consistentThreadFbid;
  long long _audienceType;
  NSString *_entryPoint;
  _TtC20IGDirectPromptsSwift23IGDirectPromptsDiceView *_diceView;
  NSArray *_suggestedPrompts;
  BOOL _didUserTapOnDiceRoll;
}

@property (weak, nonatomic) NSObject<IGDirectPromptCreationDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session sessionId:(id)id threadId:(id)id consistentThreadFbid:(id)fbid audienceType:(long long)type module:(id)module promptType:(unsigned long long)type entryPoint:(id)point;
- (id)title;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (void)promptInputCardView:(id)view didUpdateText:(id)text isEmpty:(BOOL)empty;
- (void)_onCancelTapped;
- (void)_onSendTapped;
- (void)diceViewTapped:(id)tapped randomPrompt:(id)prompt;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGDirectCreatePromptViewController_h */