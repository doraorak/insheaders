//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC40IGFeedItemContentSchedulingCellViewModel40IGFeedItemContentSchedulingCellViewModel_h
#define _TtC40IGFeedItemContentSchedulingCellViewModel40IGFeedItemContentSchedulingCellViewModel_h
@import Foundation;

#include "IGFeedItemCellViewModelProtocol-Protocol.h"

@class IGContentSchedulingMetadata, IGMedia;

@interface _TtC40IGFeedItemContentSchedulingCellViewModel40IGFeedItemContentSchedulingCellViewModel : NSObject<IGFeedItemCellViewModelProtocol> // (Swift)

@property (nonatomic, retain) IGContentSchedulingMetadata *contentSchedulingMetadata;
@property (nonatomic, retain) IGMedia *media;

/* instance methods */
- (id)initWithMedia:(id)media feedItemCellViewModelContext:(id)context;
- (void)updateWithMedia:(id)media;
- (id)createContentSchedulingPublishErrorIntentTarget;
- (id)init;
@end

#endif /* _TtC40IGFeedItemContentSchedulingCellViewModel40IGFeedItemContentSchedulingCellViewModel_h */
