//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioNUXController_h
#define IGAudioNUXController_h
@import Foundation;

@class IGMediaIndicator;
@protocol IGAudioNUXControllerDelegate;

@interface IGAudioNUXController : NSObject

@property (weak, nonatomic) NSObject<IGAudioNUXControllerDelegate> *delegate;
@property (retain, nonatomic) IGMediaIndicator *indicator;
@property (nonatomic) BOOL persistent;

/* instance methods */
- (id)initWithIndicator:(id)indicator;
- (void)_didChangeMuteSwitch:(id)switch;
- (void)_didPressVolumeButton:(id)button;
@end

#endif /* IGAudioNUXController_h */
