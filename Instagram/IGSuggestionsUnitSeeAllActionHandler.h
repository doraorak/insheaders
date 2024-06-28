//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSuggestionsUnitSeeAllActionHandler_h
#define IGSuggestionsUnitSeeAllActionHandler_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGUserSession, NSString, UIViewController;
@protocol IGSuggestionsUnitActionHandlerDelegate;

@interface IGSuggestionsUnitSeeAllActionHandler : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  UIViewController *_viewController;
}

@property (weak, nonatomic) NSObject<IGSuggestionsUnitActionHandlerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)handleActionAtPosition:(unsigned long long)position;
@end

#endif /* IGSuggestionsUnitSeeAllActionHandler_h */