//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MKMapView_ZoomLevel_h
#define MKMapView_ZoomLevel_h
@import Foundation;

@interface MKMapView (ZoomLevel)
/* instance methods */
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate zoom:(unsigned long long)zoom animated:(BOOL)animated;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate screenOffset:(struct CGPoint { double x0; double x1; })offset zoom:(unsigned long long)zoom animated:(BOOL)animated;
@end

#endif /* MKMapView_ZoomLevel_h */
