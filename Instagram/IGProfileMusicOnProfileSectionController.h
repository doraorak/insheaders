//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileMusicOnProfileSectionController_h
#define IGProfileMusicOnProfileSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGAudioPlayerListener-Protocol.h"
#include "IGProfileMusicOnProfileModel.h"
#include "IGProfileMusicOnProfileSectionControllerDelegate-Protocol.h"

@class IGAudioPlayer, IGUserSession, NSString;

@interface IGProfileMusicOnProfileSectionController : IGListSectionController<IGAudioPlayerListener> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  IGAudioPlayer *_audioPlayer;
  IGProfileMusicOnProfileModel *_profileMusicOnProfileModel;
}

@property (weak, nonatomic) NSObject<IGProfileMusicOnProfileSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (void)audioPlayerDidLoadAudio:(id)audio;
- (void)audioPlayerDidBeginPlaying:(id)playing;
- (void)audioPlayer:(id)player didUpdatePlaybackProgress:(double)progress;
- (void)audioPlayerDidPlayToEnd:(id)end;
- (void)audioPlayerDidPause:(id)pause;
- (void)audioPlayer:(id)player didFailWithError:(id)error;
- (void)audioPlayerWillPrepareAudio:(id)audio;
- (void)audioPlayerDidPrepareAudio:(id)audio;
- (void)audioPlayerDidStall:(id)stall;
- (void)audioPlayerDidStop:(id)stop;
- (void)audioPlayer:(id)player didToggleAudioStatus:(BOOL)status withReason:(long long)reason;
- (void)profileMusicOnProfileCellDidTapPlayPauseButton:(id)button;
@end

#endif /* IGProfileMusicOnProfileSectionController_h */
