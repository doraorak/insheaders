//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARFrameServiceFeedback_h
#define FBARFrameServiceFeedback_h
@import Foundation;

@interface FBARFrameServiceFeedback : NSObject {
  /* instance variables */
  struct FrameServiceFeedback { unsigned char facesTrackedCount; } _cxxFeedback;
}

/* class methods */
+ (id)newWithCxxFeedback:(const struct FrameServiceFeedback *)feedback;

/* instance methods */
- (id)initWithCxxFeedback:(const struct FrameServiceFeedback *)feedback;
- (id)description;
@end

#endif /* FBARFrameServiceFeedback_h */