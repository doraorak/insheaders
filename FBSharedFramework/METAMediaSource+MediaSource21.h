//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAMediaSource_MediaSource21_h
#define METAMediaSource_MediaSource21_h
@import Foundation;

@interface METAMediaSource (MediaSource21)
/* instance methods */
- (id)transformedBy:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })by;
- (id)translatedByX:(double)x y:(double)y;
- (id)scaledByX:(double)x y:(double)y;
- (id)scaledByX:(double)x y:(double)y highQuality:(BOOL)quality;
- (id)scaledToWidth:(double)width height:(double)height;
- (id)scaledToWidth:(double)width height:(double)height highQuality:(BOOL)quality;
- (id)rotatedByRadians:(double)radians;
- (id)rotatedByDegrees:(double)degrees;
- (id)applyingTransformFrom:(id)from scale:(double)scale;
@end

#endif /* METAMediaSource_MediaSource21_h */
