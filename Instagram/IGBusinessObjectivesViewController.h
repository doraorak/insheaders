//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBusinessObjectivesViewController_h
#define IGBusinessObjectivesViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGBusinessObjectivesService.h"
#include "IGEmbeddedListViewControllerDelegate-Protocol.h"
#include "IGListSingleSectionControllerDelegate-Protocol.h"

@class IG4BLogger, IGBottomButtonsView, IGDSHeadlineView, IGEmbeddedListViewController, IGStepperHeaderControl, IGUserSession, NSArray, NSMutableArray, NSString, UIActivityIndicatorView;
@protocol IGBusinessObjectivesViewControllerDelegate;

@interface IGBusinessObjectivesViewController : IGViewController<IGEmbeddedListViewControllerDelegate, IGListSingleSectionControllerDelegate> {
  /* instance variables */
  long long _currentObjectivesStep;
  IGUserSession *_userSession;
  IGDSHeadlineView *_headlineView;
  IG4BLogger *_logger;
  IGEmbeddedListViewController *_embeddedListViewController;
  NSArray *_embeddedListViewModels;
  UIActivityIndicatorView *_emptyView;
  IGStepperHeaderControl *_stepperHeaderControl;
  IGBottomButtonsView *_bottomButtonView;
  NSArray *_selectableOptions;
  NSMutableArray *_previouslySelectedOptions;
  NSMutableArray *_currentlySelectedOptions;
  IGBusinessObjectivesService *_businessObjectiveService;
  BOOL _shouldUseTopNavigation;
  NSObject<IGBusinessObjectivesViewControllerDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session objectives:(id)objectives previouslySelectedOptions:(id)options logger:(id)logger shouldUseTopNavigation:(BOOL)navigation delegate:(id)delegate;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (void)didSelectSectionController:(id)controller withObject:(id)object;
- (id)embeddedListViewController:(id)controller sectionControllerForViewModel:(id)model;
- (void)embeddedListViewController:(id)controller scrollReachedEnd:(id)end;
- (void)embeddedListViewController:(id)controller willDisplayObject:(id)object atIndex:(long long)index;
- (void)_didTapCancelButton;
- (void)_didTapBackButton;
- (long long)preferredTabBarBehavior;
@end

#endif /* IGBusinessObjectivesViewController_h */
