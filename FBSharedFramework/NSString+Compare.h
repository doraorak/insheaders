//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSString_Compare_h
#define NSString_Compare_h
@import Foundation;

@interface NSString (Compare)
/* class methods */
+ (unsigned long long)insensitiveCompareOptions;

/* instance methods */
- (id)insensitiveString;
- (long long)insensitiveCompare:(id)compare;
- (BOOL)hasInsensitivePrefix:(id)prefix;
@end

#endif /* NSString_Compare_h */