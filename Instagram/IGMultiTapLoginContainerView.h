//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMultiTapLoginContainerView_h
#define IGMultiTapLoginContainerView_h
@import Foundation;

#include "UIScrollView.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGMultiTapLoginContainerViewModel.h"
#include "IGMultiTapLoginFooterView.h"

@class IGCoreTextView, NSString, UIButton, UICollectionView, UIImageView, UIView;
@protocol IGMultiTapLoginContainerViewDelegate;

@interface IGMultiTapLoginContainerView : UIScrollView<IGCoreTextLinkHandler> {
  /* instance variables */
  UIButton *_dismissButton;
  UIImageView *_brandingImageView;
  UIButton *_manageAccountsButton;
  IGCoreTextView *_termView;
  IGCoreTextView *_rankingOfContentView;
  IGMultiTapLoginFooterView *_footerView;
  UIView *_contentView;
  IGMultiTapLoginContainerViewModel *_viewModel;
  NSObject<IGMultiTapLoginContainerViewDelegate> *_oneTapDelegate;
}

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
- (void)setIsLoading:(BOOL)loading;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)multiTapLoginFooterViewDidTapPrimaryButton:(id)button;
- (void)multiTapLoginFooterViewDidTapSecondaryButton:(id)button;
- (void)_didTapEditAccountsButton;
- (void)_didTapDismissButton;
@end

#endif /* IGMultiTapLoginContainerView_h */