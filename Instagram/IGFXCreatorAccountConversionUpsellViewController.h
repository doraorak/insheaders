//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFXCreatorAccountConversionUpsellViewController_h
#define IGFXCreatorAccountConversionUpsellViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDismissableViewController-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IG4BLogger, IGBottomButtonsView, IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGFXCreatorAccountConversionUpsellViewControllerDelegate;

@interface IGFXCreatorAccountConversionUpsellViewController : IGViewController<IGListAdapterDataSource, IGDismissableViewController> {
  /* instance variables */
  IGUserSession *_userSession;
  IGListAdapter *_listAdapter;
  UICollectionView *_collectionView;
  NSArray *_viewModels;
  IGBottomButtonsView *_dockedNavigationButtons;
}

@property (retain, nonatomic) IG4BLogger *logger;
@property (weak, nonatomic) NSObject<IGFXCreatorAccountConversionUpsellViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (long long)preferredTabBarBehavior;
- (id)analyticsModule;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)didDismissViewController;
@end

#endif /* IGFXCreatorAccountConversionUpsellViewController_h */