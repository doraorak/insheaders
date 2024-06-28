//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteMessageView_h
#define IGPromoteMessageView_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGCoreTextNonLinkHandler-Protocol.h"

@class IGCoreTextView, NSString, UIGestureRecognizer, UIImageView, UIView;
@protocol IGPromoteMessageViewDelegate;

@interface IGPromoteMessageView : UIView<IGCoreTextLinkHandler, IGCoreTextNonLinkHandler> {
  /* instance variables */
  UIView *_containerView;
  UIImageView *_iconImageView;
  IGCoreTextView *_bodyView;
  IGCoreTextView *_linkView;
  BOOL _isIconRightAligned;
  BOOL _isIconAlignedWithTitle;
  UIGestureRecognizer *_tapGestureRecognizer;
}

@property (weak, nonatomic) NSObject<IGPromoteMessageViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didTapIconImage;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextViewDidTapOnNonLinkedString:(id)string touchEvent:(unsigned long long)event;
@end

#endif /* IGPromoteMessageView_h */
