//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC5IABJS18DefaultJSEvaluator_h
#define _TtC5IABJS18DefaultJSEvaluator_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "_TtP6IABAPI14IABJSEvaluator_-Protocol.h"

@interface _TtC5IABJS18DefaultJSEvaluator : _TtCs12_SwiftObject<_TtP6IABAPI14IABJSEvaluator_> { // (Swift)
  /* instance variables */
   webview;
}

/* instance methods */
- (void)evaluateJavaScriptWithJs:(id)js;
- (void)evaluateJavaScriptWithContentWorldWithJs:(id)js;
@end

#endif /* _TtC5IABJS18DefaultJSEvaluator_h */
