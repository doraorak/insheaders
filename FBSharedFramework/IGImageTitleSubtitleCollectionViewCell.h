//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImageTitleSubtitleCollectionViewCell_h
#define IGImageTitleSubtitleCollectionViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGCellSwipeActionManager.h"
#include "IGImageTitleSubtitleView.h"
#include "IGImageTitleSubtitleViewModel.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGImageTitleSubtitleCollectionViewCellDelegate;

@interface IGImageTitleSubtitleCollectionViewCell : UICollectionViewCell<NSObject> {
  /* instance variables */
  IGCellSwipeActionManager *_cellSwipeActionManager;
  IGImageTitleSubtitleViewModel *_viewModel;
  NSObject<IGImageTitleSubtitleCollectionViewCellDelegate> *_delegate;
  BOOL _contextButtonsAreOpen;
}

@property (readonly, nonatomic) IGImageTitleSubtitleView *imageTitleSubtitleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModel:(id)model delegate:(id)delegate;
- (void)prepareForReuse;
- (BOOL)cellSwipeActionManagerShouldShowActions:(id)actions panGestureRecognizer:(id)recognizer;
- (void)cellSwipeActionManagerDidShowActions:(id)actions;
- (void)cellSwipeActionManagerDidHideActions:(id)actions;
- (void)cellSwipeActionManagerDidStartPanGestureRecognition:(id)recognition;
- (void)_didTapContextButton:(id)button;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
@end

#endif /* IGImageTitleSubtitleCollectionViewCell_h */
