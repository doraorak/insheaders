//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC38IGFeedItemFollowedByCountCellViewModel38IGFeedItemFollowedByCountCellViewModel_h
#define _TtC38IGFeedItemFollowedByCountCellViewModel38IGFeedItemFollowedByCountCellViewModel_h
@import Foundation;

#include "IGFeedItemCellViewModelProtocol-Protocol.h"

@interface _TtC38IGFeedItemFollowedByCountCellViewModel38IGFeedItemFollowedByCountCellViewModel : NSObject<IGFeedItemCellViewModelProtocol> { // (Swift)
  /* instance variables */
   media;
   feedItemViewModelContext;
   styledStringCached;
   containerWidthCached;
   sizeCached;
}

/* instance methods */
- (id)initWithMedia:(id)media feedItemCellViewModelContext:(id)context;
- (void)updateWithMedia:(id)media;
- (id)mediaPK;
- (id)styledStringWithFeedItemRow:(id)row userSession:(id)session;
- (struct CGSize { double x0; double x1; })sizeWithStyledString:(id)string containerWidth:(double)width textWidth:(double)width topPadding:(double)padding bottomPadding:(double)padding bottomSpacing:(double)spacing;
- (double)textWidthContainedInWidth:(double)width;
- (double)extraTopPadding;
- (double)extraBottomPadding;
- (id)init;
@end

#endif /* _TtC38IGFeedItemFollowedByCountCellViewModel38IGFeedItemFollowedByCountCellViewModel_h */
