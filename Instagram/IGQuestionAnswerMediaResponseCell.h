//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuestionAnswerMediaResponseCell_h
#define IGQuestionAnswerMediaResponseCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGScopedListener-Protocol.h"

@class IGImageView, IGUserSession, NSString, NSURL, UIColor, UIImageView, UILabel, UIView;

@interface IGQuestionAnswerMediaResponseCell : UICollectionViewCell<IGScopedListener> {
  /* instance variables */
  UIView *_wrapperView;
  UILabel *_usernameLabel;
  IGImageView *_profilePictureImageView;
  UILabel *_restrictedLabel;
  UIView *_footerView;
  UILabel *_replyLabel;
  UIImageView *_chevronImageView;
  UIView *_newContentIndicator;
  IGImageView *_mediaResponseView;
  UIImageView *_videoIndicatorView;
  NSString *_responderPK;
  BOOL _hasSharedResponse;
  BOOL _isResponderRestricted;
  IGUserSession *_userSession;
  UIColor *_footerFillColor;
}

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (retain, nonatomic) NSURL *profilePicURL;
@property (copy, nonatomic) NSString *userName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)cellIdentifier;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)prepareForReuse;
- (void)questionAnswerDidReshareResponse:(id)response;
@end

#endif /* IGQuestionAnswerMediaResponseCell_h */
