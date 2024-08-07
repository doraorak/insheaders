//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTimeStickerAnalogView_h
#define IGTimeStickerAnalogView_h
@import Foundation;

#include "UIView.h"

@interface IGTimeStickerAnalogView : UIView {
  /* instance variables */
  BOOL _useBrandRefreshForGlobalScripts;
}

@property (nonatomic) long long hours;
@property (nonatomic) long long minutes;

/* instance methods */
- (id)initUsingBrandRefreshForGlobalScripts:(BOOL)scripts;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)outlinePath;
@end

#endif /* IGTimeStickerAnalogView_h */
