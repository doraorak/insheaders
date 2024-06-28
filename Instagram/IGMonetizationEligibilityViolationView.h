//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationEligibilityViolationView_h
#define IGMonetizationEligibilityViolationView_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGMonetizationEligibilityViolation.h"

@class IGCoreTextView, NSString, UILabel, UIView;
@protocol IGMonetizationEligibilityViolationViewDelegate;

@interface IGMonetizationEligibilityViolationView : UIView<IGCoreTextLinkHandler> {
  /* instance variables */
  UILabel *_title;
  IGCoreTextView *_descriptionView;
  UIView *_separator;
  BOOL _showSeparator;
  IGMonetizationEligibilityViolation *_violation;
}

@property (weak, nonatomic) NSObject<IGMonetizationEligibilityViolationViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViolation:(id)violation showSeparator:(BOOL)separator;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGMonetizationEligibilityViolationView_h */