//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24ShowreelDynamicTextSwift29ShowreelLayoutManagerDelegate_h
#define _TtC24ShowreelDynamicTextSwift29ShowreelLayoutManagerDelegate_h
@import Foundation;

#include "NSLayoutManagerDelegate-Protocol.h"

@interface _TtC24ShowreelDynamicTextSwift29ShowreelLayoutManagerDelegate : NSObject<NSLayoutManagerDelegate> { // (Swift)
  /* instance variables */
   layoutManager;
   lineSpacingMultiplier;
   verticalLinePadding;
}

/* instance methods */
- (BOOL)layoutManager:(id)manager shouldSetLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect lineFragmentUsedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect baselineOffset:(double *)offset inTextContainer:(id)container forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)init;
@end

#endif /* _TtC24ShowreelDynamicTextSwift29ShowreelLayoutManagerDelegate_h */
