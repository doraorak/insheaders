//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPlaybackCoordinatorResolvedSessionState_h
#define IGPlaybackCoordinatorResolvedSessionState_h
@import Foundation;

@interface IGPlaybackCoordinatorResolvedSessionState : NSObject {
  /* instance variables */
  long long _volunteeredState;
}

@property (readonly, nonatomic) long long playbackState;

/* instance methods */
- (id)initWithPlaybackState:(long long)state;
- (id)initWithPlaybackState:(long long)state volunteeredState:(long long)state;
@end

#endif /* IGPlaybackCoordinatorResolvedSessionState_h */