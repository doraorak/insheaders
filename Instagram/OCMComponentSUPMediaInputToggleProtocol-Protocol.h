//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef OCMComponentSUPMediaInputToggleProtocol_Protocol_h
#define OCMComponentSUPMediaInputToggleProtocol_Protocol_h
@import Foundation;

@protocol OCMComponentSUPMediaInputToggleProtocol <OCMComponentProtocol>

@property (readonly, nonatomic) BOOL isSUPToggledOn;

/* instance methods */
- (void)prepare;
- (void)stop:(BOOL)stop allowSessionStop:(BOOL)stop;
- (void)toggle:(BOOL)toggle completion:(id /* block */)completion;
- (void)setMicrophoneEnabled:(BOOL)enabled;
- (void)setAudioDecodingEnabled:(BOOL)enabled;
@end

#endif /* OCMComponentSUPMediaInputToggleProtocol_Protocol_h */