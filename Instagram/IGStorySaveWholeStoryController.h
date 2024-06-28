//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStorySaveWholeStoryController_h
#define IGStorySaveWholeStoryController_h
@import Foundation;

#include "IGAlertHUDHandling-Protocol.h"
#include "IGStorySaveWholeStoryRequest.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSArray, NSString, UIView;
@protocol IGStorySaveWholeStoryControllerDelegate;

@interface IGStorySaveWholeStoryController : NSObject<NSObject> {
  /* instance variables */
  NSString *_module;
  NSObject<IGAlertHUDHandling> *_alertHandler;
  UIView *_hostingView;
  IGStorySaveWholeStoryRequest *_saveStoryRequest;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) NSArray *items;
@property (weak, nonatomic) NSObject<IGStorySaveWholeStoryControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithItems:(id)items userSession:(id)session hostingView:(id)view module:(id)module;
- (void)saveStoryRequestDidComplete:(id)complete;
- (void)saveStoryRequest:(id)request didFailWithError:(id)error;
@end

#endif /* IGStorySaveWholeStoryController_h */