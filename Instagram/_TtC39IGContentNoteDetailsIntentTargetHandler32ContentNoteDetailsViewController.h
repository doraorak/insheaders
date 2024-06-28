//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC39IGContentNoteDetailsIntentTargetHandler32ContentNoteDetailsViewController_h
#define _TtC39IGContentNoteDetailsIntentTargetHandler32ContentNoteDetailsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"

@interface _TtC39IGContentNoteDetailsIntentTargetHandler32ContentNoteDetailsViewController : IGViewController<IGGestureHandler> { // (Swift)
  /* instance variables */
   viewModelObjects;
   notePk;
   media;
   userSession;
   defaultLoggingInfo;
   modalPresentingViewController;
   delegate;
   $__lazy_storage_$_listAdapter;
   $__lazy_storage_$_collectionView;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

/* instance methods */
- (void)viewDidLoad;
- (BOOL)canRespondToGesture:(id)gesture;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC39IGContentNoteDetailsIntentTargetHandler32ContentNoteDetailsViewController_h */
