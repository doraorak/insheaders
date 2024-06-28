//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaMusicAttributionEditViewController_h
#define IGMediaMusicAttributionEditViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGApplicationWillEnterForegroundCriticalEventsListener-Protocol.h"
#include "IGAudioModelProtocol-Protocol.h"
#include "IGAudioPlayerListener-Protocol.h"
#include "IGMediaMusicAttributionEditingObject.h"
#include "IGSidecarCollectionController.h"
#include "IGStoryMusicBrowserViewControllerDelegate-Protocol.h"

@class IGAudioBrowserCameraLogger, IGAudioEditorClipDurationPicker, IGAudioEditorMainScrubberView, IGAudioEditorPlayPauseButton, IGAudioEditorQuickScrubberView, IGAudioEditorTrackDetailsButton, IGAudioPlayer, IGImageView, IGStoryMusicBrowserViewController, IGTapButton, IGUserSession, NSArray, NSString;
@protocol IGMediaMusicAttributionEditViewControllerDelegate;

@interface IGMediaMusicAttributionEditViewController : IGViewController<IGAudioPlayerListener, IGStoryMusicBrowserViewControllerDelegate, IGApplicationWillEnterForegroundCriticalEventsListener> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGMediaMusicAttributionEditViewControllerDelegate> *_delegate;
  IGMediaMusicAttributionEditingObject *_editingObject;
  IGImageView *_imageView;
  IGSidecarCollectionController *_pageMediaController;
  IGAudioEditorTrackDetailsButton *_trackDetailsButton;
  IGAudioEditorQuickScrubberView *_quickScrubber;
  IGAudioEditorMainScrubberView *_scrubber;
  IGTapButton *_durationButton;
  IGAudioPlayer *_audioPlayer;
  IGAudioEditorClipDurationPicker *_durationPicker;
  IGStoryMusicBrowserViewController *_storiesMusicBrowser;
  IGAudioEditorPlayPauseButton *_playButton;
  IGAudioBrowserCameraLogger *_logger;
}

@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL scrubbing;
@property (nonatomic) double clipStartTime;
@property (nonatomic) double clipDuration;
@property (nonatomic) double totalDuration;
@property (retain, nonatomic) NSArray *highlightsInSeconds;
@property (retain, nonatomic) NSObject<IGAudioModelProtocol> *selectedAudio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate selectedAudio:(id)audio analyticsModule:(id)module editingObject:(id)object storiesMusicBrowser:(id)browser logger:(id)logger removeAudioOption:(BOOL)option;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)audioPlayerWillPrepareAudio:(id)audio;
- (void)audioPlayerDidPrepareAudio:(id)audio;
- (void)audioPlayerDidLoadAudio:(id)audio;
- (void)audioPlayer:(id)player didFailWithError:(id)error;
- (void)audioPlayer:(id)player didUpdatePlaybackProgress:(double)progress;
- (void)audioPlayerDidPlayToEnd:(id)end;
- (void)audioPlayerDidBeginPlaying:(id)playing;
- (void)audioPlayerDidPause:(id)pause;
- (void)audioPlayerDidStall:(id)stall;
- (void)audioPlayerDidStop:(id)stop;
- (void)audioPlayer:(id)player didToggleAudioStatus:(BOOL)status withReason:(long long)reason;
- (void)mainScrubberView:(id)view didBeginScrollingAtTime:(double)time;
- (void)mainScrubberView:(id)view didScrollToTime:(double)time;
- (void)mainScrubberView:(id)view didEndScrollingToTime:(double)time;
- (void)quickScrubberViewDidBeginSliding:(id)sliding;
- (void)quickScrubberView:(id)view didSlideToTime:(double)time;
- (void)quickScrubberViewDidEndSliding:(id)sliding;
- (void)clipDurationPicker:(id)picker didSelectClipDuration:(long long)duration;
- (void)clipDurationPickerDidCancel:(id)cancel;
- (void)musicBrowserViewControllerDidCancel:(id)cancel;
- (void)musicBrowserViewController:(id)controller didTapAudioTrack:(id)track;
- (void)audioBrowserViewController:(id)controller didTapAudioTrack:(id)track context:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)audioBrowserViewController:(id)controller didSelectAudioTrack:(id)track;
- (void)traitCollectionDidChange:(id)change;
- (void)_onDoneTapped;
- (void)_onCancelTapped;
- (void)_onDiscardTapped;
- (void)_didTapDurationButton:(id)button;
- (void)_didTapPlayButton:(id)button;
- (void)_didTapTrackDetailsButton:(id)button;
- (void)_applicationDidEnterBackground:(id)background;
- (void)applicationWillEnterForegroundListener;
- (BOOL)isPlaying;
- (BOOL)isScrubbing;
@end

#endif /* IGMediaMusicAttributionEditViewController_h */
