//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC25IGGreenScreenGallerySwift43IGGreenScreenGalleryPickerNewViewController_h
#define _TtC25IGGreenScreenGallerySwift43IGGreenScreenGalleryPickerNewViewController_h
@import Foundation;

#include "IGPartialModalSheetNavigationController.h"
#include "_TtP25IGGreenScreenGallerySwift51IGGreenScreenGalleryPickerViewControllerNewDelegate_-Protocol.h"

@class IGStoryGalleryViewController;

@interface _TtC25IGGreenScreenGallerySwift43IGGreenScreenGalleryPickerNewViewController : IGPartialModalSheetNavigationController { // (Swift)
  /* instance variables */
   userSession;
   resizingController;
   detailView;
   previousPartialModalSheetTargetState;
   tabPageViewController;
   gifSearchViewController;
   contentViewController;
   partialModalSheetViewControlle;
   $__lazy_storage_$_staticGalleryViewController;
   gifSearchContainingViewController;
   $__lazy_storage_$_storyGalleryViewController;
}

@property (nonatomic, retain) NSObject<_TtP25IGGreenScreenGallerySwift51IGGreenScreenGalleryPickerViewControllerNewDelegate_> *greenScreenGalleryPickerNewDelegate;
@property (nonatomic, retain) IGStoryGalleryViewController *storyGalleryViewController;

/* instance methods */
- (id)initWithInteractingViewController:(id)controller interactingFocusRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })region greenEffectModel:(id)model userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setGreenScreenGalleryPickerViewControllerPartiallyOpen;
- (id)initWithPartialModalSheetViewController:(id)controller experimentTraits:(struct { BOOL x0; BOOL x1; double x2; double x3; double x4; double x5; BOOL x6; })traits;
@end

#endif /* _TtC25IGGreenScreenGallerySwift43IGGreenScreenGalleryPickerNewViewController_h */