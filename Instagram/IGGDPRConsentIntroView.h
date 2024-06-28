//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGDPRConsentIntroView_h
#define IGGDPRConsentIntroView_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGGDPRConsentBottomButtonView.h"
#include "IGGDPRConsentLayoutSpec.h"
#include "IGGDPRConsentMultiTextView.h"

@class IGCoreTextView, NSString, UIScrollView;
@protocol IGGDPRConsentIntroViewDelegate;

@interface IGGDPRConsentIntroView : UIView<IGCoreTextLinkHandler> {
  /* instance variables */
  UIScrollView *_contentView;
  IGCoreTextView *_contentTitle;
  IGGDPRConsentMultiTextView *_contentTextView;
  IGCoreTextView *_linkText;
  IGGDPRConsentBottomButtonView *_bottomButtonView;
  IGGDPRConsentLayoutSpec *_layoutSpec;
}

@property (weak, nonatomic) NSObject<IGGDPRConsentIntroViewDelegate> *introViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame layoutSpec:(id)spec introViewDelegate:(id)delegate;
- (void)layoutSubviews;
- (void)configureViewWithTitleText:(id)text contentData:(id)data buttonText:(id)text;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)GDPRConsentBottomButtonViewDidTapPrimaryBottomButton:(BOOL)button;
- (void)GDPRConsentBottomButtonViewDidTapSecondaryBottomButton;
- (double)_contentHeight;
@end

#endif /* IGGDPRConsentIntroView_h */