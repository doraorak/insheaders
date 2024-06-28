//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentReshareRecordSectionController_h
#define IGCommentReshareRecordSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGCommentReshareRecord.h"

@class IGUserSession, NSAttributedString, NSString;

@interface IGCommentReshareRecordSectionController : IGListSectionController {
  /* instance variables */
  NSAttributedString *_confirmationString;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) IGCommentReshareRecord *record;
@property (readonly, copy, nonatomic) NSString *analyticsModule;

/* class methods */
+ (id)_confirmationStringFromUsernames:(id)usernames sender:(id)sender;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
@end

#endif /* IGCommentReshareRecordSectionController_h */
