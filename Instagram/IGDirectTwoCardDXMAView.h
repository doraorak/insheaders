//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectTwoCardDXMAView_h
#define IGDirectTwoCardDXMAView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectCardDXMAContentView.h"
#include "IGDirectCardDXMAContentViewDelegate-Protocol.h"
#include "IGDirectPromptCardView.h"
#include "IGDirectTwoCardDXMAViewDelegate-Protocol.h"

@interface IGDirectTwoCardDXMAView : UIView<IGDirectCardDXMAContentViewDelegate> {
  /* instance variables */
  IGDirectPromptCardView *_primaryCard;
  IGDirectPromptCardView *_secondaryCard;
  IGDirectCardDXMAContentView *_primaryContentView;
  IGDirectCardDXMAContentView *_secondaryContentView;
}

@property (weak, nonatomic) NSObject<IGDirectTwoCardDXMAViewDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_setupSubviews;
- (id)_createPromptCardWithContentView:(id)view;
- (void)layoutSubviews;
- (void)configureWithPrimaryContentViewModel:(id)model secondaryContentViewModel:(id)model;
- (void)cardDXMAContentViewDidTapWithActionInfo:(id)info actionURL:(id)url;
@end

#endif /* IGDirectTwoCardDXMAView_h */