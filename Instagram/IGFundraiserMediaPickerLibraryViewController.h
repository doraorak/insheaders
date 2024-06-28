//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFundraiserMediaPickerLibraryViewController_h
#define IGFundraiserMediaPickerLibraryViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGCollectionViewLayoutDataSource-Protocol.h"
#include "IGGalleryDataSourceDelegate-Protocol.h"
#include "IGLibraryAccessPromptView.h"
#include "IGTabControlSegment-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGGalleryDataSource, IGUserSession, NSString, UICollectionView;
@protocol IGFundraiserMediaPickerLibraryViewControllerDelegate;

@interface IGFundraiserMediaPickerLibraryViewController : IGViewController<IGCollectionViewLayoutDataSource, IGGalleryDataSourceDelegate, IGTabControlSegment, UICollectionViewDataSource, UICollectionViewDelegate> {
  /* instance variables */
  IGGalleryDataSource *_dataSource;
  struct IGGridLayoutConfiguration { double interitemSpacing; struct UIEdgeInsets { double top; double left; double bottom; double right; } insets; double mediasPerRow; double aspectRatio; double cellCornerRadius; } _layoutConfiguration;
  UICollectionView *_collectionView;
  IGLibraryAccessPromptView *_accessDeniedView;
  IGUserSession *_userSession;
}

@property (weak, nonatomic) NSObject<IGFundraiserMediaPickerLibraryViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithUserSession:(id)session;
- (id)title;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)galleryDataSource:(id)source didChange:(id)change;
- (void)galleryDataSourceDidChangeSectionedCollections:(id)collections;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })layoutDataSourceCollectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })layoutDataSourceCollectionView:(id)view layout:(id)layout sizeForHeaderViewAtIndexPath:(id)path;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutDataSourceCollectionView:(id)view layout:(id)layout insetForSection:(long long)section;
@end

#endif /* IGFundraiserMediaPickerLibraryViewController_h */
