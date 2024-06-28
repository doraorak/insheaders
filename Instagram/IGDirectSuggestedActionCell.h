//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSuggestedActionCell_h
#define IGDirectSuggestedActionCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class IGDirectSmartSuggestionSuggestedActionViewModel, IGLabel, IGSimpleButton, IGStackLayout, IGTextButton;
@protocol IGDirectSmartSuggestionSuggestedActionDelegate;

@interface IGDirectSuggestedActionCell : UICollectionViewCell {
  /* instance variables */
  IGDirectSmartSuggestionSuggestedActionViewModel *_viewModel;
  IGLabel *_title;
  IGLabel *_body;
  IGTextButton *_primaryCTA;
  IGTextButton *_secondaryCTA;
  IGSimpleButton *_closeButton;
  IGStackLayout *_cellLayout;
  IGStackLayout *_ctaLayout;
}

@property (weak, nonatomic) NSObject<IGDirectSmartSuggestionSuggestedActionDelegate> *delegate;

/* instance methods */
- (void)configureWithViewModel:(id)model;
- (void)_didTapPrimaryCTA;
- (void)_didTapSecondaryCTA;
- (void)_didTapDismissButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
@end

#endif /* IGDirectSuggestedActionCell_h */
