//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileBioView_h
#define IGProfileBioView_h
@import Foundation;

#include "UIView.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGCoreTextNonLinkHandler-Protocol.h"
#include "IGProfileBioViewDelegate-Protocol.h"

@class IGButton, IGCoreTextView, IGStyledString, NSString, UILongPressGestureRecognizer;

@interface IGProfileBioView : UIView<IGCoreTextLinkHandler, IGCoreTextNonLinkHandler> {
  /* instance variables */
  IGCoreTextView *_infoLabelView;
  IGButton *_translateButton;
  double _avatarPadding;
  BOOL _shouldShowCollapsedBio;
  BOOL _truncateSingleLine;
  IGStyledString *_fullCollapsibleBioString;
  IGStyledString *_remainingBioString;
  UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (weak, nonatomic) NSObject<IGProfileBioViewDelegate> *delegate;
@property (nonatomic) BOOL enableLongPress;
@property (nonatomic) BOOL enableTapToUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)textWidth:(double)width edgeSpacing:(double)spacing;
+ (double)preferredHeightForWidth:(double)width collapsibleBioString:(id)string remainingBioString:(id)string shouldCollapse:(BOOL)collapse truncateSingleLine:(BOOL)line showTranslateButton:(BOOL)button avatarPadding:(double)padding;
+ (id)_truncatedBioWithOriginalString:(id)string width:(double)width truncateSingleLine:(BOOL)line;
+ (id)_moreTruncationTokenStringWithConfigurationWithStyle:(id)style;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)color;
- (id)contentString;
- (id)styledString;
- (void)_onTranslateTapped:(id)tapped;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextView:(id)view didLongTapOnString:(id)string URL:(id)url;
- (void)coreTextViewDidTapOnNonLinkedString:(id)string touchEvent:(unsigned long long)event;
- (void)_handleLongPressOnBio:(id)bio;
@end

#endif /* IGProfileBioView_h */
