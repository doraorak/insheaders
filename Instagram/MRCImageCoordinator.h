//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MRCImageCoordinator_h
#define MRCImageCoordinator_h
@import Foundation;

@interface MRCImageCoordinator : NSObject
/* instance methods */
- (void)componentDidAcquireView:(id)view;
- (void)componentWillRelinquishView:(id)view;
- (void)componentDidMount:(id)mount;
- (void)_startDownloadForView:(id)view;
- (void)imageViewEnteredVisibleRange:(id)range componentSpecifier:(id)specifier viewSize:(struct CGSize { double x0; double x1; })size atTime:(double)time;
- (void)imageViewExitedVisibleRange:(id)range componentSpecifier:(id)specifier atTime:(double)time;
@end

#endif /* MRCImageCoordinator_h */