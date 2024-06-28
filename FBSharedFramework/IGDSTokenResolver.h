//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDSTokenResolver_h
#define IGDSTokenResolver_h
@import Foundation;

@interface IGDSTokenResolver : NSObject
/* instance methods */
- (id)colorForTheme:(unsigned long long)theme colorName:(unsigned long long)name;
- (double)cornerRadiusForTheme:(unsigned long long)theme cornerRadius:(unsigned long long)radius;
- (double)sizeForTheme:(unsigned long long)theme size:(unsigned long long)size;
- (double)spacingForTheme:(unsigned long long)theme spacing:(unsigned long long)spacing;
@end

#endif /* IGDSTokenResolver_h */