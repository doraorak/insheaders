//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialMusicAsset_h
#define IGSundialMusicAsset_h
@import Foundation;

#include "IGAPIMusicInfo.h"
#include "IGAudioMusicTrack.h"
#include "IGSundialAudioAssetProtocol-Protocol.h"
#include "IGUser.h"

@class NSArray, NSData, NSNumber, NSString, NSURL;

@interface IGSundialMusicAsset : NSObject<IGSundialAudioAssetProtocol> {
  /* instance variables */
  IGAPIMusicInfo *_musicInfo;
  NSNumber *_audioStartTimeInMs;
}

@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSArray *highlightTimes;
@property (readonly, nonatomic) BOOL hasLyrics;
@property (readonly, nonatomic) BOOL allowsSaving;
@property (readonly, copy, nonatomic) NSURL *placeholderProfilePictureUrl;
@property (readonly, nonatomic) IGAudioMusicTrack *musicTrack;
@property (readonly, nonatomic) BOOL isTrending;
@property (readonly, nonatomic) NSArray *featuredIdentifiers;
@property (readonly, copy, nonatomic) NSString *videoCountString;
@property (readonly, nonatomic) double previewDuration;
@property (readonly, nonatomic) NSArray *audioFilterInfos;
@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, copy, nonatomic) NSString *audioAssetId;
@property (readonly, copy, nonatomic) NSString *audioClusterId;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) IGUser *artist;
@property (readonly, copy, nonatomic) NSString *artistDisplayName;
@property (readonly, nonatomic) BOOL shouldMuteAudio;
@property (readonly, copy, nonatomic) NSString *shouldMuteAudioReason;
@property (readonly, copy, nonatomic) NSString *shouldMuteAudioReasonType;
@property (readonly, nonatomic) BOOL shouldAllowMediaCreationWithMusic;
@property (readonly, nonatomic) BOOL shouldAllowEditing;
@property (readonly, nonatomic) BOOL useOfAudioDisabled;
@property (readonly, nonatomic) long long durationInMs;
@property (readonly, copy, nonatomic) NSString *originalAudioAssetId;
@property (readonly, nonatomic) BOOL isReuseDisabled;
@property (readonly, nonatomic) BOOL isExplicit;
@property (readonly, copy, nonatomic) NSURL *albumArtUrl;
@property (readonly, copy, nonatomic) NSURL *albumArtThumbnailUrl;
@property (readonly, copy, nonatomic) NSURL *audioFileUrl;
@property (readonly, copy, nonatomic) NSData *dashManifestData;
@property (readonly, nonatomic) double audioStartTime;
@property (readonly, nonatomic) NSArray *audioParts;
@property (readonly, nonatomic) long long audioAssetType;
@property (readonly, copy, nonatomic) NSNumber *trendingRankNumber;
@property (readonly, nonatomic) BOOL isEligibleForAudioEffects;
@property (nonatomic) BOOL isBookmarked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDict:(id)dict objectStores:(id)stores;
- (id)initWithIGAPIMusicInfo:(id)info;
- (id)initWithPk:(id)pk audioClusterId:(id)id title:(id)title artistName:(id)name albumArtURL:(id)url albumArtThumbnailURL:(id)url audioFileURL:(id)url highlightTimes:(id)times durationInMilliseconds:(long long)milliseconds isExplicit:(BOOL)explicit hasLyrics:(BOOL)lyrics allowsSaving:(BOOL)saving isEligibleForAudioEffects:(BOOL)effects isBookmarked:(BOOL)bookmarked shouldMuteAudio:(BOOL)audio shouldAllowMediaCreationWithMusic:(BOOL)music shouldAllowEditing:(BOOL)editing isTrending:(BOOL)trending featuredIdentifiers:(id)identifiers videoCountString:(id)string trendingRankNumber:(id)number audioFilterInfos:(id)infos;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGSundialMusicAsset_h */