//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenContext_h
#define IGLeadGenContext_h
@import Foundation;

#include "IGFeedItemDirectResponseLoggingProviderDelegate-Protocol.h"
#include "IGFeedItemPageCellState.h"

@class IGFeedItemTracker, IGMedia, IGViewController;

@interface IGLeadGenContext : NSObject {
  /* instance variables */
  IGFeedItemTracker *_feedItemTracker;
  IGViewController *_leadGenController;
  long long _mediaPosition;
}

@property (readonly, weak, nonatomic) NSObject<IGFeedItemDirectResponseLoggingProviderDelegate> *loggingDelegate;
@property (readonly, nonatomic) IGFeedItemPageCellState *pageCellState;
@property (readonly, nonatomic) IGMedia *media;

/* instance methods */
@end

#endif /* IGLeadGenContext_h */
