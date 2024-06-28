//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoControlsViewType_Protocol_h
#define IGVideoControlsViewType_Protocol_h
@import Foundation;

@protocol IGVideoControlsViewType <IGEDRViewType>

@property (weak, nonatomic) NSObject<IGUnifiedVideoControlsViewDelegate> *delegate;
@property (nonatomic) double progress;
@property (nonatomic) double remainingDuration;
@property (nonatomic) double elapsedDuration;
@property (nonatomic) double totalDuration;
@property (nonatomic) long long scrubberState;
@property (nonatomic) double scrubberDelay;
@property (readonly, nonatomic) IGUnifiedVideoProgressScrubberConfiguration *configuration;

/* instance methods */
- (void)setScrubberVariableSpeedEnabled:(BOOL)enabled;
- (void)setScrubberCondensed:(BOOL)condensed;
- (void)setInteractionEnabled:(BOOL)enabled;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })progressScrubberInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })scrubberPadding;
- (void)updateScrubberTimestampVisibility:(BOOL)visibility;
- (void)setScrubberAutoAdvanceModeEnabled:(BOOL)enabled;
@end

#endif /* IGVideoControlsViewType_Protocol_h */
