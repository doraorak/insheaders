//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectVisualMessagePresentationTarget_h
#define IGDirectVisualMessagePresentationTarget_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class IGDirectVisualMessage, NSOrderedSet;

@interface IGDirectVisualMessagePresentationTarget : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGDirectVisualMessage *_singleVisualMessage;
  NSOrderedSet *_visualMessageWindow;
}

/* class methods */
+ (id)oldestUnseenVisualMessage;
+ (id)singleVisualMessage:(id)message;
+ (id)visualMessageWindow:(id)window;

/* instance methods */
@end

#endif /* IGDirectVisualMessagePresentationTarget_h */
