//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemCaptionLengthExperimentConfiguration_h
#define IGFeedItemCaptionLengthExperimentConfiguration_h
@import Foundation;

@interface IGFeedItemCaptionLengthExperimentConfiguration : NSObject {
  /* instance variables */
  BOOL _isEnabled;
  long long _maxTruncatedNumberOfLinesForOrganic;
  long long _maxTruncatedNumberOfLinesForAd;
  long long _maxTruncatedNumberOfLinesForOrganicExplore;
  long long _maxTruncatedNumberOfLinesForAdExplore;
  long long _maxTruncatedNumberOfLinesForOrganicProfile;
  long long _maxTruncatedNumberOfLinesForAdProfile;
}

/* instance methods */
- (id)initWithLauncherSet:(id)set;
- (struct { long long x0; long long x1; })captionDisplayOptionWithIsAd:(BOOL)ad surfaceType:(unsigned long long)type fallbackOption:(struct { long long x0; long long x1; })option sponsoredPostInfo:(id)info;
@end

#endif /* IGFeedItemCaptionLengthExperimentConfiguration_h */
