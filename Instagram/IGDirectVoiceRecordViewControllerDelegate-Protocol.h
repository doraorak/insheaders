//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectVoiceRecordViewControllerDelegate_Protocol_h
#define IGDirectVoiceRecordViewControllerDelegate_Protocol_h
@import Foundation;

@protocol IGDirectVoiceRecordViewControllerDelegate <NSObject>
/* instance methods */
- (void)voiceRecordViewController:(id)controller didUpdateState:(long long)state;
- (void)voiceRecordViewControllerWillShowRecordingView:(id)view;
- (void)voiceRecordViewControllerWillHideRecordingView:(id)view;
- (void)voiceRecordViewControllerWillShowRecordingNux:(id)nux;
- (void)voiceRecordViewControllerWillHideRecordingNux:(id)nux;
- (void)voiceRecordViewController:(id)controller didRecordAudioClipWithURL:(id)url waveform:(id)waveform duration:(double)duration entryPoint:(long long)point;
- (void)voiceRecordViewControllerDidPressCancelButton:(id)button;
- (void)voiceRecordViewController:(id)controller didUpdateDuration:(double)duration;
- (void)voiceRecordViewController:(id)controller updateSeparateWaveformWithValue:(double)value;
@end

#endif /* IGDirectVoiceRecordViewControllerDelegate_Protocol_h */
