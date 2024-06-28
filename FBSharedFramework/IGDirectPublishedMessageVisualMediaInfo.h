//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPublishedMessageVisualMediaInfo_h
#define IGDirectPublishedMessageVisualMediaInfo_h
@import Foundation;

#include "FBValueObject.h"
#include "IGCreativeConfig.h"
#include "IGDirectPublishedMessageVisualMedia.h"
#include "IGDirectVisualMessageActionSummary.h"
#include "IGStoryAttributionModel.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDate, NSOrderedSet, NSString;

@interface IGDirectPublishedMessageVisualMediaInfo : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *mediaId;
@property (readonly, copy, nonatomic) IGDirectPublishedMessageVisualMedia *media;
@property (readonly, nonatomic) long long viewMode;
@property (readonly, copy, nonatomic) NSArray *textLabelCaptions;
@property (readonly, nonatomic) double playbackDuration;
@property (readonly, copy, nonatomic) NSDate *mediaUrlGoesStaleDate;
@property (readonly, copy, nonatomic) IGDirectVisualMessageActionSummary *actionSummary;
@property (readonly, nonatomic) long long seenCountForCurrentUser;
@property (readonly, copy, nonatomic) NSOrderedSet *viewers;
@property (readonly, nonatomic) long long replyType;
@property (readonly, copy, nonatomic) NSString *organicTrackingToken;
@property (readonly, copy, nonatomic) NSDate *archivedMediaDate;
@property (readonly, copy, nonatomic) IGStoryAttributionModel *attributionModel;
@property (readonly, copy, nonatomic) NSArray *tapModels;
@property (readonly, copy, nonatomic) IGCreativeConfig *creativeConfig;
@property (readonly, nonatomic) BOOL hasTranscription;
@property (readonly, nonatomic) BOOL isMoment;
@property (readonly, nonatomic) BOOL isSuperlative;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithMediaId:(id)id media:(id)media viewMode:(long long)mode textLabelCaptions:(id)captions playbackDuration:(double)duration mediaUrlGoesStaleDate:(id)date actionSummary:(id)summary seenCountForCurrentUser:(long long)user viewers:(id)viewers replyType:(long long)type organicTrackingToken:(id)token archivedMediaDate:(id)date attributionModel:(id)model tapModels:(id)models creativeConfig:(id)config hasTranscription:(BOOL)transcription isMoment:(BOOL)moment isSuperlative:(BOOL)superlative;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectPublishedMessageVisualMediaInfo_h */
