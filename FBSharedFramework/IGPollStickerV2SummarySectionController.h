//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPollStickerV2SummarySectionController_h
#define IGPollStickerV2SummarySectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGAPIPollSticker.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGPollStickerV2SummarySectionControllerDelegate;

@interface IGPollStickerV2SummarySectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGAPIPollSticker *_model;
}

@property (weak, nonatomic) NSObject<IGPollStickerV2SummarySectionControllerDelegate> *delegate;
@property (nonatomic) BOOL usePrismColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)pollStickerV2SummaryCellDidTapShare:(id)share;
- (void)pollStickerV2SummaryCell:(id)cell didTapResultIndex:(unsigned long long)index;
@end

#endif /* IGPollStickerV2SummarySectionController_h */