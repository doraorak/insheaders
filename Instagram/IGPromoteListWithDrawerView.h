//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteListWithDrawerView_h
#define IGPromoteListWithDrawerView_h
@import Foundation;

#include "UIView.h"
#include "IGPromoteEducationDrawerBannerView.h"
#include "IGPromoteEducationDrawerTextView.h"

@class IGBannerView, UIActivityIndicatorView, UICollectionView, UIView;
@protocol IGPromoteAdditionalBusinessInfoBannerViewDelegate;

@interface IGPromoteListWithDrawerView : UIView {
  /* instance variables */
  UIActivityIndicatorView *_spinnerView;
  UIView *_contentView;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
  IGPromoteEducationDrawerBannerView *_drawerBannerView;
  IGBannerView *_igBannerView;
  IGPromoteEducationDrawerTextView *_drawerTextView;
  NSObject<IGPromoteAdditionalBusinessInfoBannerViewDelegate> *_additionalBusinessInfoBannerViewDelegate;
}

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long viewState;

/* instance methods */
- (id)initWithDrawerViewModel:(id)model contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)layoutSubviews;
@end

#endif /* IGPromoteListWithDrawerView_h */