//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioPlayerLatencyLogger_h
#define IGAudioPlayerLatencyLogger_h
@import Foundation;

#include "IGPerformanceMarker.h"

@interface IGAudioPlayerLatencyLogger : NSObject // (Swift)

@property (nonatomic, retain) IGPerformanceMarker *performanceMarker;
@property (nonatomic) unsigned int requestCount;

/* instance methods */
- (id)initWithMarkerId:(int)id;
- (void)startTimerForDidResume:(BOOL)resume didAutoplay:(BOOL)autoplay highlightTime:(id)time isFNFPlayer:(BOOL)fnfplayer usesDASH:(BOOL)dash;
- (void)success;
- (void)cancel;
- (void)fail;
- (void)failWithError:(id)error;
- (id)init;
@end

#endif /* IGAudioPlayerLatencyLogger_h */
