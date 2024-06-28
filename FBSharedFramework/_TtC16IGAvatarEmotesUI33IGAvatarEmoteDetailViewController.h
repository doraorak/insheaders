//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC16IGAvatarEmotesUI33IGAvatarEmoteDetailViewController_h
#define _TtC16IGAvatarEmotesUI33IGAvatarEmoteDetailViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC16IGAvatarEmotesUI33IGAvatarEmoteDetailViewController : IGViewController { // (Swift)
  /* instance variables */
   delegate;
   audioDetailView;
   playerView;
   bottomButtonsView;
   userSession;
   avatarEmote;
   entryPoint;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didTapAudioDetailView;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC16IGAvatarEmotesUI33IGAvatarEmoteDetailViewController_h */