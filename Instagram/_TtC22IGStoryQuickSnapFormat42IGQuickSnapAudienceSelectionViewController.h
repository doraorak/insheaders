//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGStoryQuickSnapFormat42IGQuickSnapAudienceSelectionViewController_h
#define _TtC22IGStoryQuickSnapFormat42IGQuickSnapAudienceSelectionViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC22IGStoryQuickSnapFormat42IGQuickSnapAudienceSelectionViewController : IGViewController { // (Swift)
  /* instance variables */
   delegate;
   keyboardObserver;
   isLoading;
   userSession;
   showInternalUsersOnly;
   didEditUsers;
   didEditAudienceList;
   audienceListModel;
   $__lazy_storage_$_searchBar;
   $__lazy_storage_$_audienceListNameTextView;
   defaultUsers;
   selectedUsers;
   $__lazy_storage_$_userDataSource;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_doneButton;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didTapCloseButton;
- (void)didTapMoreOptionsButton;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)dealloc;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC22IGStoryQuickSnapFormat42IGQuickSnapAudienceSelectionViewController_h */
