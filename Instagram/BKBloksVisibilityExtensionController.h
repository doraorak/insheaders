//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksVisibilityExtensionController_h
#define BKBloksVisibilityExtensionController_h
@import Foundation;

#include "BKBloksComponentController.h"

@class BKContext, FBViewpointAction;

@interface BKBloksVisibilityExtensionController : BKBloksComponentController {
  /* instance variables */
  FBViewpointAction *_action;
  unsigned long long _cachedViewPointer;
  unsigned long long _actionID;
  BKContext *_strongContextWhileVisible;
  BOOL _isVisible;
}

/* instance methods */
@end

#endif /* BKBloksVisibilityExtensionController_h */
