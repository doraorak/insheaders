//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGServiceShopsGetQuoteFlaggedFormViewController_h
#define IGServiceShopsGetQuoteFlaggedFormViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGPromoteTitleSubtitleViewModel.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGDSHeadlineViewModel, IGListAdapter, IGUserSession, NSString, UICollectionView;

@interface IGServiceShopsGetQuoteFlaggedFormViewController : IGViewController<IGListAdapterDataSource, UICollectionViewDelegate> {
  /* instance variables */
  IGUserSession *_session;
  IGListAdapter *_adapter;
  UICollectionView *_contentView;
  IGBottomButtonsView *_bottomButtonView;
  IGDSHeadlineViewModel *_headlineViewModel;
  IGPromoteTitleSubtitleViewModel *_titleSubtitleViewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapCellTitleWithViewModel:(id)model;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapSubtitleLink:(id)link;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapTitleLinkWithViewModel:(id)model;
- (void)_didTapBackButton;
@end

#endif /* IGServiceShopsGetQuoteFlaggedFormViewController_h */