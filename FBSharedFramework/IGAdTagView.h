//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdTagView_h
#define IGAdTagView_h
@import Foundation;

#include "IGTagView.h"
#include "IGAdTag.h"
#include "IGUserSession.h"

@interface IGAdTagView : IGTagView {
  /* instance variables */
  double _proposedVerticalOffset;
  BOOL _isFlippedByDefault;
  BOOL _isEligibleForAdTagUpdate;
  IGUserSession *_userSession;
  BOOL _isPrismEnabled;
  IGAdTag *_adTag;
}

/* instance methods */
- (id)initWithAdTag:(id)tag userSession:(id)session;
- (BOOL)_isEligibleForAdTagUpdateWithAdTag:(id)tag;
- (long long)tagViewType;
- (BOOL)shouldFlipTagDirection;
- (double)proposedY;
- (id)showcaseIndex;
@end

#endif /* IGAdTagView_h */
