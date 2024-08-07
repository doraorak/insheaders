//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UIView_IGTimedObject_h
#define UIView_IGTimedObject_h
@import Foundation;

@interface UIView (IGTimedObject) <IGTimedObject>
/* instance methods */
- (double)startTime;
- (void)setStartTime:(double)time;
- (double)endTime;
- (void)setEndTime:(double)time;
- (id)thumbnail;
@end

#endif /* UIView_IGTimedObject_h */
