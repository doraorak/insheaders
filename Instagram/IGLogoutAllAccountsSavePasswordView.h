//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLogoutAllAccountsSavePasswordView_h
#define IGLogoutAllAccountsSavePasswordView_h
@import Foundation;

#include "UIView.h"

@class IGBottomButtonsView, IGLabel, IGListCollectionView, UIView;
@protocol IGLogoutAllAccountsSavePasswordViewDelegate;

@interface IGLogoutAllAccountsSavePasswordView : UIView {
  /* instance variables */
  UIView *_headerContainerView;
  UIView *_saveLoginInfoContainerView;
  UIView *_logoutInfoContainerView;
  IGLabel *_titleLabel;
  IGLabel *_saveLoginInfoLabel;
  IGLabel *_logoutInfoLabel;
  IGListCollectionView *_accountListView;
  IGBottomButtonsView *_logOutButton;
}

@property (weak, nonatomic) NSObject<IGLogoutAllAccountsSavePasswordViewDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (double)minimumHeight;
- (id)collectionView;
@end

#endif /* IGLogoutAllAccountsSavePasswordView_h */
