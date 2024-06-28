//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingStoryLinkUpsellHelper_h
#define IGShoppingStoryLinkUpsellHelper_h
@import Foundation;

#include "IGUserSession.h"

@interface IGShoppingStoryLinkUpsellHelper : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  BOOL _hasShownProductHighlightInSession;
  BOOL _hasShownProductMenuItemTooltipInSession;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
- (BOOL)shouldShowProductTaggingTooltip;
@end

#endif /* IGShoppingStoryLinkUpsellHelper_h */
