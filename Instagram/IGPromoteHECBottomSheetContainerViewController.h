//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteHECBottomSheetContainerViewController_h
#define IGPromoteHECBottomSheetContainerViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBoostPostLogger.h"
#include "IGGestureHandler-Protocol.h"
#include "IGPromoteHECBottomSheetViewController.h"
#include "IGPromoteHECBottomSheetViewModel.h"

@class IGPartialModalInternalNavigationController, IGUserSession, NSMutableSet, NSSet, NSString;
@protocol IGPromoteHECBottomSheetContainerViewControllerDelegate;

@interface IGPromoteHECBottomSheetContainerViewController : IGPromoteViewController<IGGestureHandler> {
  /* instance variables */
  IGUserSession *_session;
  IGBoostPostLogger *_logger;
  IGPromoteHECBottomSheetViewModel *_hecBottomSheetViewModel;
  NSSet *_regulatedCategories;
  long long _selectedRegulatedCategory;
  NSMutableSet *_selectedRegulatedCategories;
  IGPartialModalInternalNavigationController *_navigationController;
  IGPromoteHECBottomSheetViewController *_hecViewController;
  BOOL _isSelectedFormViolatingHECPolicy;
}

@property (weak, nonatomic) NSObject<IGPromoteHECBottomSheetContainerViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session selectedRegulatedCategory:(long long)category logger:(id)logger isSelectedFormViolatingHECPolicy:(BOOL)hecpolicy;
- (id)initWithSession:(id)session regulatedCategories:(id)categories selectedRegulatedCategories:(id)categories hecBottomSheetViewModel:(id)model logger:(id)logger isSelectedFormViolatingHECPolicy:(BOOL)hecpolicy;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)promoteHECBottomSheetViewControllerViewWillAppear:(id)appear;
- (void)promoteHECBottomSheetViewControllerDidTapLearnMore:(id)more;
- (void)promoteHECBottomSheetViewController:(id)controller didSelectRegulatedCategory:(long long)category;
- (void)promoteHECBottomSheetViewControllerDidTapDoneButton:(id)button selectedRegulatedCategories:(id)categories;
- (void)promoteHECBottomSheetViewController:(id)controller didUpdateCheckMarkViewModel:(id)model;
@end

#endif /* IGPromoteHECBottomSheetContainerViewController_h */
