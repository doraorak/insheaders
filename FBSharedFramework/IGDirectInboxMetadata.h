//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxMetadata_h
#define IGDirectInboxMetadata_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDirectInboxMetadataCursors.h"
#include "IGDirectInboxScopedCursors.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSNumber, NSOrderedSet, NSString;

@interface IGDirectInboxMetadata : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSNumber *sequenceID;
@property (readonly, copy, nonatomic) NSNumber *snapshotAtMs;
@property (readonly, copy, nonatomic) NSString *snapshotAppVersion;
@property (readonly, copy, nonatomic) NSNumber *memSequenceID;
@property (readonly, copy, nonatomic) IGDirectInboxMetadataCursors *cursors;
@property (readonly, copy, nonatomic) IGDirectInboxScopedCursors *scopedCursors;
@property (readonly, copy, nonatomic) NSOrderedSet *customFolders;
@property (readonly, nonatomic) unsigned long long unseenCountFromServer;
@property (readonly, nonatomic) long long businessMessagingHighVolumeRateLimitState;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithSequenceID:(id)id snapshotAtMs:(id)ms snapshotAppVersion:(id)version memSequenceID:(id)id cursors:(id)cursors scopedCursors:(id)cursors customFolders:(id)folders unseenCountFromServer:(unsigned long long)server businessMessagingHighVolumeRateLimitState:(long long)state;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectInboxMetadata_h */
