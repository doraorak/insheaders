//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenBusinessProfileView_h
#define IGLeadGenBusinessProfileView_h
@import Foundation;

#include "UIButton.h"
#include "IGLeadGenBusinessProfileHeaderViewModel.h"
#include "IGProfilePictureImageViewTapDelegate-Protocol.h"

@class IGLabel, IGProfilePictureImageView, NSString, UIButton;
@protocol IGLeadGenBusinessProfileViewDelegate;

@interface IGLeadGenBusinessProfileView : UIButton<IGProfilePictureImageViewTapDelegate> {
  /* instance variables */
  IGProfilePictureImageView *_profileImageView;
  UIButton *_infoIconButton;
  IGLeadGenBusinessProfileHeaderViewModel *_businessProfileHeaderViewModel;
  IGLabel *_titleLabel;
  IGLabel *_subtextLabel;
}

@property (weak, nonatomic) NSObject<IGLeadGenBusinessProfileViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame businessProfileHeaderViewModel:(id)model;
- (void)layoutSubviews;
- (void)_addInfoIconButton;
- (void)_addTitleLabel;
- (void)_didTapClickableBusinessProfileHeader;
- (void)_didTapUnclickableBusinessProfileHeader;
- (void)_didTapInfoIcon;
- (void)profilePictureTapped:(id)tapped;
@end

#endif /* IGLeadGenBusinessProfileView_h */
