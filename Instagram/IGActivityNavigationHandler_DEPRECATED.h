//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivityNavigationHandler_DEPRECATED_h
#define IGActivityNavigationHandler_DEPRECATED_h
@import Foundation;

#include "IGActivityFeedLogger.h"
#include "IGActivityStoryItemConfiguration.h"
#include "IGActivityStoryPresentationHelper.h"

@class IGUserSession, NSString, UIViewController;
@protocol IGActivityNavigationHandlerDelegate_DEPRECATED, IGActivityNavigationHandlerGetTabTypeDelegate_DEPRECATED;

@interface IGActivityNavigationHandler_DEPRECATED : NSObject {
  /* instance variables */
  IGActivityFeedLogger *_logger;
  UIViewController *_hostViewController;
  IGUserSession *_userSession;
  NSString *_module;
  IGActivityStoryItemConfiguration *_itemConfig;
  unsigned long long _position;
  NSString *_currentUserPK;
  IGActivityStoryPresentationHelper *_storyPresentationHelper;
  NSObject<IGActivityNavigationHandlerGetTabTypeDelegate_DEPRECATED> *_activityNavigationHandlerGetTabTypeDelagate;
}

@property (weak, nonatomic) NSObject<IGActivityNavigationHandlerDelegate_DEPRECATED> *delegate;

/* instance methods */
- (id)initWithLogger:(id)logger userSession:(id)session hostViewController:(id)controller module:(id)module itemConfig:(id)config storyPresentationHelper:(id)helper position:(unsigned long long)position;
@end

#endif /* IGActivityNavigationHandler_DEPRECATED_h */
