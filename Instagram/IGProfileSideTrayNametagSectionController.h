//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileSideTrayNametagSectionController_h
#define IGProfileSideTrayNametagSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGProfileFriendCodePresentationManager.h"
#include "IGSideTrayItemSectionController-Protocol.h"
#include "IGSideTrayRowItemModel.h"

@class NSString;
@protocol IGSideTrayItemSectionControllerDelegate, IGSideTrayLoggingController;

@interface IGProfileSideTrayNametagSectionController : IGListSectionController<IGSideTrayItemSectionController> {
  /* instance variables */
  IGSideTrayRowItemModel *_item;
  NSObject<IGSideTrayLoggingController> *_loggingController;
  IGProfileFriendCodePresentationManager *_presentationManager;
}

@property (readonly, weak, nonatomic) NSObject<IGSideTrayItemSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate loggingController:(id)controller;
- (BOOL)isBadged;
- (long long)badgeCount;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
@end

#endif /* IGProfileSideTrayNametagSectionController_h */