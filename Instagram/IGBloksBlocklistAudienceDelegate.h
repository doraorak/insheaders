//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksBlocklistAudienceDelegate_h
#define IGBloksBlocklistAudienceDelegate_h
@import Foundation;

#include "IGAudienceStoryBlocklistManager.h"
#include "NSObject-Protocol.h"

@class BKContext, BKLispyExpression, NSString;

@interface IGBloksBlocklistAudienceDelegate : NSObject<NSObject> {
  /* instance variables */
  BKLispyExpression *_onSaveExpression;
  IGAudienceStoryBlocklistManager *_blockListManager;
  BKContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOnSaveExpression:(id)expression blockListManager:(id)manager context:(id)context;
- (BOOL)audienceBlocklistViewControllerShouldShowTitle:(id)title;
- (BOOL)audienceBlocklistViewControllerShouldShowNavigationButtons:(id)buttons;
- (BOOL)audienceBlockListViewControllerCameFromLive:(id)live;
- (void)audienceBlocklistViewControllerDidSaveUserList:(id)list;
- (void)audienceBlocklistViewControllerDidCancel:(id)cancel;
@end

#endif /* IGBloksBlocklistAudienceDelegate_h */