//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGReportingComponentPolicyEducationView_h
#define IGReportingComponentPolicyEducationView_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextLinkHandler-Protocol.h"

@class IGCoreTextView, UIButton;
@protocol IGReportingComponentPolicyEducationViewDelegate;

@interface IGReportingComponentPolicyEducationView : UIView {
  /* instance variables */
  UIButton *_titleButton;
  IGCoreTextView *_policyTextView;
  NSObject<IGCoreTextLinkHandler> *_linkHandlerDelegate;
}

@property (weak, nonatomic) NSObject<IGReportingComponentPolicyEducationViewDelegate> *delegate;
@property (nonatomic) BOOL expanded;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)configureWithViewModel:(id)model;
- (void)_titleButtonTapped;
@end

#endif /* IGReportingComponentPolicyEducationView_h */