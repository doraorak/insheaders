//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMusicPickStickerAggregationCarouselSectionController_h
#define IGMusicPickStickerAggregationCarouselSectionController_h
@import Foundation;

#include "IGListBindingSingleSectionController.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGMusicPickStickerAggregationCarouselSectionControllerDelegate;

@interface IGMusicPickStickerAggregationCarouselSectionController : IGListBindingSingleSectionController<NSObject>

@property (weak, nonatomic) NSObject<IGMusicPickStickerAggregationCarouselSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (void)musicPickStickerAggregationCarouselDidTapOnCell:(id)cell;
@end

#endif /* IGMusicPickStickerAggregationCarouselSectionController_h */
