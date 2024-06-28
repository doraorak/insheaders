//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UISplitViewControllerDelegate_Protocol_h
#define UISplitViewControllerDelegate_Protocol_h
@import Foundation;

@protocol UISplitViewControllerDelegate 
@optional
/* instance methods */
- (void)splitViewController:(id)controller willChangeToDisplayMode:(long long)mode;
- (long long)targetDisplayModeForActionInSplitViewController:(id)controller;
- (BOOL)splitViewController:(id)controller showViewController:(id)controller sender:(id)sender;
- (BOOL)splitViewController:(id)controller showDetailViewController:(id)controller sender:(id)sender;
- (id)primaryViewControllerForCollapsingSplitViewController:(id)controller;
- (id)primaryViewControllerForExpandingSplitViewController:(id)controller;
- (BOOL)splitViewController:(id)controller collapseSecondaryViewController:(id)controller ontoPrimaryViewController:(id)controller;
- (id)splitViewController:(id)controller separateSecondaryViewControllerFromPrimaryViewController:(id)controller;
- (unsigned long long)splitViewControllerSupportedInterfaceOrientations:(id)orientations;
- (long long)splitViewControllerPreferredInterfaceOrientationForPresentation:(id)presentation;
- (void)splitViewController:(id)controller willHideViewController:(id)controller withBarButtonItem:(id)item forPopoverController:(id)controller;
- (void)splitViewController:(id)controller willShowViewController:(id)controller invalidatingBarButtonItem:(id)item;
- (void)splitViewController:(id)controller popoverController:(id)controller willPresentViewController:(id)controller;
- (BOOL)splitViewController:(id)controller shouldHideViewController:(id)controller inOrientation:(long long)orientation;
- (long long)splitViewController:(id)controller topColumnForCollapsingToProposedTopColumn:(long long)column;
- (long long)splitViewController:(id)controller displayModeForExpandingToProposedDisplayMode:(long long)mode;
- (void)splitViewControllerDidCollapse:(id)collapse;
- (void)splitViewControllerDidExpand:(id)expand;
- (void)splitViewController:(id)controller willShowColumn:(long long)column;
- (void)splitViewController:(id)controller willHideColumn:(long long)column;
- (void)splitViewControllerInteractivePresentationGestureWillBegin:(id)begin;
- (void)splitViewControllerInteractivePresentationGestureDidEnd:(id)end;
@end

#endif /* UISplitViewControllerDelegate_Protocol_h */
