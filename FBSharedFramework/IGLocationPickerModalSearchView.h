//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocationPickerModalSearchView_h
#define IGLocationPickerModalSearchView_h
@import Foundation;

#include "UIView.h"
#include "IGSearchBar.h"
#include "IGTapButton.h"

@class UIView;
@protocol IGLocationPickerModalSearchViewDelegate;

@interface IGLocationPickerModalSearchView : UIView {
  /* instance variables */
  IGTapButton *_locateButton;
  IGTapButton *_cancelButton;
  IGSearchBar *_searchBar;
  UIView *_loadingView;
  NSObject<IGLocationPickerModalSearchViewDelegate> *_delegate;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame searchBar:(id)bar delegate:(id)delegate;
- (void)layoutSubviews;
- (void)_cancelButtonTapped;
- (void)_locateButtonTapped;
@end

#endif /* IGLocationPickerModalSearchView_h */
