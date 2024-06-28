//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UIFont_Sizing_h
#define UIFont_Sizing_h
@import Foundation;

@interface UIFont (Sizing)
/* class methods */
+ (double)fontDescriptor:(id)descriptor maximumPointSizeForString:(id)string constrainedToWidth:(double)width;
+ (double)fontDescriptor:(id)descriptor maximumPointSizeForString:(id)string kern:(double)kern constrainedToWidth:(double)width;

/* instance methods */
- (double)maximumPointSizeForString:(id)string constrainedToWidth:(double)width;
- (double)maxiumPointSizeForString:(id)string constrainedToSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* UIFont_Sizing_h */
