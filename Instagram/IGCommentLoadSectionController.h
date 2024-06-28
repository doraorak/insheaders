//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentLoadSectionController_h
#define IGCommentLoadSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGCommentLoadMore.h"

@class IGHeaderFooterSupplementaryViewSource;
@protocol IGCommentLoadItemDelegate;

@interface IGCommentLoadSectionController : IGListSectionController {
  /* instance variables */
  BOOL _shouldShowSeparator;
  long long _commentThreadEntryPoint;
  IGHeaderFooterSupplementaryViewSource *_compositedViewSource;
}

@property (readonly, nonatomic) IGCommentLoadMore *loadMore;
@property (weak, nonatomic) NSObject<IGCommentLoadItemDelegate> *delegate;
@property (nonatomic) unsigned long long direction;

/* instance methods */
- (id)initWithShouldShowSeparator:(BOOL)separator commentThreadEntryPoint:(long long)point;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
@end

#endif /* IGCommentLoadSectionController_h */