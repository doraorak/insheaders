//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGenericMegaphoneViewV2_h
#define IGGenericMegaphoneViewV2_h
@import Foundation;

#include "UIView.h"
#include "IGImageViewDelegate-Protocol.h"

@class IGGenericMegaphone, IGImageView, NSArray, NSString, UIButton, UIColor, UILabel, UITextView, UIView;
@protocol IGGenericMegaphoneViewV2Delegate;

@interface IGGenericMegaphoneViewV2 : UIView<IGImageViewDelegate> {
  /* instance variables */
  IGGenericMegaphone *_megaphone;
  NSString *_module;
  UIColor *_customButtonOneColor;
  UIColor *_customButtonTwoColor;
  UIColor *_customButtonThreeColor;
  BOOL _hasMegaphoneViewResetted;
  NSArray *_accessibilityElements;
  BOOL _megaphoneSeen;
  UITextView *_messageView;
  UILabel *_bottomMessageView;
  IGImageView *_bottomImageView;
  UIView *_lineView;
  UIButton *_buttonOne;
  UIButton *_buttonTwo;
  UIButton *_buttonThree;
  UIView *_buttonsView;
}

@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) IGImageView *imageView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) UIView *bottomView;
@property (copy, nonatomic) NSString *displaySource;
@property (weak, nonatomic) NSObject<IGGenericMegaphoneViewV2Delegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMegaphone:(id)megaphone module:(id)module;
- (id)megaphone;
- (void)adjustOpacityForViewWithShouldAnimate:(BOOL)animate;
- (void)resetOpacityForView;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (void)_didDismiss;
- (void)_didSelectButtonOne;
- (void)_didSelectButtonTwo;
- (void)_didSelectButtonThree;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)index;
- (long long)indexOfAccessibilityElement:(id)element;
- (id)accessibilityElements;
@end

#endif /* IGGenericMegaphoneViewV2_h */
