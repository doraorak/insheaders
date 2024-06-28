//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerBottomBar_h
#define IGSundialViewerBottomBar_h
@import Foundation;

#include "UIView.h"
#include "IGSundialViewerCTAButton.h"
#include "NSObject-Protocol.h"

@class NSString, UIButton, UILabel, UIView;
@protocol IGSundialViewerBottomBarDelegate;

@interface IGSundialViewerBottomBar : UIView<NSObject> {
  /* instance variables */
  UIButton *_addCommentButton;
  UILabel *_detailLabel;
  IGSundialViewerCTAButton *_ctaButton;
  UIView *_ovalContainer;
  BOOL _fakeComposerEnabled;
  BOOL _commentBarDisabled;
  UILabel *_chainIndexLabel;
  UILabel *_chainTypeLabel;
  long long _ctaButtonType;
}

@property (weak, nonatomic) NSObject<IGSundialViewerBottomBarDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCTAButtonType:(long long)type fakeComposerEnabled:(BOOL)enabled commentBarDisabled:(BOOL)disabled;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_didTapAddComment;
- (void)_didTapCTAButton:(id)ctabutton;
- (void)setAppearance:(long long)appearance;
@end

#endif /* IGSundialViewerBottomBar_h */