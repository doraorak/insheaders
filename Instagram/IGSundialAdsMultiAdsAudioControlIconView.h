//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAdsMultiAdsAudioControlIconView_h
#define IGSundialAdsMultiAdsAudioControlIconView_h
@import Foundation;

#include "UIView.h"
#include "IGSundialAdsMultiAdsAudioControlIconViewDelegate-Protocol.h"

@class IGPillButton;

@interface IGSundialAdsMultiAdsAudioControlIconView : UIView {
  /* instance variables */
  IGPillButton *_audioControlPillButton;
}

@property (weak, nonatomic) NSObject<IGSundialAdsMultiAdsAudioControlIconViewDelegate> *delegate;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (void)_didTapAudioControlIcon:(id)icon;
- (id)_soundButtonImageForState:(unsigned long long)state;
- (void)configureAudioControlIconViewWithState:(unsigned long long)state;
@end

#endif /* IGSundialAdsMultiAdsAudioControlIconView_h */
