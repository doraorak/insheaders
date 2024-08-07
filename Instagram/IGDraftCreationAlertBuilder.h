//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDraftCreationAlertBuilder_h
#define IGDraftCreationAlertBuilder_h
@import Foundation;

#include "IGDraftCreationAlertAction.h"
#include "IGDraftCreationAlertContext.h"

@class IGCameraLogger, NSMutableArray, NSString;

@interface IGDraftCreationAlertBuilder : NSObject {
  /* instance variables */
  IGDraftCreationAlertContext *_context;
  NSMutableArray *_actions;
  IGDraftCreationAlertAction *_discardCompositionAction;
  IGDraftCreationAlertAction *_saveDraftAction;
}

@property (retain, nonatomic) IGCameraLogger *logger;
@property (nonatomic) long long surface;
@property (retain, nonatomic) NSString *analyticsModule;
@property (retain, nonatomic) IGDraftCreationAlertAction *cancelAction;

/* instance methods */
@end

#endif /* IGDraftCreationAlertBuilder_h */
