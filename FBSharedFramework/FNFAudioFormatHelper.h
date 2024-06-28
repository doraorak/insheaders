//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFAudioFormatHelper_h
#define FNFAudioFormatHelper_h
@import Foundation;

@interface FNFAudioFormatHelper : NSObject
/* class methods */
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioStreamBasicDescriptionWithFormatId:(unsigned int)id channelCount:(unsigned int)count sampleRateIndex:(unsigned int)index framesPerPacket:(unsigned int)packet objectType:(long long)type;
@end

#endif /* FNFAudioFormatHelper_h */