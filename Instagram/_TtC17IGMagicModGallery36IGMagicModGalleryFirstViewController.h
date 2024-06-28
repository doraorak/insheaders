//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGMagicModGallery36IGMagicModGalleryFirstViewController_h
#define _TtC17IGMagicModGallery36IGMagicModGalleryFirstViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGStoryGalleryFirstViewControllerDelegate-Protocol.h"
#include "IGStoryGalleryFirstViewControllerProtocol-Protocol.h"

@class IGStoryGalleryViewController;

@interface _TtC17IGMagicModGallery36IGMagicModGalleryFirstViewController : IGViewController<IGStoryGalleryFirstViewControllerProtocol> { // (Swift)
  /* instance variables */
   userSession;
   $__lazy_storage_$_navigationBar;
   $__lazy_storage_$_descriptionLabel;
   $__lazy_storage_$_stackLayout;
}

@property (nonatomic, retain) NSObject<IGStoryGalleryFirstViewControllerDelegate> *delegate;
@property (nonatomic, retain) IGStoryGalleryViewController *galleryViewController;

/* instance methods */
- (id)initWithGalleryViewController:(id)controller userSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)didTapBackButton;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC17IGMagicModGallery36IGMagicModGalleryFirstViewController_h */