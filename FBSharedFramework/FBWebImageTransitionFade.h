//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBWebImageTransitionFade_h
#define FBWebImageTransitionFade_h
@import Foundation;

#include "FBWebImageTransitionAbstract.h"

@interface FBWebImageTransitionFade : FBWebImageTransitionAbstract
/* instance methods */
- (void)showPlaceholder;
- (void)hidePlaceholder:(BOOL)placeholder withCompletionBlock:(id /* block */)block;
- (void)reset;
- (BOOL)isShowingPlaceholder;
@end

#endif /* FBWebImageTransitionFade_h */
