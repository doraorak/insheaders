//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenDiscardFormViewController_h
#define IGLeadGenDiscardFormViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGBannerViewModel, IGBottomButtonsView, IGListAdapter, NSString, UICollectionView;

@interface IGLeadGenDiscardFormViewController : IGViewController<IGListAdapterDataSource> {
  /* instance variables */
  UICollectionView *_collectionView;
  IGListAdapter *_adapter;
  IGBottomButtonsView *_footerView;
  IGBannerViewModel *_bodyViewModel;
  NSString *_bodyString;
  NSString *_primaryButtonTitle;
  NSString *_secondaryButtonTitle;
  id /* block */ _primaryButtonTapHandler;
  id /* block */ _secondaryButtonTapHandler;
  id /* block */ _presentDiscardConfirmationHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBodyString:(id)string primaryButtonTitle:(id)title primaryButtonTapHandler:(id /* block */)handler secondaryButtonTitle:(id)title secondaryButtonTapHandler:(id /* block */)handler presentDiscardConfirmationHandler:(id /* block */)handler;
- (id)initWithBodyString:(id)string discardFormHandler:(id /* block */)handler dismissDiscardConfirmationHandler:(id /* block */)handler presentDiscardConfirmationHandler:(id /* block */)handler;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
@end

#endif /* IGLeadGenDiscardFormViewController_h */