//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AVAudioPlayerDelegate_Protocol_h
#define AVAudioPlayerDelegate_Protocol_h
@import Foundation;

@protocol AVAudioPlayerDelegate <NSObject>
@optional
/* instance methods */
- (void)audioPlayerDidFinishPlaying:(id)playing successfully:(BOOL)successfully;
- (void)audioPlayerDecodeErrorDidOccur:(id)occur error:(id)error;
- (void)audioPlayerBeginInterruption:(id)interruption;
- (void)audioPlayerEndInterruption:(id)interruption withOptions:(unsigned long long)options;
- (void)audioPlayerEndInterruption:(id)interruption withFlags:(unsigned long long)flags;
- (void)audioPlayerEndInterruption:(id)interruption;
@end

#endif /* AVAudioPlayerDelegate_Protocol_h */
