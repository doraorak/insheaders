//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC13ShowreelDebug20ShowreelDebugOverlay_h
#define _TtC13ShowreelDebug20ShowreelDebugOverlay_h
@import Foundation;

#include "FBPassthroughView.h"

@interface _TtC13ShowreelDebug20ShowreelDebugOverlay : FBPassthroughView { // (Swift)
  /* instance variables */
   kBorderThickness;
   kIndicatorOpacity;
   type;
   $__lazy_storage_$_taglineLabel;
   $__lazy_storage_$_borderView;
   label;
}

/* class methods */
+ (BOOL)isEnabled;

/* instance methods */
- (id)initWithType:(long long)type;
- (id)initWithCoder:(id)coder;
- (void)setupWith:(long long)with templateName:(id)name adId:(id)id;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC13ShowreelDebug20ShowreelDebugOverlay_h */
