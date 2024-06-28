//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAMediaSource_MediaSource18_h
#define METAMediaSource_MediaSource18_h
@import Foundation;

@interface METAMediaSource (MediaSource18)
/* instance methods */
- (id)applyingFilter:(id)filter;
- (id)applyingFilter:(id)filter timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (id)applyingFilters:(id)filters;
- (id)applyingFilters:(id)filters timeRanges:(id)ranges;
@end

#endif /* METAMediaSource_MediaSource18_h */