//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRepliesGroupEmptySpaceModel_h
#define IGDirectRepliesGroupEmptySpaceModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"

@class IGDirectThreadTheme;

@interface IGDirectRepliesGroupEmptySpaceModel : NSObject<IGListDiffable> {
  /* instance variables */
  NSObject<IGListDiffable> *_commentGroup;
  BOOL _isChildReplySpacer;
}

@property (readonly, nonatomic) IGDirectThreadTheme *threadTheme;

/* instance methods */
- (id)initWithCommentGroup:(id)group isChildReplySpacer:(BOOL)spacer threadTheme:(id)theme;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGDirectRepliesGroupEmptySpaceModel_h */
