//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemPreviewCommentCell_h
#define IGFeedItemPreviewCommentCell_h
@import Foundation;

#include "IGFeedItemTextCell.h"
#include "IGFeedItemPreviewCommentCellDelegate-Protocol.h"
#include "IGFeedItemTextCellMediaInfo.h"
#include "NSObject-Protocol.h"

@class IGCommentModel, NSString, UIButton, UIView;

@interface IGFeedItemPreviewCommentCell : IGFeedItemTextCell<NSObject> {
  /* instance variables */
  UIView *_threadView;
  IGFeedItemTextCellMediaInfo *_mediaInfo;
  BOOL _threadViewVisible;
  NSObject<IGFeedItemPreviewCommentCellDelegate> *_likeDelegate;
  IGCommentModel *_commentModel;
}

@property (nonatomic) double topPadding;
@property (readonly, nonatomic) UIButton *likeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithStyledString:(id)string mediaInfo:(id)info feedItemRow:(id)row cellDelegate:(id)delegate touchHandlerDelegate:(id)delegate topPadding:(double)padding userSession:(id)session;
- (void)layoutTextView;
- (void)_didTapLikeButton;
- (id)accessibleElements;
- (id)mediaPK;
- (BOOL)isViewSweepMemberPartOfAds;
@end

#endif /* IGFeedItemPreviewCommentCell_h */