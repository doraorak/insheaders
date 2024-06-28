//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGenericMegaphoneView_h
#define IGGenericMegaphoneView_h
@import Foundation;

#include "UIView.h"
#include "IGButton.h"
#include "IGCoreTextView.h"
#include "IGGenericMegaphone.h"
#include "IGImageView.h"

@class UIButton, UIView;
@protocol IGGenericMegaphoneViewDelegate;

@interface IGGenericMegaphoneView : UIView {
  /* instance variables */
  IGCoreTextView *_messageView;
  IGImageView *_sideImageView;
  UIView *_lineView;
  IGButton *_buttonOne;
  IGButton *_buttonTwo;
}

@property (readonly, nonatomic) IGCoreTextView *titleView;
@property (readonly, nonatomic) UIButton *dismissButton;
@property (readonly, nonatomic) IGGenericMegaphone *megaphone;
@property (weak, nonatomic) NSObject<IGGenericMegaphoneViewDelegate> *delegate;

/* class methods */
+ (Class)_styleClassForButton:(id)button;

/* instance methods */
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didDismiss;
- (void)_didSelectButton:(id)button;
- (void)_didSelectButtonOne;
- (void)_didSelectButtonTwo;
@end

#endif /* IGGenericMegaphoneView_h */