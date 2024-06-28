//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioBrowserAudioTrackController_h
#define IGAudioBrowserAudioTrackController_h
@import Foundation;

#include "IGListBindingSectionController.h"
#include "IGAudioBrowserAudioTrackCellModel.h"
#include "IGAudioBrowserLogger-Protocol.h"
#include "IGAudioPlayer.h"
#include "IGAudioPlayerLatencyLogger.h"
#include "IGAudioPlayerListener-Protocol.h"
#include "IGListBindingSectionControllerDataSource-Protocol.h"
#include "IGListBindingSectionControllerSelectionDelegate-Protocol.h"
#include "IGSubscriptionToken-Protocol.h"
#include "IGUserSession.h"

@class NSString;
@protocol IGAudioBrowserAudioTrackControllerDelegate;

@interface IGAudioBrowserAudioTrackController : IGListBindingSectionController<IGAudioPlayerListener, IGListBindingSectionControllerDataSource, IGListBindingSectionControllerSelectionDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  unsigned long long _category;
  unsigned long long _bookmarkCallsSurface;
  NSObject<IGAudioBrowserLogger> *_logger;
  IGAudioPlayerLatencyLogger *_musicPreviewLatencyLogger;
  NSString *_categoryV2;
  NSString *_analyticsModule;
  IGAudioPlayer *_audioPlayer;
  NSObject<IGSubscriptionToken> *_bookmarkSubscriptionToken;
  BOOL _bookmarkingEnabled;
  double _requiredMinimumAudioDurationInMs;
  IGAudioBrowserAudioTrackCellModel *_songModel;
}

@property (weak, nonatomic) NSObject<IGAudioBrowserAudioTrackControllerDelegate> *delegate;
@property (nonatomic) long long theme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session category:(unsigned long long)category bookmarkCallsSurface:(unsigned long long)surface logger:(id)logger categoryV2:(id)v2 analyticsModule:(id)module;
- (void)didUpdateToObject:(id)object;
- (id)sectionController:(id)controller cellForViewModel:(id)model atIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sectionController:(id)controller sizeForViewModel:(id)model atIndex:(long long)index;
- (id)sectionController:(id)controller viewModelsForObject:(id)object;
- (void)musicBrowserAudioCellDidTapOnCameraButton:(id)button;
- (void)musicBrowserAudioCellDidTapOnPlayPauseButton:(id)button;
- (void)musicBrowserAudioCellDidTapOnBookmarkButton:(id)button;
- (void)sectionController:(id)controller didSelectItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didDeselectItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didHighlightItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didUnhighlightItemAtIndex:(long long)index viewModel:(id)model;
- (void)audioPlayerWillPrepareAudio:(id)audio;
- (void)audioPlayerDidPrepareAudio:(id)audio;
- (void)audioPlayerDidLoadAudio:(id)audio;
- (void)audioPlayer:(id)player didFailWithError:(id)error;
- (void)audioPlayer:(id)player didUpdatePlaybackProgress:(double)progress;
- (void)audioPlayerDidBeginPlaying:(id)playing;
- (void)audioPlayerDidPlayToEnd:(id)end;
- (void)audioPlayerDidPause:(id)pause;
- (void)audioPlayerDidStall:(id)stall;
- (void)audioPlayerDidStop:(id)stop;
- (void)audioPlayer:(id)player didToggleAudioStatus:(BOOL)status withReason:(long long)reason;
@end

#endif /* IGAudioBrowserAudioTrackController_h */
