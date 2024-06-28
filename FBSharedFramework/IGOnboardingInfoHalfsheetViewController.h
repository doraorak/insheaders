//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGOnboardingInfoHalfsheetViewController_h
#define IGOnboardingInfoHalfsheetViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGBottomButtonsView.h"
#include "IGGestureHandler-Protocol.h"
#include "IGImageView.h"
#include "IGOnboardingInfoHeaderViewModel.h"

@class NSArray, NSMutableArray, NSString, UILabel, UIView;

@interface IGOnboardingInfoHalfsheetViewController : UIViewController<IGGestureHandler> {
  /* instance variables */
  UILabel *_titleLabel;
  UIView *_titleSeparator;
  BOOL _showNavigationBar;
  IGImageView *_headerImageView;
  IGOnboardingInfoHeaderViewModel *_headerItem;
  NSMutableArray *_infoRowViews;
  NSArray *_rowItems;
  IGBottomButtonsView *_bottomButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRowItems:(id)items headerItem:(id)item bottomButtonsStyle:(id)style;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)configureNoAnimationOnPopViewController;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)_onBackButtonTapped;
@end

#endif /* IGOnboardingInfoHalfsheetViewController_h */