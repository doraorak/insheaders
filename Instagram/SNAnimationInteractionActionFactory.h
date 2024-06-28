//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNAnimationInteractionActionFactory_h
#define SNAnimationInteractionActionFactory_h
@import Foundation;

#include "SNAnalyticsData.h"
#include "SNPlayerControllerFromPlayerControllerCreating-Protocol.h"
#include "SNPlayerControllerStack.h"
#include "SRTouchEventHandlingListenerAnnouncer.h"

@interface SNAnimationInteractionActionFactory : NSObject {
  /* instance variables */
  SNPlayerControllerStack *_playerControllerStack;
  SRTouchEventHandlingListenerAnnouncer *_touchEventHandlingAnnouncer;
  NSObject<SNPlayerControllerFromPlayerControllerCreating> *_playerControllerCreator;
  SNAnalyticsData *_analytics;
}

/* instance methods */
- (id)initWithPlayerControllerStack:(id)stack touchEventHandlingAnnouncer:(id)announcer analytics:(id)analytics;
@end

#endif /* SNAnimationInteractionActionFactory_h */