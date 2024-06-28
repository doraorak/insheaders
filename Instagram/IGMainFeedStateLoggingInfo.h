//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMainFeedStateLoggingInfo_h
#define IGMainFeedStateLoggingInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDate, NSIndexSet, NSNumber, NSSet;

@interface IGMainFeedStateLoggingInfo : NSObject<NSCoding, NSCopying> {
  /* instance variables */
  BOOL _hasUnshownItems;
  BOOL _isOnscreen;
  BOOL _viewDidAppear;
  NSIndexSet *_unseenIndexes;
  NSNumber *_lastVisibleIndex;
  NSNumber *_firstVisibleIndex;
  NSArray *_visibleMediaIds;
  NSArray *_resharedMediaIds;
  NSArray *_externallyResharedMediaIds;
  NSArray *_profileTappedMediaIds;
  NSArray *_commentTappedMediaIds;
  NSArray *_commentCountTappedMediaIds;
  NSArray *_commentPreviewTappedMediaIds;
  NSArray *_mutedMediaIds;
  NSArray *_unmutedMediaIds;
  NSSet *_interactionEvents;
  double _timeSinceBackground;
}

@property (copy, nonatomic) NSDate *lastFetchTime;
@property (nonatomic) BOOL hasNewItems;
@property (nonatomic) BOOL viewWillAppear;
@property (copy, nonatomic) NSArray *mediaIds;

/* instance methods */
- (id)analyticsExtras;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGMainFeedStateLoggingInfo_h */