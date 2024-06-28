//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _FBColorPaletteProxy_h
#define _FBColorPaletteProxy_h
@import Foundation;

#include "FBColorPaletteConfig.h"

@interface _FBColorPaletteProxy : NSObject {
  /* instance variables */
  Class _configProvider;
  FBColorPaletteConfig *_config;
}

/* class methods */
+ (id)newWithConfigProvider:(Class)provider;

/* instance methods */
- (id)_initWithConfigProvider:(Class)provider;
- (id)forwardingTargetForSelector:(SEL)selector;
@end

#endif /* _FBColorPaletteProxy_h */
