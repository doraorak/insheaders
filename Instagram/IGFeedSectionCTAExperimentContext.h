//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedSectionCTAExperimentContext_h
#define IGFeedSectionCTAExperimentContext_h
@import Foundation;

@interface IGFeedSectionCTAExperimentContext : NSObject {
  /* instance variables */
  long long _mediaType;
  BOOL _delayCTAEnabled;
  BOOL _defaultCTAColorEnabled;
  BOOL _scrollAwareEnabled;
  BOOL _slowScrollTriggerDisabled;
  double _viewportActionBeginThresholdPercentage;
  double _viewportActionEndThresholdPercentage;
}

@property (nonatomic) BOOL isCTAHidden;
@property (readonly, nonatomic) double delayTime;

/* instance methods */
- (id)initWithUserSession:(id)session media:(id)media delayCTAEnabled:(BOOL)ctaenabled;
@end

#endif /* IGFeedSectionCTAExperimentContext_h */