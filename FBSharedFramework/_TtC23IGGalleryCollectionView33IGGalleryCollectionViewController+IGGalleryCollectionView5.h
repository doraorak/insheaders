//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC23IGGalleryCollectionView33IGGalleryCollectionViewController_IGGalleryCollectionView5_h
#define _TtC23IGGalleryCollectionView33IGGalleryCollectionViewController_IGGalleryCollectionView5_h
@import Foundation;

@interface _TtC23IGGalleryCollectionView33IGGalleryCollectionViewController (IGGalleryCollectionView5) <IGGallerySelectionTrayDelegate>
/* instance methods */
- (void)gallerySelectionTray:(id)tray didMoveAsset:(id)asset toIndex:(long long)index;
- (void)gallerySelectionTray:(id)tray didUnselectAsset:(id)asset;
- (void)gallerySelectionTray:(id)tray didTapAsset:(id)asset;
- (void)gallerySelectionTray:(id)tray dragSessionIsDragging:(BOOL)dragging;
@end

#endif /* _TtC23IGGalleryCollectionView33IGGalleryCollectionViewController_IGGalleryCollectionView5_h */
