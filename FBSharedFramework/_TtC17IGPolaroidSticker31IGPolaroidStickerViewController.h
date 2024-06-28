//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGPolaroidSticker31IGPolaroidStickerViewController_h
#define _TtC17IGPolaroidSticker31IGPolaroidStickerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "_TtP17IGPolaroidSticker39IGPolaroidStickerViewControllerDelegate_-Protocol.h"

@interface _TtC17IGPolaroidSticker31IGPolaroidStickerViewController : IGViewController { // (Swift)
  /* instance variables */
   userSession;
   stickerView;
   dismissalSource;
   shouldShowDisclaimerLabel;
   isNewlyCreated;
   $__lazy_storage_$_dimmingView;
   $__lazy_storage_$_keyboardObserver;
   $__lazy_storage_$_headerViewSpec;
   $__lazy_storage_$_headerView;
   disclaimerLabel;
}

@property (nonatomic, retain) NSObject<_TtP17IGPolaroidSticker39IGPolaroidStickerViewControllerDelegate_> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session stickerView:(id)view shouldShowDisclaimerLabel:(BOOL)label isNewlyCreated:(BOOL)created;
- (void)didTapBackground;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC17IGPolaroidSticker31IGPolaroidStickerViewController_h */
