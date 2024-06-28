//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedUpcomingEventCTASectionController_h
#define IGFeedUpcomingEventCTASectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "IGFeedUpcomingEventCTAViewModel.h"
#include "IGFeedUpcomingEventFullbleedCTACellDelegate-Protocol.h"

@class IGUserSession, NSString;
@protocol IGFeedUpcomingEventCTASectionControllerDelegate;

@interface IGFeedUpcomingEventCTASectionController : IGListGenericSectionController<IGFeedUpcomingEventFullbleedCTACellDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGFeedUpcomingEventCTAViewModel *_viewModel;
}

@property (weak, nonatomic) NSObject<IGFeedUpcomingEventCTASectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)feedUpcomingEventCTADidTap:(id)tap isLink:(BOOL)link;
- (void)feedUpcomingEventFullbleedCTADidTap:(id)tap;
@end

#endif /* IGFeedUpcomingEventCTASectionController_h */