//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMediaPileView_h
#define IGDirectMediaPileView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectHorizontalMediaPileView.h"
#include "IGDirectMediaPileViewModel.h"
#include "IGDirectVerticalMediaPileView.h"

@protocol IGDirectMediaPileBubbleViewDelegate;

@interface IGDirectMediaPileView : UIView {
  /* instance variables */
  IGDirectHorizontalMediaPileView *_horizontalMediaPileView;
  IGDirectVerticalMediaPileView *_verticalMediaPileView;
  IGDirectMediaPileViewModel *_viewModel;
}

@property (weak, nonatomic) NSObject<IGDirectMediaPileBubbleViewDelegate> *delegate;

/* instance methods */
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model ringViewSpecFactory:(id)factory;
@end

#endif /* IGDirectMediaPileView_h */
