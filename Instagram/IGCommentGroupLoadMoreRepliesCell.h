//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentGroupLoadMoreRepliesCell_h
#define IGCommentGroupLoadMoreRepliesCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGListBindable-Protocol.h"

@class NSString, UIActivityIndicatorView, UILabel, UIView;

@interface IGCommentGroupLoadMoreRepliesCell : UICollectionViewCell<IGListBindable> {
  /* instance variables */
  UIView *_lineView;
  UILabel *_loadLabel;
  UIActivityIndicatorView *_activityIndicator;
  BOOL _useFacebookCommentStyle;
  BOOL _reduceTopPadding;
}

@property (nonatomic) BOOL isLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)bindViewModel:(id)model;
- (void)layoutSubviews;
@end

#endif /* IGCommentGroupLoadMoreRepliesCell_h */
