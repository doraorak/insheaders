//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBKBloksComponentsVideoDataProvider_h
#define IGBKBloksComponentsVideoDataProvider_h
@import Foundation;

#include "NSObject-Protocol.h"

@class BKModel, IGVideo, NSString;

@interface IGBKBloksComponentsVideoDataProvider : NSObject<NSObject> {
  /* instance variables */
  BKModel *_model;
  IGVideo *_video;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithModel:(id)model;
- (id)model;
- (BOOL)shouldAutoPlay;
- (BOOL)shouldLoop;
- (BOOL)tapToToggleVideoAudioEnabled;
- (BOOL)shouldShowCaptions;
- (BOOL)shouldShowAudioIndicator;
- (BOOL)hasAudio;
- (id)muteOnMount;
- (BOOL)timeIndicatorEnabled;
- (id)analyticsModule;
- (id)subtitleURL;
- (id)coverPhoto;
- (id)video;
- (id)onProgressUpdateForObjectSet:(id)set;
- (id)onStateUpdateForObjectSet:(id)set;
- (void)registerComponentController:(id)controller toContext:(id)context;
@end

#endif /* IGBKBloksComponentsVideoDataProvider_h */