//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraEffectGalleryViewController_h
#define IGCameraEffectGalleryViewController_h
@import Foundation;

#include "IGNavigationController.h"
#include "IGCameraEffectFeedLoggingContext.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString;
@protocol IGCameraEffectGalleryViewControllerDelegate;

@interface IGCameraEffectGalleryViewController : IGNavigationController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGCameraEffectFeedLoggingContext *_loggingContext;
}

@property (weak, nonatomic) NSObject<IGCameraEffectGalleryViewControllerDelegate> *galleryDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session loggingContext:(id)context;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)_didTapDismiss;
- (void)_didTapSearch;
- (void)cameraEffectFeedViewControllerWillBeginScrolling;
- (void)cameraEffectFeedViewControllerDidLoadData:(id)data;
- (void)cameraEffectFeedViewController:(id)controller didSelectCategory:(id)category;
- (void)cameraEffectFeedViewController:(id)controller didSelectPreview:(id)preview atSectionIndex:(long long)index;
- (void)cameraEffectFeedViewController:(id)controller didSelectCreator:(id)creator atSectionIndex:(long long)index;
- (BOOL)cameraEffectFeedViewControllerShouldPresentCamera:(id)camera;
- (void)cameraEffectFeedViewControllerDidTapTryIt:(id)it onEffectWithID:(id)id effectName:(id)name effectIconURL:(id)url;
- (void)searchViewControllerDidTapCancel:(id)cancel;
- (BOOL)searchViewControllerShouldPresentCamera:(id)camera;
- (void)searchViewControllerDidTapTryIt:(id)it onEffectWithID:(id)id effectName:(id)name effectIconURL:(id)url;
@end

#endif /* IGCameraEffectGalleryViewController_h */