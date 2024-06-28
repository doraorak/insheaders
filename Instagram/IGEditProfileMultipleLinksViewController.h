//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEditProfileMultipleLinksViewController_h
#define IGEditProfileMultipleLinksViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGUserUpdatedListener-Protocol.h"

@class IGListAdapter, IGUserSession, NSMutableDictionary, NSString, UICollectionView;
@protocol IGEditProfileMultipleLinksViewControllerDelegate;

@interface IGEditProfileMultipleLinksViewController : IGViewController<IGListAdapterDataSource, IGUserUpdatedListener> {
  /* instance variables */
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGUserSession *_userSession;
  NSMutableDictionary *_editProfileRequestParameters;
  BOOL _showFacebookPageLinkDialogIfAvailable;
}

@property (weak, nonatomic) NSObject<IGEditProfileMultipleLinksViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session editProfileRequestParameters:(id)parameters;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLoad;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)profileMultiplelinksinfoSectionControllerDidUpdate:(id)update;
- (void)userWasUpdated:(id)updated;
- (void)_openMoreOptionsBottomsheet;
- (void)_openReorderLinksViewController;
@end

#endif /* IGEditProfileMultipleLinksViewController_h */
