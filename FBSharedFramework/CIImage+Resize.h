//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CIImage_Resize_h
#define CIImage_Resize_h
@import Foundation;

@interface CIImage (Resize)
/* instance methods */
- (id)ig_resizedToMaxDimension:(double)dimension;
- (id)ig_resizedToMinDimension:(double)dimension;
- (id)_ig_resizedToDimension:(double)dimension comparator:(id /* block */)comparator;
@end

#endif /* CIImage_Resize_h */
