//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMentionInviteController_h
#define IGStoryMentionInviteController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGMentionUpsellViewModel.h"

@interface IGStoryMentionInviteController : IGListSectionController {
  /* instance variables */
  IGMentionUpsellViewModel *_model;
}

@property (copy, nonatomic) id /* block */ didTapInviteButtonHandler;

/* instance methods */
- (id)initWithMentionUpsellModel:(id)model;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
@end

#endif /* IGStoryMentionInviteController_h */
