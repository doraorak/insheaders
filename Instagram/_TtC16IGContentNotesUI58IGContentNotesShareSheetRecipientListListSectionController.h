//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC16IGContentNotesUI58IGContentNotesShareSheetRecipientListListSectionController_h
#define _TtC16IGContentNotesUI58IGContentNotesShareSheetRecipientListListSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "_TtP16IGContentNotesUI66IGContentNotesShareSheetRecipientListListSectionControllerDelegate_-Protocol.h"

@interface _TtC16IGContentNotesUI58IGContentNotesShareSheetRecipientListListSectionController : IGListSectionController { // (Swift)
  /* instance variables */
   userSession;
   viewModel;
}

@property (nonatomic, weak) NSObject<_TtP16IGContentNotesUI66IGContentNotesShareSheetRecipientListListSectionControllerDelegate_> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (id)init;
@end

#endif /* _TtC16IGContentNotesUI58IGContentNotesShareSheetRecipientListListSectionController_h */
