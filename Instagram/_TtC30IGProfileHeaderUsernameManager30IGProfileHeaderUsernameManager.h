//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC30IGProfileHeaderUsernameManager30IGProfileHeaderUsernameManager_h
#define _TtC30IGProfileHeaderUsernameManager30IGProfileHeaderUsernameManager_h
@import Foundation;

#include "IGUsernameModel.h"
#include "IGUsernameSectionController.h"

@interface _TtC30IGProfileHeaderUsernameManager30IGProfileHeaderUsernameManager : NSObject { // (Swift)
  /* instance variables */
   context;
   layoutMetrics;
}

@property (nonatomic, retain) IGUsernameModel *model;
@property (nonatomic, readonly) IGUsernameSectionController *sectionController;

/* instance methods */
- (id)initWithContext:(id)context layoutMetrics:(id)metrics;
- (BOOL)updateModelIfNeeded;
- (id)init;
@end

#endif /* _TtC30IGProfileHeaderUsernameManager30IGProfileHeaderUsernameManager_h */
