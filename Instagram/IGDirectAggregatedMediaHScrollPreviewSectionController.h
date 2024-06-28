//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAggregatedMediaHScrollPreviewSectionController_h
#define IGDirectAggregatedMediaHScrollPreviewSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "IGListDisplayDelegate-Protocol.h"

@class IGUserSession, NSString;
@protocol IGDirectCameraReplying><IGDirectMessageReplying;

@interface IGDirectAggregatedMediaHScrollPreviewSectionController : IGListGenericSectionController<IGListDisplayDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGDirectCameraReplying><IGDirectMessageReplying> *_replyHandler;
  NSString *_analyticsModule;
  long long _mediaType;
  BOOL _impressionLogged;
  BOOL _canForward;
  BOOL _canReplyToMedia;
  BOOL _isDisappearingModeActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session replyHandler:(id)handler analyticsModule:(id)module mediaType:(long long)type canForward:(BOOL)forward canReplyToMedia:(BOOL)media isDisappearingModeActive:(BOOL)active;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
@end

#endif /* IGDirectAggregatedMediaHScrollPreviewSectionController_h */
