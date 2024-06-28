//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerPhotoCellTagCoordinator_h
#define IGSundialViewerPhotoCellTagCoordinator_h
@import Foundation;

@class FBTimer;

@interface IGSundialViewerPhotoCellTagCoordinator : NSObject {
  /* instance variables */
  BOOL _isPreservingTagState;
  BOOL _isShowingTags;
  BOOL _wereTagsShown;
  FBTimer *_hintDotsDwellDetectionTimer;
}

/* instance methods */
@end

#endif /* IGSundialViewerPhotoCellTagCoordinator_h */
