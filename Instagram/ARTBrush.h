//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ARTBrush_h
#define ARTBrush_h
@import Foundation;

@interface ARTBrush : NSObject
/* instance methods */
- (id)initWithArray:(id)array;
- (id)init;
- (BOOL)applyFillColor:(struct CGContext *)color;
- (void)paint:(struct CGContext *)paint;
@end

#endif /* ARTBrush_h */