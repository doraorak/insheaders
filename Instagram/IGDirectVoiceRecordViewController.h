//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectVoiceRecordViewController_h
#define IGDirectVoiceRecordViewController_h
@import Foundation;

#include "UIViewController.h"
#include "AVAudioPlayerDelegate-Protocol.h"
#include "IGCameraPerfVoiceMessageRecordingLogger.h"
#include "IGDirectAudioRecorder.h"
#include "IGDirectVoiceRecordAppearance.h"
#include "IGDirectVoiceRecordInputView.h"
#include "IGDirectVoiceRecordLockView.h"
#include "IGDirectVoiceRecordLogger.h"
#include "IGDirectVoiceRecordViewControllerDelegate-Protocol.h"
#include "IGDirectVoiceRecordViewControlling-Protocol.h"
#include "IGUserLauncherSet-Protocol.h"

@class AVAudioPlayer, FBTimer, IGDirectThreadKey, IGDirectThreadMetadata, IGDirectThreadShhModeAnalyticsInfo, NSDate, NSString, UIImageView, UILabel;

@interface IGDirectVoiceRecordViewController : UIViewController<AVAudioPlayerDelegate, IGDirectVoiceRecordViewControlling> {
  /* instance variables */
  long long _state;
  struct CGPoint { double x; double y; } _touchPoint;
  IGDirectVoiceRecordInputView *_inputView;
  IGDirectVoiceRecordLockView *_handsFreeLockView;
  UILabel *_instructionLabel;
  UIImageView *_smokeView;
  NSDate *_startTime;
  FBTimer *_timer;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _composerOvalFrame;
  IGDirectAudioRecorder *_audioRecorder;
  double _currentMaxAudioValue;
  AVAudioPlayer *_startRecordingSoundEffectAudioPlayer;
  AVAudioPlayer *_stopRecordingSoundEffectAudioPlayer;
  IGDirectVoiceRecordAppearance *_appearance;
  IGDirectVoiceRecordLogger *_voiceRecordLogger;
  IGCameraPerfVoiceMessageRecordingLogger *_voiceRecordPerfLogger;
  IGDirectThreadKey *_threadKey;
  IGDirectThreadMetadata *_threadMetadata;
  IGDirectThreadShhModeAnalyticsInfo *_shhModeInfo;
  NSObject<IGUserLauncherSet> *_launcherSet;
  long long _voiceRecordSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGDirectVoiceRecordViewControllerDelegate> *delegate;
@property (readonly, nonatomic) BOOL recording;

/* instance methods */
- (id)initWithAnalyticsLogger:(id)logger launcherSet:(id)set threadKey:(id)key threadMetadata:(id)metadata shhModeInfo:(id)info;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)setUpPassthroughView;
- (void)setUpViewsAndNotificationsAndApplyAppearance;
- (void)_applicationDidEnterBackground:(id)background;
- (void)viewDidLayoutSubviews;
- (void)updateGestureRecognizer:(id)recognizer;
- (void)startRecordingWithButtonTapFromEntryPoint:(long long)point;
- (void)stopRecordingFromButtonTap;
- (void)stopRecordingFromInterruption;
- (void)configureWithAppearance:(id)appearance;
- (void)updateComposerOvalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)isRecording;
- (void)voiceRecordInputViewDidTapCancel:(id)cancel;
- (void)voiceRecordInputViewDidTapSend:(id)send;
- (void)audioPlayerDidFinishPlaying:(id)playing successfully:(BOOL)successfully;
@end

#endif /* IGDirectVoiceRecordViewController_h */
