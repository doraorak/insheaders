//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationNUXCALDisclosureView_h
#define IGRegistrationNUXCALDisclosureView_h
@import Foundation;

#include "UIView.h"
#include "IGAlertHUDHandling-Protocol.h"
#include "IGNUXFBContent.h"
#include "IGNUXLayoutSpec.h"
#include "IGRegistrationCALBottomButtonsView.h"
#include "IGRegistrationRichTextView.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSArray, NSString, UIButton, UILabel;
@protocol IGRegistrationNUXCALDisclosureViewDelegate;

@interface IGRegistrationNUXCALDisclosureView : UIView<NSObject> {
  /* instance variables */
  UIButton *_backButton;
  UILabel *_topContextLabel;
  UILabel *_titleLabel;
  IGRegistrationRichTextView *_descriptionView;
  IGRegistrationCALBottomButtonsView *_bottomButtonsView;
  IGNUXLayoutSpec *_layoutSpec;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _preferredContentInsets;
  long long _disclosuresVariant;
  NSArray *_richTextViewModels;
  long long _currentIndex;
  IGNUXFBContent *_content;
  NSObject<IGAlertHUDHandling> *_alertHandler;
  unsigned long long _linkingEntryPoint;
  BOOL _scrolledEventAlreadyLogged;
  BOOL _scrolledToBottomEventAlreadyLogged;
  BOOL _showScrollHint;
  IGUserSession *_userSession;
}

@property (weak, nonatomic) NSObject<IGRegistrationNUXCALDisclosureViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)layoutSubviews;
- (void)bottomViewDidTapPrimaryButton:(id)button;
- (void)bottomViewDidTapSecondaryButton:(id)button;
- (void)richTextView:(id)view didTapURL:(id)url;
- (void)richTextViewDidScrollViewScroll:(id)scroll didScrollToBottom:(BOOL)bottom;
- (void)_didTapBackButton;
@end

#endif /* IGRegistrationNUXCALDisclosureView_h */