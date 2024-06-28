//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImmersiveFeedAppearanceDarkOnFirstScrollHandler_h
#define IGImmersiveFeedAppearanceDarkOnFirstScrollHandler_h
@import Foundation;

#include "IGImmersiveNewPostsIndicatorController.h"
#include "IGImmersiverHeaderContainerView.h"
#include "IGScrollViewListener-Protocol.h"

@class IGViewController, NSString, UICollectionView, UIViewPropertyAnimator;
@protocol UICollectionViewLayout<IGDynamicPagingCompatibleLayoutType;

@interface IGImmersiveFeedAppearanceDarkOnFirstScrollHandler : NSObject<IGScrollViewListener> {
  /* instance variables */
  IGViewController *_viewController;
  UICollectionViewLayout<IGDynamicPagingCompatibleLayoutType> *_dynamicPageLayout;
  UICollectionView *_collectionView;
  IGImmersiverHeaderContainerView *_headerContainer;
  IGImmersiveNewPostsIndicatorController *_newPostsIndicatorController;
  UIViewPropertyAnimator *_immersionAnimator;
  BOOL _initiallyImmersiveWhenAnimating;
  BOOL _isImmersive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScrollViewAnnouncer:(id)announcer viewController:(id)controller newPostsIndicatorController:(id)controller dynamicPageLayout:(id)layout collectionView:(id)view headerContainer:(id)container;
- (long long)preferredStatusBarStyle;
- (long long)preferredBarAppearance;
- (void)viewWillAppear:(BOOL)appear;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity finalizedTargetContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndScrolling:(id)scrolling;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewWillScrollToTop:(id)top;
- (void)scrollViewDidScrollToTop:(id)top;
@end

#endif /* IGImmersiveFeedAppearanceDarkOnFirstScrollHandler_h */