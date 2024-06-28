//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSecureThreadSearchViewController_h
#define IGDirectSecureThreadSearchViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAttributedStringTextView.h"
#include "IGAttributedStringTextViewConfiguration.h"
#include "IGAttributedStringTextViewDelegate-Protocol.h"
#include "IGDirectRecipientSectionControllerSelectDelegate-Protocol.h"
#include "IGDirectRecipientService.h"
#include "IGDirectThreadCreationViewConfig.h"
#include "IGDirectThreadCreationViewControllerToolbox.h"
#include "IGListAdapter.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGSearchBarConfig.h"
#include "IGSearchBarDelegate-Protocol.h"
#include "IGSearchBarWithCancel.h"
#include "IGSpinnerLabelViewModel.h"
#include "IGUserSession.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSAttributedString, NSMutableOrderedSet, NSString, UICollectionView, UIView;

@interface IGDirectSecureThreadSearchViewController : IGViewController<IGSearchBarDelegate, IGListAdapterDataSource, IGDirectRecipientSectionControllerSelectDelegate, IGAttributedStringTextViewDelegate, UIScrollViewDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDirectThreadCreationViewConfig *_configuration;
  IGSearchBarWithCancel *_searchBarWithCancel;
  IGSearchBarConfig *_searchBarConfig;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGDirectRecipientService *_recipientService;
  long long _state;
  BOOL _searchResultIsLocal;
  IGSpinnerLabelViewModel *_spinnerLabelViewModel;
  IGDirectThreadCreationViewControllerToolbox *_toolbox;
  IGAttributedStringTextView *_bannerTextView;
  IGAttributedStringTextViewConfiguration *_bannerTextViewConfig;
  NSAttributedString *_bannerTextViewAttributedString;
  NSMutableOrderedSet *_defaultRecipients;
  NSMutableOrderedSet *_searchFollowingRecipients;
  NSMutableOrderedSet *_searchNotFollowingRecipients;
  unsigned long long _entryPoint;
  UIView *_emptyView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session entryPoint:(unsigned long long)point configuration:(id)configuration toolbox:(id)toolbox;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)_searchBarCancelTapped;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (void)attributedStringTextView:(id)view didTapLink:(id)link;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)scrollViewDidScroll:(id)scroll;
- (void)recipientSectionController:(id)controller didSelectViewModel:(id)model;
- (void)recipientSectionController:(id)controller didDeselectViewModel:(id)model;
- (void)recipientSectionController:(id)controller didLongPressViewModel:(id)model;
- (BOOL)recipientSectionController:(id)controller shouldLongPressViewModel:(id)model;
- (void)recipientSectionController:(id)controller didTapSubtitleViewModel:(id)model;
@end

#endif /* IGDirectSecureThreadSearchViewController_h */