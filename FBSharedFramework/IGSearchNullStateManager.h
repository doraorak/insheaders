//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchNullStateManager_h
#define IGSearchNullStateManager_h
@import Foundation;

#include "IGSearchNullStateStore.h"

@interface IGSearchNullStateManager : NSObject {
  /* instance variables */
  IGSearchNullStateStore *_dynamicBlendedNullStateStore;
  IGSearchNullStateStore *_usersNullStateStore;
  IGSearchNullStateStore *_popularKeywordNullStateStore;
  IGSearchNullStateStore *_suggestedUsersNullStateStore;
  IGSearchNullStateStore *_metaAISuggestionsNullStateStore;
}

/* instance methods */
- (id)initWithUser:(id)user userStore:(id)store networker:(id)networker launcherSet:(id)set keywordsBootStrapStore:(id)store diskManager:(id)manager;
- (void)clear;
@end

#endif /* IGSearchNullStateManager_h */