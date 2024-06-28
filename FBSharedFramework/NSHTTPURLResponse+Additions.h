//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSHTTPURLResponse_Additions_h
#define NSHTTPURLResponse_Additions_h
@import Foundation;

@interface NSHTTPURLResponse (Additions)
/* instance methods */
- (id)wa_entityLength;
- (BOOL)wa_rangeOfResponse:(struct _NSRange *)response entityLength:(long long *)length;
@end

#endif /* NSHTTPURLResponse_Additions_h */