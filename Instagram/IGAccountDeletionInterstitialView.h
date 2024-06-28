//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAccountDeletionInterstitialView_h
#define IGAccountDeletionInterstitialView_h
@import Foundation;

#include "UIView.h"

@class IGBottomButtonsView, IGDSHeadlineView, UIScrollView;
@protocol IGAccountDeletionInterstitialViewDelegate;

@interface IGAccountDeletionInterstitialView : UIView {
  /* instance variables */
  UIScrollView *_scrollView;
  IGDSHeadlineView *_headlineView;
  IGBottomButtonsView *_bottomButtonsView;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _preferredContentInsets;
}

@property (weak, nonatomic) NSObject<IGAccountDeletionInterstitialViewDelegate> *delegate;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)layoutSubviews;
@end

#endif /* IGAccountDeletionInterstitialView_h */
