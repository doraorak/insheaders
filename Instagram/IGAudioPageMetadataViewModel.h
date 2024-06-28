//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioPageMetadataViewModel_h
#define IGAudioPageMetadataViewModel_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSString, NSURL;

@interface IGAudioPageMetadataViewModel : NSObject<NSCopying> {
  /* instance variables */
  NSString *_featuredIdentifier;
  BOOL _isArtistVerified;
  BOOL _isMixIconVisible;
  BOOL _isAudioRestricted;
  BOOL _isUseOfAudioDisabled;
  NSURL *_albumArtImageUrl;
  NSURL *_artistDisplayImageUrl;
  NSString *_audioPageAudioPartsSectionTitleLabel;
  double _totalAudioDuration;
  NSString *_audioPartsHeader;
}

@property (nonatomic) BOOL isBookmarked;
@property (copy, nonatomic) NSString *videoCountFormattedString;
@property (nonatomic) BOOL isEditing;
@property (retain, nonatomic) NSArray *audioPartViewInfos;
@property (copy, nonatomic) NSString *artistDisplayName;
@property (copy, nonatomic) NSString *artistUsername;
@property (nonatomic) long long audioType;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, nonatomic) BOOL isExplicit;
@property (readonly, nonatomic) BOOL isTrending;
@property (readonly, nonatomic) NSString *trendingRankString;
@property (readonly, nonatomic) NSString *spotifyListenURI;
@property (readonly, nonatomic) BOOL shouldMuteAudio;
@property (readonly, nonatomic) BOOL isEligibleForAudioEffects;
@property (readonly, nonatomic) double audioStartTime;
@property (readonly, nonatomic) double playableAudioDuration;
@property (readonly, nonatomic) unsigned long long originalAudioSubtype;

/* instance methods */
- (id)initWithMusic:(id)music metadata:(id)metadata isBookmarked:(BOOL)bookmarked customPlaybackTimes:(id)times launcherSetProvider:(id)provider;
- (id)initWithOriginalAudio:(id)audio metadata:(id)metadata isBookmarked:(BOOL)bookmarked launcherSetProvider:(id)provider;
- (id)initWithTitle:(id)title albumArtImageUrl:(id)url artistUsername:(id)username artistDisplayName:(id)name audioPageAudioPartsSectionTitleLabel:(id)label artistDisplayImageUrl:(id)url playbackTimes:(id)times isArtistVerified:(BOOL)verified isExplicit:(BOOL)explicit isBookmarked:(BOOL)bookmarked isEditing:(BOOL)editing shouldMuteAudio:(BOOL)audio isUseOfAudioDisabled:(BOOL)disabled videoCountFormattedString:(id)string isTrending:(BOOL)trending trendingRankString:(id)string featuredIdentifier:(id)identifier isMixIconVisible:(BOOL)visible audioPartViewInfos:(id)infos metadata:(id)metadata audioType:(long long)type originalAudioSubtype:(unsigned long long)subtype isEligibleForAudioEffects:(BOOL)effects;
- (id)initWithTitle:(id)title albumArtImageUrl:(id)url artistUsername:(id)username artistDisplayName:(id)name audioPageAudioPartsSectionTitleLabel:(id)label artistDisplayImageUrl:(id)url audioStartTime:(double)time playableAudioDuration:(double)duration totalAudioDuration:(double)duration isArtistVerified:(BOOL)verified isExplicit:(BOOL)explicit isBookmarked:(BOOL)bookmarked isEditing:(BOOL)editing shouldMuteAudio:(BOOL)audio isAudioRestricted:(BOOL)restricted isUseOfAudioDisabled:(BOOL)disabled videoCountFormattedString:(id)string isTrending:(BOOL)trending trendingRankString:(id)string featuredIdentifier:(id)identifier isMixIconVisible:(BOOL)visible audioPartViewInfos:(id)infos audioType:(long long)type originalAudioSubtype:(unsigned long long)subtype isEligibleForAudioEffects:(BOOL)effects spotifyListenURI:(id)uri;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGAudioPageMetadataViewModel_h */