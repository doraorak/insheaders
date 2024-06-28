//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMainFeedItemTimelineViewModel_h
#define IGMainFeedItemTimelineViewModel_h
@import Foundation;

#include "IGFeedItemTimelineViewModel-Protocol.h"

@class NSArray, NSString;

@interface IGMainFeedItemTimelineViewModel : NSObject<IGFeedItemTimelineViewModel> {
  /* instance variables */
  long long _contextRowItemIndexInTextRowItems;
  NSArray *_previewCommentPKArray;
  NSArray *_textRowItems;
}

@property (readonly, nonatomic) NSArray *rowItems;
@property (readonly, nonatomic) long long combinedContextOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMedia:(id)media configuration:(id)configuration feedConfiguration:(id)configuration launcherSet:(id)set analyticsModule:(id)module userPK:(id)pk userSessionDefaults:(id)defaults userStore:(id)store nuxManager:(id)manager flaggedCommentLedger:(id)ledger feedPostLikeAndViewCountHelper:(id)helper mediaViewModelConfig:(id)config;
- (long long)textRowIndexForFeedItemRow:(id)row;
- (long long)indexForFeedItemRow:(id)row;
- (long long)indexForCellType:(int)type textType:(long long)type;
- (BOOL)isLastTextRow:(id)row;
- (BOOL)isChildOfPreviewCommentAbove:(id)above;
- (long long)mediaIndexWithMedia:(id)media;
- (id)textRowIndexes;
@end

#endif /* IGMainFeedItemTimelineViewModel_h */
