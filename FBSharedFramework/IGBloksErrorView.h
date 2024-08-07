//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksErrorView_h
#define IGBloksErrorView_h
@import Foundation;

#include "UIView.h"
#include "IGBloksSpinnerButton.h"
#include "IGErrorIndicatingViewType-Protocol.h"
#include "IGErrorIndicationState.h"

@class NSString, UILabel;
@protocol IGBloksErrorViewDelegate;

@interface IGBloksErrorView : UIView<IGErrorIndicatingViewType> {
  /* instance variables */
  UILabel *_errorLabel;
  IGBloksSpinnerButton *_loadingSpinnerButton;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
  IGErrorIndicationState *_errorIndicationState;
}

@property (weak, nonatomic) NSObject<IGBloksErrorViewDelegate> *delegate;
@property (readonly, nonatomic) IGErrorIndicationState *ig_errorIndicationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_spinnerButtonTapAction:(id)action;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGBloksErrorView_h */
