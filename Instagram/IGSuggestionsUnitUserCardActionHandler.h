//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSuggestionsUnitUserCardActionHandler_h
#define IGSuggestionsUnitUserCardActionHandler_h
@import Foundation;

#include "IGFollowControllerLoggingProvider-Protocol.h"

@class IGUserSession, NSString, UINavigationController;

@interface IGSuggestionsUnitUserCardActionHandler : NSObject<IGFollowControllerLoggingProvider> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_module;
  UINavigationController *_navigationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session module:(id)module navigationController:(id)controller;
- (id)analyticsExtras;
@end

#endif /* IGSuggestionsUnitUserCardActionHandler_h */
