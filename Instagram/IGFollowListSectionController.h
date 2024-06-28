//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFollowListSectionController_h
#define IGFollowListSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGHashtagFollowStatusUpdateListener-Protocol.h"

@class IGFollowListItemViewModel, IGUserSession, NSString;
@protocol IGFollowListSectionControllerLoggingDelegate;

@interface IGFollowListSectionController : IGListSectionController<IGHashtagFollowStatusUpdateListener>

@property (retain, nonatomic) IGFollowListItemViewModel *item;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (weak, nonatomic) NSObject<IGFollowListSectionControllerLoggingDelegate> *loggingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session loggingDelegate:(id)delegate analyticsModule:(id)module;
- (long long)numberOfItems;
- (id)cellForItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (id)supplementaryViewSource;
- (void)didTapFollowButton:(id)button;
- (void)hashtagFollowStatusStoreDidUpdateFollowStatus:(long long)status forHashtagWithName:(id)name;
@end

#endif /* IGFollowListSectionController_h */
