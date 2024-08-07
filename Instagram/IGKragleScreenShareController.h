//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGKragleScreenShareController_h
#define IGKragleScreenShareController_h
@import Foundation;

#include "IGCallWeakObjectHolder.h"

@class RSBMAudioModule;

@interface IGKragleScreenShareController : NSObject {
  /* instance variables */
  struct __RSScreenShareApi * _screenShareApi;
  RSBMAudioModule *_audioModule;
  IGCallWeakObjectHolder *_captureCoordinatorHolder;
}

/* instance methods */
- (void)dealloc;
- (id)initWithCaptureCoordinatorHolder:(id)holder;
@end

#endif /* IGKragleScreenShareController_h */
