//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVViewerDestination_h
#define IGTVViewerDestination_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class IGTVViewerFocusedComment;

@interface IGTVViewerDestination : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGTVViewerFocusedComment *_commentsSheet_initiallyFocusedComment;
}

/* class methods */
+ (id)commentsSheetWithInitiallyFocusedComment:(id)comment;
+ (id)directShareSheet;
+ (id)insightsSheet;
+ (id)viewer;
+ (id)viewsAndLikesSheet;

/* instance methods */
@end

#endif /* IGTVViewerDestination_h */