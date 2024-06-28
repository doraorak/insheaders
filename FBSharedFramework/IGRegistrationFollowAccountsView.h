//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationFollowAccountsView_h
#define IGRegistrationFollowAccountsView_h
@import Foundation;

#include "UIView.h"
#include "IGLabel.h"
#include "IGListCollectionView.h"

@class NSString, UIButton;
@protocol IGRegistrationFollowAccountsViewDelegate;

@interface IGRegistrationFollowAccountsView : UIView {
  /* instance variables */
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _preferredContentInsets;
  NSString *_navigationBarTitleText;
  UIButton *_nextButton;
  UIButton *_cancelButton;
  IGLabel *_navigationBarTitle;
  IGListCollectionView *_followListsView;
  long long _entryPoint;
}

@property (weak, nonatomic) NSObject<IGRegistrationFollowAccountsViewDelegate> *delegate;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)layoutSubviews;
- (id)collectionView;
- (void)_nextButtonTapped;
- (void)_cancelButtonTapped;
@end

#endif /* IGRegistrationFollowAccountsView_h */