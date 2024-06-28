//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveCommentsContainerView_h
#define IGLiveCommentsContainerView_h
@import Foundation;

#include "UIView.h"
#include "IGLiveCommentsBottomAlignedCollectionViewFlowLayout.h"
#include "IGLivePinnedCommentView.h"
#include "UIScrollViewDelegate-Protocol.h"

@class CAGradientLayer, NSArray, NSString, UICollectionView, UIView;
@protocol IGLiveAddonCoordinating, IGLiveCommentsContainerViewDelegate;

@interface IGLiveCommentsContainerView : UIView<UIScrollViewDelegate> {
  /* instance variables */
  UIView *_collectionViewContainer;
  CAGradientLayer *_maskLayer;
  IGLivePinnedCommentView *_pinnedCommentView;
  BOOL _isInBroadcastView;
  NSArray *_gradientStyleNone;
  NSArray *_gradientStyleTopOnly;
  NSArray *_gradientStyleBottomOnly;
  NSArray *_gradientStyleTopAndBottom;
  long long _gradientStyle;
  double _topContentOffset;
  double _bottomContentOffset;
}

@property (nonatomic) long long commentsContainerDisplayMode;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) NSObject<IGLiveCommentsContainerViewDelegate> *delegate;
@property (readonly, nonatomic) IGLiveCommentsBottomAlignedCollectionViewFlowLayout *collectionViewLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGLiveAddonCoordinating> *coordinator;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL addonLifeCycleEventEnabled;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame isInBroadcastView:(BOOL)view;
- (void)dealloc;
- (void)livePinnedCommentViewHeightDidChange:(id)change;
- (void)_pinnedCommentTapped;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)livePinnedCommentViewDidTapUnpin:(id)unpin;
- (void)configurateCoordinator:(id)coordinator;
- (void)unconfigurateCoordinator;
- (void)receiveEvent:(unsigned long long)event from:(id)from payload:(id)payload;
- (BOOL)canHandleRequest:(id)request;
- (id)handleRequest:(id)request;
@end

#endif /* IGLiveCommentsContainerView_h */
