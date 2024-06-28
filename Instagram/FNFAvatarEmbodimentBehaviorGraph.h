//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFAvatarEmbodimentBehaviorGraph_h
#define FNFAvatarEmbodimentBehaviorGraph_h
@import Foundation;

#include "FNFAvatarEmbodimentInitialStatus.h"

@class NSArray, NSDictionary, NSString;

@interface FNFAvatarEmbodimentBehaviorGraph : NSObject {
  /* instance variables */
  BOOL _enableDeterministicRandomization;
}

@property (readonly, nonatomic) NSDictionary *stateMap;
@property (readonly, copy, nonatomic) NSString *globalDefaultSentiment;
@property (readonly, nonatomic) FNFAvatarEmbodimentInitialStatus *initialStatus;
@property (readonly, nonatomic) NSArray *prefetchVideos;
@property (readonly, nonatomic) NSArray *introVideos;

/* instance methods */
- (id)initWithStateMap:(id)map globalDefaultSentiment:(id)sentiment initialStatus:(id)status prefetchVideos:(id)videos introVideos:(id)videos enableDeterministicRandomization:(BOOL)randomization;
- (id)transitionFromState:(id)state withTrigger:(id)trigger;
- (id)videoWithState:(id)state action:(id)action sentiment:(id)sentiment intensity:(id)intensity;
- (id)checkActionAndFallbackIfNeededWithState:(id)state action:(id)action;
- (id)checkSentimentAndFallbackIfNeededWithState:(id)state action:(id)action sentiment:(id)sentiment;
- (id)checkIntensityAndFallbackIfNeededWithState:(id)state action:(id)action sentiment:(id)sentiment intensity:(id)intensity;
- (void)_shuffle;
@end

#endif /* FNFAvatarEmbodimentBehaviorGraph_h */