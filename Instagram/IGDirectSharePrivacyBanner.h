//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSharePrivacyBanner_h
#define IGDirectSharePrivacyBanner_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextLinkHandler-Protocol.h"

@class IGCoreTextView, IGImageTitleSubtitleView, IGImageTitleSubtitleViewLayoutSpec, IGImageTitleSubtitleViewModel, NSString, UIView;
@protocol IGDirectShareSheetLinkDisclosureDelegate;

@interface IGDirectSharePrivacyBanner : UIView<IGCoreTextLinkHandler> {
  /* instance variables */
  IGImageTitleSubtitleView *_imageTitleSubtitleView;
  IGImageTitleSubtitleViewLayoutSpec *_layoutSpec;
  IGImageTitleSubtitleViewModel *_viewModel;
  UIView *_bottomBorder;
  IGCoreTextView *_messageLabel;
}

@property (weak, nonatomic) NSObject<IGDirectShareSheetLinkDisclosureDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initMessageOnlyWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWarningMessage:(id)message withTitle:(id)title image:(id)image customBackgroundColor:(id)color;
- (void)configureMessageOnlyPrivacyBanner:(id)banner;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGDirectSharePrivacyBanner_h */
