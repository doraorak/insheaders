//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShareMediaOptionsView_h
#define IGShareMediaOptionsView_h
@import Foundation;

#include "UIView.h"
#include "IGShareMediaDestinationButton.h"

@class IGAssetPlayerView, UIImageView;

@interface IGShareMediaOptionsView : UIView {
  /* instance variables */
  IGShareMediaDestinationButton *_reelsButton;
  IGShareMediaDestinationButton *_messagesButton;
}

@property (retain, nonatomic) UIImageView *imagePreviewView;
@property (retain, nonatomic) IGAssetPlayerView *playerView;
@property (readonly, nonatomic) IGShareMediaDestinationButton *storiesButton;
@property (readonly, nonatomic) IGShareMediaDestinationButton *feedButton;

/* instance methods */
- (id)initWithReelsEnabled:(BOOL)enabled;
- (void)layoutSubviews;
@end

#endif /* IGShareMediaOptionsView_h */
