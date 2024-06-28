//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProOnboardingChecklistLearnProfessionalToolsViewController_h
#define IGProOnboardingChecklistLearnProfessionalToolsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGEmbeddedListViewControllerDelegate-Protocol.h"
#include "IGListSingleSectionControllerDelegate-Protocol.h"
#include "IGProOnboardingChecklistStepItemModel.h"

@class IG4BLogger, IGDSHeadlineView, IGEmbeddedListViewController, IGUserSession, NSArray, NSString, UIActivityIndicatorView, UIBarButtonItem;
@protocol IGProOnboardingChecklistLearnProfessionalToolsViewControllerDelegate;

@interface IGProOnboardingChecklistLearnProfessionalToolsViewController : IGViewController<IGEmbeddedListViewControllerDelegate, IGListSingleSectionControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  UIBarButtonItem *_doneButton;
  IGDSHeadlineView *_headlineView;
  NSObject<IGProOnboardingChecklistLearnProfessionalToolsViewControllerDelegate> *_flowDelegate;
  IG4BLogger *_logger;
  IGEmbeddedListViewController *_embeddedListViewController;
  NSArray *_embeddedListViewModels;
  UIActivityIndicatorView *_emptyView;
  IGProOnboardingChecklistStepItemModel *_stepItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session stepItem:(id)item logger:(id)logger flowDelegate:(id)delegate;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)didSelectSectionController:(id)controller withObject:(id)object;
- (id)embeddedListViewController:(id)controller sectionControllerForViewModel:(id)model;
- (void)embeddedListViewController:(id)controller scrollReachedEnd:(id)end;
- (void)embeddedListViewController:(id)controller willDisplayObject:(id)object atIndex:(long long)index;
- (void)_didTapDoneButton;
- (void)_didTapCancelButton;
@end

#endif /* IGProOnboardingChecklistLearnProfessionalToolsViewController_h */
