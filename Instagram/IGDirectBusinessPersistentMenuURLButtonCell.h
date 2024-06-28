//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectBusinessPersistentMenuURLButtonCell_h
#define IGDirectBusinessPersistentMenuURLButtonCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDirectBusinessPersistentMenuURLButtonViewModel.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UILabel, UITapGestureRecognizer;
@protocol IGDirectBusinessPersistentMenuURLButtonCellDelegate;

@interface IGDirectBusinessPersistentMenuURLButtonCell : UICollectionViewCell<UIGestureRecognizerDelegate> {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_URLLabel;
  UITapGestureRecognizer *_tapGesture;
}

@property (readonly, nonatomic) IGDirectBusinessPersistentMenuURLButtonViewModel *viewModel;
@property (weak, nonatomic) NSObject<IGDirectBusinessPersistentMenuURLButtonCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didTapURLButton:(id)urlbutton;
@end

#endif /* IGDirectBusinessPersistentMenuURLButtonCell_h */
