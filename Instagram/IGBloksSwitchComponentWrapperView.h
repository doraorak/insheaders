//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksSwitchComponentWrapperView_h
#define IGBloksSwitchComponentWrapperView_h
@import Foundation;

#include "UIView.h"
#include "IGInterceptingSwitch.h"

@interface IGBloksSwitchComponentWrapperView : UIView {
  /* instance variables */
  IGInterceptingSwitch *_switchView;
}

/* instance methods */
- (void)layoutSubviews;
@end

#endif /* IGBloksSwitchComponentWrapperView_h */