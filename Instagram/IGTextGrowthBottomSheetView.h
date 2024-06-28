//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTextGrowthBottomSheetView_h
#define IGTextGrowthBottomSheetView_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextLinkHandler-Protocol.h"

@class IGCoreTextView, IGStoryFacepileView, IGTextButton, NSString, UIImageView, UILabel;
@protocol IGTextGrowthBottomSheetViewDelegate;

@interface IGTextGrowthBottomSheetView : UIView<IGCoreTextLinkHandler> {
  /* instance variables */
  NSString *_userName;
  BOOL _isVerified;
  NSString *_appName;
  NSString *_defaultMessage;
  NSString *_learnMoreURL;
  UIImageView *_imageView;
  UILabel *_titleLabel;
  IGStoryFacepileView *_facepileView;
  IGCoreTextView *_subtitleLabel;
  IGTextButton *_primaryButton;
  IGCoreTextView *_transparencyTextLabel;
  long long _entryPoint;
  long long _ctaType;
}

@property (weak, nonatomic) NSObject<IGTextGrowthBottomSheetViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserName:(id)name isVerified:(BOOL)verified appName:(id)name entryPoint:(long long)point defaultMessage:(id)message users:(id)users learnMoreURL:(id)url analyticsModule:(id)module ctaType:(long long)type;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didTapPrimaryButton:(id)button;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGTextGrowthBottomSheetView_h */