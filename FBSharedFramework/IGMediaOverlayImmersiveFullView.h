//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaOverlayImmersiveFullView_h
#define IGMediaOverlayImmersiveFullView_h
@import Foundation;

#include "UIView.h"
#include "IGCenterLayout.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGCoreTextView.h"
#include "IGMediaTextButton.h"

@class NSString, UIImageView, UILabel, UIVisualEffectView;
@protocol IGMediaOverlayViewDelegate;

@interface IGMediaOverlayImmersiveFullView : UIView<IGCoreTextLinkHandler> {
  /* instance variables */
  UIVisualEffectView *_blurView;
  UIImageView *_hiddenIcon;
  UILabel *_titleLabel;
  IGCoreTextView *_descriptionTextView;
  IGMediaTextButton *_bottomButton;
  IGCenterLayout *_centerLayout;
  BOOL _shouldForceDarkMode;
}

@property (weak, nonatomic) NSObject<IGMediaOverlayViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)_didTapButton:(id)button;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* IGMediaOverlayImmersiveFullView_h */
