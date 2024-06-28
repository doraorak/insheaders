//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVPostLiveCoverPickerViewController_h
#define IGTVPostLiveCoverPickerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAlertHUDHandling-Protocol.h"
#include "IGCoverPickerView.h"
#include "IGTVCreationAnalyticsSession.h"
#include "NSObject-Protocol.h"

@class IGLContext, IGUserSession, NSArray, NSMutableDictionary, NSString, UIImage;
@protocol IGTVPostLiveCoverPickerViewControllerDelegate;

@interface IGTVPostLiveCoverPickerViewController : IGViewController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGCoverPickerView *_coverPickerView;
  IGTVCreationAnalyticsSession *_creationAnalytics;
  NSArray *_thumbnailURLs;
  NSMutableDictionary *_fetchedImageCache;
  BOOL _initialImageFetchCompleted;
  UIImage *_selectedGalleryImage;
  NSObject<IGAlertHUDHandling> *_loadingHUD;
  IGLContext *_iglContext;
}

@property (weak, nonatomic) NSObject<IGTVPostLiveCoverPickerViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session creationAnalytics:(id)analytics iglContext:(id)context;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_coverPhotoSelectionScrubberChanged;
- (void)_backBarButtonItemTapped;
- (void)_rightBarButtonItemTapped;
- (void)_galleryButtonTapped;
- (void)galleryViewControllerDidTapClose:(id)close;
- (void)galleryViewController:(id)controller didSelectAsset:(id)asset withThumbnail:(id)thumbnail fromView:(id)view;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (BOOL)allowsNavigationGestureForGestureOrigin:(struct CGPoint { double x0; double x1; })origin;
@end

#endif /* IGTVPostLiveCoverPickerViewController_h */
