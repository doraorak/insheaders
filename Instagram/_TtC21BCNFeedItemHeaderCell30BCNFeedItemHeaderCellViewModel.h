//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC21BCNFeedItemHeaderCell30BCNFeedItemHeaderCellViewModel_h
#define _TtC21BCNFeedItemHeaderCell30BCNFeedItemHeaderCellViewModel_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "IGListDiffable-Protocol.h"

@interface _TtC21BCNFeedItemHeaderCell30BCNFeedItemHeaderCellViewModel : _TtCs12_SwiftObject<IGListDiffable> { // (Swift)
  /* instance variables */
   media;
   userSession;
   theme;
   analyticsModule;
   cellContext;
   user;
   preferredProfilePicURL;
   moreButtonColor;
   additionalRightPadding;
   style;
   subtitleString;
   repostInfo;
}

/* instance methods */
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* _TtC21BCNFeedItemHeaderCell30BCNFeedItemHeaderCellViewModel_h */
