//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AVAsset_Amplitude_h
#define AVAsset_Amplitude_h
@import Foundation;

@interface AVAsset (Amplitude)
/* instance methods */
- (id)getAmplitudesWithSampleRate:(unsigned long long)rate;
- (id)getAmplitudesForSampleRate:(unsigned long long)rate error:(id *)error;
@end

#endif /* AVAsset_Amplitude_h */
