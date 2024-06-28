//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11IGGiftsFeed26GiftsFeedSectionController_h
#define _TtC11IGGiftsFeed26GiftsFeedSectionController_h
@import Foundation;

#include "IGListBindingSectionController.h"
#include "IGListBindingSectionControllerDataSource-Protocol.h"
#include "IGListSupplementaryViewSource-Protocol.h"
#include "IGStorySeenStateStoreListener-Protocol.h"

@interface _TtC11IGGiftsFeed26GiftsFeedSectionController : IGListBindingSectionController<IGListSupplementaryViewSource, IGListBindingSectionControllerDataSource, IGStorySeenStateStoreListener> { // (Swift)
  /* instance variables */
   delegate;
   configuration;
   analyticsModule;
   sizingCell;
   transactionMap;
   userPKs;
   userSession;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)didUpdateToObject:(id)object;
- (id)sectionController:(id)controller viewModelsForObject:(id)object;
- (id)sectionController:(id)controller cellForViewModel:(id)model atIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sectionController:(id)controller sizeForViewModel:(id)model atIndex:(long long)index;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)kind atIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)kind atIndex:(long long)index;
- (void)storySeenStateStoreDidUpdateReelPK:(id)pk;
@end

#endif /* _TtC11IGGiftsFeed26GiftsFeedSectionController_h */
