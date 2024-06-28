//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC34IGFeedItemMediaNoticeCellViewModel34IGFeedItemMediaNoticeCellViewModel_h
#define _TtC34IGFeedItemMediaNoticeCellViewModel34IGFeedItemMediaNoticeCellViewModel_h
@import Foundation;

#include "IGFeedItemCellViewModelProtocol-Protocol.h"

@interface _TtC34IGFeedItemMediaNoticeCellViewModel34IGFeedItemMediaNoticeCellViewModel : NSObject<IGFeedItemCellViewModelProtocol> { // (Swift)
  /* instance variables */
   media;
   analyticssLogger;
}

/* instance methods */
- (id)initWithMedia:(id)media feedItemCellViewModelContext:(id)context;
- (void)updateWithMedia:(id)media;
- (id)mediaPK;
- (id)mediaNotice;
- (id)init;
@end

#endif /* _TtC34IGFeedItemMediaNoticeCellViewModel34IGFeedItemMediaNoticeCellViewModel_h */