//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUnfollowChainingController_h
#define IGUnfollowChainingController_h
@import Foundation;

#include "IGUnfollowChainingCountChecker.h"
#include "IGUnfollowChainingLogger.h"

@class IGAsyncTask, IGUser, IGUserSession;
@protocol IGUnfollowChainingControllerDelegate;

@interface IGUnfollowChainingController : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  IGUnfollowChainingCountChecker *_countChecker;
  IGUnfollowChainingLogger *_logger;
  IGUser *_targetUser;
  IGAsyncTask *_fetchCountTask;
}

@property (weak, nonatomic) NSObject<IGUnfollowChainingControllerDelegate> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session module:(id)module;
- (id)initWithUserSession:(id)session unfollowChainingCountChecker:(id)checker logger:(id)logger;
@end

#endif /* IGUnfollowChainingController_h */