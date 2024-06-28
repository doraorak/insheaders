//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCoverPickerViewController_h
#define IGVideoCoverPickerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGCoverPickerSelection.h"
#include "IGCoverPickerView.h"
#include "IGVideoTimelineThumbnailProviderDelegate-Protocol.h"

@class IGAVAssetThumbnailProvider, IGLContext, IGUserSession, IGVideoComposition, NSString;
@protocol IGVideoCoverPickerViewControllerDelegate, IGVideoSharingFlowNavigationDelegate;

@interface IGVideoCoverPickerViewController : IGViewController<IGVideoTimelineThumbnailProviderDelegate> {
  /* instance variables */
  IGCoverPickerView *_coverPickerView;
  IGUserSession *_userSession;
  IGVideoComposition *_videoComposition;
  long long _coverPickerThumbnailStyle;
  NSObject<IGVideoCoverPickerViewControllerDelegate> *_delegate;
  NSObject<IGVideoSharingFlowNavigationDelegate> *_navigationDelegate;
  IGAVAssetThumbnailProvider *_thumbnailProvider;
  IGCoverPickerSelection *_selection;
  NSString *_userSelectedPostTitle;
  BOOL _showSeriesTag;
  IGLContext *_iglContext;
  struct CGSize { double width; double height; } _thumbnailSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session uploadableVideo:(id)video selection:(id)selection configuration:(id)configuration delegate:(id)delegate navigationDelegate:(id)delegate iglContext:(id)context;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (void)_backBarButtonItemTapped;
- (void)_emphasizedDoneBarButtonItemTapped;
- (void)_cancelBarButtonItemTapped;
- (void)_galleryButtonTapped;
- (void)_coverPhotoSelectionScrubberChanged;
- (void)thumbnailProvider:(id)provider didGeneratePixelBuffers:(id)buffers;
- (void)thumbnailProvider:(id)provider didGenerateImages:(id)images;
- (void)galleryViewControllerDidTapClose:(id)close;
- (void)galleryViewController:(id)controller didSelectAsset:(id)asset withThumbnail:(id)thumbnail fromView:(id)view;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (BOOL)allowsNavigationGestureForGestureOrigin:(struct CGPoint { double x0; double x1; })origin;
@end

#endif /* IGVideoCoverPickerViewController_h */