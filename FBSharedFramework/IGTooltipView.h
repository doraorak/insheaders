//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTooltipView_h
#define IGTooltipView_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGDSBlurView.h"
#include "IGTooltipViewDelegate-Protocol.h"
#include "IGUserSession.h"

@class NSDate, NSString, UIFeedbackGenerator, UIImageView, UITapGestureRecognizer, UIView;

@interface IGTooltipView : UIView<IGCoreTextLinkHandler> {
  /* instance variables */
  UIView *_scalableContent;
  UIImageView *_leftBackground;
  UIImageView *_rightBackground;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentPadding;
  long long _cornerStyle;
  IGDSBlurView *_blurEffectView;
  UIView *_blurMaskView;
  UIView *_blurMaskLeftView;
  UIView *_blurMaskRightView;
  BOOL _hideOnTap;
  double _displayDuration;
  NSDate *_displayStart;
  BOOL _dismissed;
  UIFeedbackGenerator *_feedbackGenerator;
  id /* block */ _hideCompletion;
  IGUserSession *_userSession;
  BOOL _presentedByTooltipManager;
  UITapGestureRecognizer *_tapGesture;
  double _tipAnchor;
  UIView *_secondaryContentView;
}

@property (weak, nonatomic) NSObject<IGTooltipViewDelegate> *delegate;
@property (nonatomic) long long arrowDirection;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) BOOL visible;
@property (retain, nonatomic) NSString *analyticsTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)areAnyTooltipsPresented;

/* instance methods */
- (id)initWithContentView:(id)view analyticsTag:(id)tag userSession:(id)session;
- (id)initWithContentView:(id)view secondaryContentView:(id)view analyticsTag:(id)tag userSession:(id)session;
- (id)initWithContentView:(id)view style:(long long)style analyticsTag:(id)tag userSession:(id)session;
- (id)initWithContentView:(id)view contentPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding analyticsTag:(id)tag userSession:(id)session;
- (id)initWithContentView:(id)view secondaryContentView:(id)view contentPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding style:(long long)style analyticsTag:(id)tag userSession:(id)session;
- (id)initWithContentView:(id)view secondaryContentView:(id)view contentPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding style:(long long)style cornerStyle:(long long)style analyticsTag:(id)tag userSession:(id)session;
- (void)_performScheduledDismissal;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didTap:(id)tap;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGTooltipView_h */
