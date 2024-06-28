//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBVideoProcessorDiscardDrawsUntilLoaded_h
#define FBVideoProcessorDiscardDrawsUntilLoaded_h
@import Foundation;

@interface FBVideoProcessorDiscardDrawsUntilLoaded : NSObject {
  /* instance variables */
  float _delay;
  id /* block */ _condition;
}

/* instance methods */
- (void)setSlowLoading:(BOOL)loading condition:(id /* block */)condition;
@end

#endif /* FBVideoProcessorDiscardDrawsUntilLoaded_h */
