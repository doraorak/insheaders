//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC26BCNFeedAudioAttachmentCell26BCNFeedAudioAttachmentCell_BCNFeedAudioAttachmentCell_h
#define _TtC26BCNFeedAudioAttachmentCell26BCNFeedAudioAttachmentCell_BCNFeedAudioAttachmentCell_h
@import Foundation;

@interface _TtC26BCNFeedAudioAttachmentCell26BCNFeedAudioAttachmentCell (BCNFeedAudioAttachmentCell) <IGAudioPlayerListener>
/* instance methods */
- (void)audioPlayerWillPrepareAudio:(id)audio;
- (void)audioPlayerDidPrepareAudio:(id)audio;
- (void)audioPlayerDidLoadAudio:(id)audio;
- (void)audioPlayerDidBeginPlaying:(id)playing;
- (void)audioPlayer:(id)player didUpdatePlaybackProgress:(double)progress;
- (void)audioPlayerDidPlayToEnd:(id)end;
- (void)audioPlayer:(id)player didFailWithError:(id)error;
- (void)audioPlayerDidPause:(id)pause;
- (void)audioPlayerDidStall:(id)stall;
- (void)audioPlayerDidStop:(id)stop;
- (void)audioPlayer:(id)player didToggleAudioStatus:(BOOL)status withReason:(long long)reason;
@end

#endif /* _TtC26BCNFeedAudioAttachmentCell26BCNFeedAudioAttachmentCell_BCNFeedAudioAttachmentCell_h */
