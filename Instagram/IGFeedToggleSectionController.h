//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedToggleSectionController_h
#define IGFeedToggleSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGFeedToggleItemConfiguration.h"
#include "IGFeedToggleMetrics.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString;
@protocol IGFeedToggleSectionControllerDelegate;

@interface IGFeedToggleSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGFeedToggleItemConfiguration *_configuration;
  IGFeedToggleMetrics *_metrics;
}

@property (weak, nonatomic) NSObject<IGFeedToggleSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session metrics:(id)metrics;
- (id)initWithUserSession:(id)session;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (void)feedToggleCell:(id)cell didSelectButton:(long long)button;
@end

#endif /* IGFeedToggleSectionController_h */
