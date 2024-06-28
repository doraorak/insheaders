//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC16BCNFeedMediaCell30BCNFeedMediaContainerViewModel_h
#define _TtC16BCNFeedMediaCell30BCNFeedMediaContainerViewModel_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "IGListDiffable-Protocol.h"

@interface _TtC16BCNFeedMediaCell30BCNFeedMediaContainerViewModel : _TtCs12_SwiftObject<IGListDiffable> { // (Swift)
  /* instance variables */
   media;
   validPostItems;
   postAuthor;
   userSession;
   analyticsModule;
   threadlineType;
   cellContext;
   sectionContext;
   isFirstItemAfterHeader;
   requiredPfpBottomToBeShown;
   requiredTopThreadCapPosition;
   enableDeleteButton;
   enableAudio;
}

/* instance methods */
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* _TtC16BCNFeedMediaCell30BCNFeedMediaContainerViewModel_h */
