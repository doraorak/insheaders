//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryMapLocationDetailGridHeaderSectionController_h
#define IGDiscoveryMapLocationDetailGridHeaderSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtP22IGUserContentViewSwift25IGUserContentViewDelegate_-Protocol.h"

@class IGFollowController, IGUserSession, NSString, UITapGestureRecognizer;
@protocol IGDiscoveryMapLocationDetailGridHeaderSectionControllerDelegate, IGProfileActionBarViewDelegate;

@interface IGDiscoveryMapLocationDetailGridHeaderSectionController : IGListGenericSectionController<_TtP22IGUserContentViewSwift25IGUserContentViewDelegate_, UIGestureRecognizerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  IGFollowController *_followController;
  UITapGestureRecognizer *_userContentTapGestureRecognizer;
  NSObject<IGProfileActionBarViewDelegate> *_actionBarDelegate;
}

@property (weak, nonatomic) NSObject<IGDiscoveryMapLocationDetailGridHeaderSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)_didTapUserContentView:(id)view;
- (void)userContentView:(id)view didTapStoryViewerEntryView:(id)view;
- (void)followController:(id)controller didTapButtonWithAction:(long long)action actionExecutionBlock:(id /* block */)block;
- (void)didTapMessageButton:(id)button;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
@end

#endif /* IGDiscoveryMapLocationDetailGridHeaderSectionController_h */