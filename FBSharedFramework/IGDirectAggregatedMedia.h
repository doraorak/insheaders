//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAggregatedMedia_h
#define IGDirectAggregatedMedia_h
@import Foundation;

#include "IGAPIMediaOverlayPayloadSchema.h"
#include "IGContentGateableMediaItem-Protocol.h"
#include "IGDirectAggregatedMediaContent.h"
#include "IGDirectForwardMetadata.h"
#include "IGDirectThreadKey.h"
#include "IGListDiffable-Protocol.h"
#include "IGRingViewSpecFactory.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface IGDirectAggregatedMedia : NSObject<IGListDiffable, NSCopying, IGContentGateableMediaItem> {
  /* instance variables */
  IGAPIMediaOverlayPayloadSchema *_mediaOverlayInfo;
  BOOL _isFromFetch;
  BOOL _isVanishMode;
  NSDate *_messageExpirationDate;
}

@property (readonly, nonatomic) IGDirectThreadKey *threadKey;
@property (readonly, nonatomic) NSString *messageId;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) IGDirectAggregatedMediaContent *content;
@property (readonly, nonatomic) NSString *senderId;
@property (readonly, nonatomic) NSString *clientContext;
@property (readonly, nonatomic) IGRingViewSpecFactory *ringViewSpecFactory;
@property (readonly, nonatomic) IGDirectForwardMetadata *forwardMetadata;
@property (readonly, nonatomic) BOOL isInstamadillo;
@property (readonly, nonatomic) BOOL isInstamadilloTTLC;
@property (nonatomic) BOOL hasSensitiveMediaRevealed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithThreadKey:(id)key messageId:(id)id timestamp:(id)timestamp content:(id)content senderId:(id)id clientContext:(id)context isFromFetch:(BOOL)fetch ringViewSpecFactory:(id)factory forwardMetadata:(id)metadata mediaOverlayInfo:(id)info messageExpirationDate:(id)date isInstamadillo:(BOOL)instamadillo isInstamadilloTTLC:(BOOL)ttlc isVanishMode:(BOOL)mode;
- (BOOL)_isEligibleToMarkPending;
- (BOOL)isPending;
- (BOOL)hasConfirmedNudityShowing;
- (id)mergedWithOtherMedia:(id)media;
- (id)copyWithUpdatedIntervention:(id)intervention;
- (id)mediaId;
- (id)inferenceEligibleMediaWithUserSession:(id)session threadID:(id)id;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (id)gating;
- (id)mediaOverlayInfo;
- (id)photo;
- (id)imageSpecifier;
- (id)sharingFrictionInfo;
@end

#endif /* IGDirectAggregatedMedia_h */