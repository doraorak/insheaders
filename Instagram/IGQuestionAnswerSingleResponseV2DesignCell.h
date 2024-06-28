//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuestionAnswerSingleResponseV2DesignCell_h
#define IGQuestionAnswerSingleResponseV2DesignCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGQuestionAnswerSingleResponseViewModel.h"
#include "IGScopedListener-Protocol.h"

@class IGImageView, IGUserSession, NSString, UIImageView, UILabel, UIView;

@interface IGQuestionAnswerSingleResponseV2DesignCell : UICollectionViewCell<IGScopedListener> {
  /* instance variables */
  IGUserSession *_userSession;
  UIView *_wrapperView;
  UIView *_footerView;
  UILabel *_responseLabel;
  UILabel *_usernameLabel;
  UILabel *_replyLabel;
  UIImageView *_chevronImageView;
  IGImageView *_profilePictureImageView;
  IGQuestionAnswerSingleResponseViewModel *_model;
  UIView *_newContentIndicator;
  BOOL _borderAlwaysHidden;
}

@property (nonatomic) BOOL footerHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)wrapperBorderColor:(id *)color wrapperBorderWidth:(double *)width footerBackgroundColor:(id *)color footerForegroundColor:(id *)color textColor:(id *)color forBackgroundFillColor:(id)color;
+ (id)cellIdentifier;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)questionAnswerDidReshareResponse:(id)response;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityHint;
@end

#endif /* IGQuestionAnswerSingleResponseV2DesignCell_h */