//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC25IGProfileHeaderBioManager25IGProfileHeaderBioManager_h
#define _TtC25IGProfileHeaderBioManager25IGProfileHeaderBioManager_h
@import Foundation;

#include "IGProfileBioModel.h"
#include "IGProfileBioSectionController.h"

@interface _TtC25IGProfileHeaderBioManager25IGProfileHeaderBioManager : NSObject { // (Swift)
  /* instance variables */
   presentingViewController;
   context;
   layoutMetrics;
   analyticsModule;
   launcherSet;
   headerLogger;
}

@property (nonatomic, retain) IGProfileBioModel *model;
@property (nonatomic, readonly) IGProfileBioSectionController *sectionController;

/* instance methods */
- (id)initWithPresentingViewController:(id)controller context:(id)context layoutMetrics:(id)metrics analyticsModule:(id)module launcherSet:(id)set headerLogger:(id)logger;
- (BOOL)updateModelIfNeeded;
- (id)init;
@end

#endif /* _TtC25IGProfileHeaderBioManager25IGProfileHeaderBioManager_h */