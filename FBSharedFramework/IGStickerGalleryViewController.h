//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStickerGalleryViewController_h
#define IGStickerGalleryViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGGalleryDataSource.h"
#include "IGGalleryDataSourceDelegate-Protocol.h"
#include "IGGalleryTitleView.h"
#include "IGGestureHandler-Protocol.h"
#include "IGPhotoLibraryEmptyStateView.h"
#include "IGPhotoLibraryLimitedAccessHeaderView.h"
#include "IGPhotoLibraryLimitedAccessHeaderViewDelegate-Protocol.h"
#include "IGStickerGalleryUIConfiguration.h"
#include "IGStickerGalleryViewControllerDelegate-Protocol.h"
#include "IGStoryGalleryPermissionsView.h"
#include "IGTapButton.h"
#include "IGUserSession.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, UICollectionView, UIView;

@interface IGStickerGalleryViewController : UIViewController<IGGalleryDataSourceDelegate, IGPhotoLibraryLimitedAccessHeaderViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, IGAnalyticsModule, IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  IGStickerGalleryUIConfiguration *_interfaceConfiguration;
  IGGalleryDataSource *_galleryDataSource;
  UICollectionView *_collectionView;
  IGGalleryTitleView *_titleView;
  UIView *_headerView;
  IGPhotoLibraryEmptyStateView *_noContentPlaceholderView;
  IGTapButton *_cancelButton;
  IGStoryGalleryPermissionsView *_galleryPermissionsView;
  id /* block */ _resultHandler;
  id /* block */ _assetHandler;
  long long _galleryState;
  IGPhotoLibraryLimitedAccessHeaderView *_limitedAccessHeaderView;
}

@property (weak, nonatomic) NSObject<IGStickerGalleryViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session interfaceConfiguration:(id)configuration preferredMediaTypes:(id)types resultHandler:(id /* block */)handler assetHandler:(id /* block */)handler;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)_didTapTitleView:(id)view;
- (void)albumPickerViewController:(id)controller willShowAlbum:(id)album withAlbumIndex:(long long)index;
- (void)albumPickerViewController:(id)controller didSelectAlbum:(id)album withAlbumIndex:(long long)index;
- (void)albumPickerViewController:(id)controller didSelectMetaGalleryAlbum:(id)album withAlbumIndex:(long long)index;
- (void)albumPickerViewControllerDidCancelAlbumSelection:(id)selection;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout referenceSizeForHeaderInSection:(long long)section;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (void)_cancelButtonTapped;
- (void)galleryDataSource:(id)source didChange:(id)change;
- (void)galleryDataSourceDidChangeSectionedCollections:(id)collections;
- (void)storyGalleryPermissionsViewDidRequestPhotosAccess:(id)access;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)analyticsModule;
- (void)photoLibraryLimitedAccessHeaderViewDidTapManage:(id)manage;
@end

#endif /* IGStickerGalleryViewController_h */