//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioSoundboardEffect_h
#define IGAudioSoundboardEffect_h
@import Foundation;

#include "IGAsyncTask.h"
#include "IGAudioModelProtocol-Protocol.h"
#include "IGListDiffable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSNumber, NSString, NSURL;

@interface IGAudioSoundboardEffect : NSObject<NSCopying, NSSecureCoding, IGListDiffable, IGAudioModelProtocol> {
  /* instance variables */
  IGAsyncTask *_audioFastStartAsset;
  IGAsyncTask *_audioFile;
  NSString *_darkMessage;
}

@property (readonly, nonatomic) BOOL allowsSaving;
@property (readonly, nonatomic) BOOL shouldMuteAudio;
@property (readonly, copy, nonatomic) NSString *shouldMuteAudioReason;
@property (readonly, nonatomic) BOOL useOfAudioDisabled;
@property (readonly, copy, nonatomic) NSString *canonicalId;
@property (readonly, copy, nonatomic) NSString *audioAssetId;
@property (readonly, nonatomic) long long audioType;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) NSURL *albumArtURL;
@property (readonly, copy, nonatomic) NSURL *albumArtThumbnailURL;
@property (readonly, nonatomic) double durationInSeconds;
@property (readonly, nonatomic) NSArray *highlightTimesInSeconds;
@property (readonly, nonatomic) BOOL isExplicit;
@property (readonly, nonatomic) BOOL hasLyrics;
@property (readonly, nonatomic) BOOL isTrending;
@property (readonly, copy, nonatomic) NSNumber *trendingRankNumber;
@property (readonly, nonatomic) BOOL isEligibleForAudioEffects;
@property (readonly, copy, nonatomic) NSString *videoCountString;
@property (readonly, copy, nonatomic) NSString *playableReelId;
@property (readonly, nonatomic) NSArray *featuredIdentifiers;
@property (readonly, nonatomic) double startTimeInComposition;
@property (readonly, nonatomic) IGAsyncTask *audioFileURL;
@property (readonly, nonatomic) IGAsyncTask *audioAsset;
@property (readonly, nonatomic) NSData *dashManifestData;
@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, copy, nonatomic) NSString *audioClusterId;
@property (readonly, nonatomic) NSString *originalAudioAssetId;
@property (nonatomic) BOOL isBookmarked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithServerDict:(id)dict;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPk:(id)pk audioClusterId:(id)id title:(id)title artistName:(id)name albumArtURL:(id)url albumArtThumbnailURL:(id)url audioFileURL:(id)url highlightTimeInMilliseconds:(id)milliseconds durationInMilliseconds:(long long)milliseconds isExplicit:(BOOL)explicit hasLyrics:(BOOL)lyrics darkMessage:(id)message allowsSaving:(BOOL)saving isBookmarked:(BOOL)bookmarked;
- (id)initWithPk:(id)pk audioClusterId:(id)id title:(id)title artistName:(id)name albumArtURL:(id)url albumArtThumbnailURL:(id)url audioFileURLTask:(id)urltask highlightTimeInMilliseconds:(id)milliseconds durationInMilliseconds:(long long)milliseconds isExplicit:(BOOL)explicit hasLyrics:(BOOL)lyrics darkMessage:(id)message allowsSaving:(BOOL)saving isBookmarked:(BOOL)bookmarked;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* IGAudioSoundboardEffect_h */