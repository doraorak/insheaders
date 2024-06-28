//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectBottomSheetThreadFilterTypeViewController_h
#define IGDirectBottomSheetThreadFilterTypeViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDSListSectionControllerDataSource-Protocol.h"
#include "IGDSListSectionControllerDelegate-Protocol.h"
#include "IGDirectInboxThreadFilterViewModel.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGDirectBottomSheetViewControllerDelegate;

@interface IGDirectBottomSheetThreadFilterTypeViewController : IGViewController<IGListAdapterDataSource, IGDSListSectionControllerDataSource, IGDSListSectionControllerDelegate, IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  NSArray *_threadsFilters;
  IGDirectInboxThreadFilterViewModel *_viewModel;
  NSObject<IGDirectBottomSheetViewControllerDelegate> *_bottomSheetDelegate;
  long long _selectedThreadFilterTypeIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBottomSheetThreadFilterTypeViewControllerWithUserSession:(id)session threadsFilters:(id)filters viewModel:(id)model;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)modalSheetViewController;
- (void)show;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)_didTapClearButton;
- (id)listSectionController:(id)controller viewModelsForObject:(id)object;
- (id)listSectionController:(id)controller headerForObject:(id)object;
- (id)listSectionController:(id)controller footerForObject:(id)object;
- (void)listSectionController:(id)controller didDeselectItemAtIndex:(long long)index viewModel:(id)model;
- (void)listSectionController:(id)controller didSelectItemAtIndex:(long long)index viewModel:(id)model;
- (void)listSectionController:(id)controller didTapLinkAtIndex:(long long)index viewModel:(id)model linkText:(id)text url:(id)url;
- (void)listSectionController:(id)controller didTapHeaderButtonWithViewModel:(id)model;
- (void)listSectionController:(id)controller didTapFooterLinkWithViewModel:(id)model linkText:(id)text url:(id)url;
- (void)listSectionController:(id)controller didSwitchSelectItemAtIndex:(long long)index value:(BOOL)value viewModel:(id)model;
@end

#endif /* IGDirectBottomSheetThreadFilterTypeViewController_h */
