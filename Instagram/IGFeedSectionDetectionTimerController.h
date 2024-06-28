//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedSectionDetectionTimerController_h
#define IGFeedSectionDetectionTimerController_h
@import Foundation;

@class FBTimer;

@interface IGFeedSectionDetectionTimerController : NSObject {
  /* instance variables */
  FBTimer *_ctaDwellDetectionTimer;
  FBTimer *_dwellDetectionTimer;
  FBTimer *_delayedCTADwellDetectionTimer;
  FBTimer *_productTagsDwellDetectionTimer;
  FBTimer *_adTagDwellDetectionTimer;
  FBTimer *_feedItemHeaderDwellDetectionTimer;
}

/* instance methods */
- (void)clearCTADwellDetectionTimer;
@end

#endif /* IGFeedSectionDetectionTimerController_h */
