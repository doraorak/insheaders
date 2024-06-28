//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVThumbnailCell_h
#define IGTVThumbnailCell_h
@import Foundation;

#include "IGDelayedBouncyCollectionViewCell.h"
#include "IGTVThumbnailView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;
@protocol IGTVThumbnailCellDelegate;

@interface IGTVThumbnailCell : IGDelayedBouncyCollectionViewCell<UIGestureRecognizerDelegate> {
  /* instance variables */
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
  NSObject<IGTVThumbnailCellDelegate> *_delegate;
}

@property (readonly, nonatomic) IGTVThumbnailView *thumbnailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_handleLongPressGesture:(id)gesture;
- (void)prepareForReuse;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
@end

#endif /* IGTVThumbnailCell_h */
