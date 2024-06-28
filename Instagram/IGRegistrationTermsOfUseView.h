//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationTermsOfUseView_h
#define IGRegistrationTermsOfUseView_h
@import Foundation;

#include "UIView.h"
#include "IGNUXLayoutSpec.h"

@class UIButton, UICollectionView, UILabel, UIView;
@protocol IGRegistrationTermsOfUseViewDelegate;

@interface IGRegistrationTermsOfUseView : UIView {
  /* instance variables */
  IGNUXLayoutSpec *_layoutSpec;
  UILabel *_titleLabel;
  UILabel *_descriptionLabel;
  UIView *_buttonSeparator;
  UIButton *_continueButton;
}

@property (weak, nonatomic) NSObject<IGRegistrationTermsOfUseViewDelegate> *delegate;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL buttonEnabled;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame layoutSpec:(id)spec;
- (void)layoutSubviews;
- (void)_didTapNextButton;
- (BOOL)isButtonEnabled;
@end

#endif /* IGRegistrationTermsOfUseView_h */