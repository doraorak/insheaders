//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCoWatchReelsViewModel_h
#define IGCoWatchReelsViewModel_h
@import Foundation;

#include "IGCoWatchMediaSyncVideoItem.h"
#include "IGListDiffable-Protocol.h"

@class NSString;

@interface IGCoWatchReelsViewModel : NSObject<IGListDiffable> {
  /* instance variables */
  IGCoWatchMediaSyncVideoItem *_reelsItem;
  NSString *_tabSource;
}

/* instance methods */
- (id)initWithCoWatchReelsItem:(id)item tabSource:(id)source;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGCoWatchReelsViewModel_h */
