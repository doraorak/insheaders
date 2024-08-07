//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchContainingViewController_h
#define IGSearchContainingViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"
#include "IGSearchContainingView.h"
#include "IGSearchControlling-Protocol.h"

@class NSString;
@protocol IGSearchContainingViewControllerDelegate, UIViewController<IGAnalyticsModule><IGGestureHandler;

@interface IGSearchContainingViewController : IGViewController<IGGestureHandler> {
  /* instance variables */
  UIViewController<IGAnalyticsModule><IGGestureHandler> *_resultsViewController;
  NSObject<IGSearchControlling> *_searchController;
  IGSearchContainingView *_containingView;
}

@property (readonly, nonatomic) NSString *searchText;
@property (weak, nonatomic) NSObject<IGSearchContainingViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSearchBarConfig:(id)config resultsViewController:(id)controller searchController:(id)controller headerView:(id)view headerHeight:(double)height initialQuery:(id)query shouldInitWithEmptySearchBar:(BOOL)bar;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)setConfig:(id)config;
- (void)searchViewDidTapReturnKey;
- (void)searchViewDidSearch:(id)search withText:(id)text;
- (void)searchViewDidBeginEditing:(id)editing withSearchBar:(id)bar;
- (void)searchViewDidEndEditing:(id)editing withSearchBar:(id)bar;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)analyticsModule;
- (BOOL)prefersNavigationBarHidden;
- (BOOL)prefersNavigationBarDividerHidden;
- (BOOL)prefersStatusBarHidden;
- (void)hideSearchBar:(BOOL)bar;
- (void)setDebounceEnabled:(BOOL)enabled withDebounceTimeInSeconds:(double)seconds;
@end

#endif /* IGSearchContainingViewController_h */
