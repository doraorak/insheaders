//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC26BCNFeedContextualReplyCell35BCNFeedContextualReplyCellViewModel_h
#define _TtC26BCNFeedContextualReplyCell35BCNFeedContextualReplyCellViewModel_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "IGListDiffable-Protocol.h"

@interface _TtC26BCNFeedContextualReplyCell35BCNFeedContextualReplyCellViewModel : _TtCs12_SwiftObject<IGListDiffable> { // (Swift)
  /* instance variables */
   postViewModel;
   userSession;
   threadlineType;
   requiredPfpBottomToBeShown;
   requiredTopThreadCapPosition;
   isFirstItemAfterHeader;
   containsSpoiler;
   theme;
   analyticsModule;
   cellContext;
   mediaIdentifier;
   facepileUsers;
   showLikeCount;
   enabled;
   viewRepliesButtonTitle;
   viewLikesButtonTitle;
   viewViewsButtonTitle;
   font;
   replySurface;
   viewRepliesTapAction;
   showInlineExpansionIndicator;
   showFacepileView;
   showTranslationButton;
   metricsAnimationEnabled;
   showViewViewsButtons;
   viewsButtonMetricsAnimationEnabled;
   asyncViewsEnabled;
   showTagParticipationButton;
   isDaisy;
   height;
}

/* instance methods */
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* _TtC26BCNFeedContextualReplyCell35BCNFeedContextualReplyCellViewModel_h */
