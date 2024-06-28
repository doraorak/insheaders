//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTFont_h
#define RCTFont_h
@import Foundation;

@interface RCTFont : NSObject
/* class methods */
+ (id)updateFont:(id)font withFamily:(id)family size:(id)size weight:(id)weight style:(id)style variant:(id)variant scaleMultiplier:(double)multiplier;
+ (id)updateFont:(id)font withFamily:(id)family;
+ (id)updateFont:(id)font withSize:(id)size;
+ (id)updateFont:(id)font withWeight:(id)weight;
+ (id)updateFont:(id)font withStyle:(id)style;
@end

#endif /* RCTFont_h */