//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMoreOptionsActionModelType_h
#define IGMoreOptionsActionModelType_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGSponsoredInfoProviding-Protocol.h"

@class IGMedia, NSDictionary, NSURL;

@interface IGMoreOptionsActionModelType : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSURL *_reportWebsite_url;
  IGMedia *_reportAd_media;
  NSObject<IGSponsoredInfoProviding> *_reportAd_sponsoredInfoProvider;
  long long _reportAd_adPlacementType;
  IGMedia *_learnMore_media;
  NSObject<IGSponsoredInfoProviding> *_learnMore_sponsoredInfoProvider;
  IGMedia *_hideAd_media;
  NSObject<IGSponsoredInfoProviding> *_hideAd_sponsoredInfoProvider;
  long long _hideAd_adPlacementType;
  IGMedia *_updateAdExperience_media;
  NSObject<IGSponsoredInfoProviding> *_updateAdExperience_sponsoredInfoProvider;
  long long _updateAdExperience_adPlacementType;
  IGMedia *_debugAd_media;
  NSObject<IGSponsoredInfoProviding> *_debugAd_sponsoredInfoProvider;
  long long _debugAd_adPlacementType;
  NSDictionary *_debugAd_extraLoggingInfo;
  IGMedia *_tagsAndMentionSettings_media;
  NSObject<IGSponsoredInfoProviding> *_tagsAndMentionSettings_sponsoredInfoProvider;
  long long _tagsAndMentionSettings_adPlacementType;
  IGMedia *_sharedMediaSettings_media;
  NSObject<IGSponsoredInfoProviding> *_sharedMediaSettings_sponsoredInfoProvider;
  long long _sharedMediaSettings_adPlacementType;
}

/* class methods */
+ (id)debugAdWithMedia:(id)media sponsoredInfoProvider:(id)provider adPlacementType:(long long)type extraLoggingInfo:(id)info;
+ (id)hideAdWithMedia:(id)media sponsoredInfoProvider:(id)provider adPlacementType:(long long)type;
+ (id)learnMoreWithMedia:(id)media sponsoredInfoProvider:(id)provider;
+ (id)reportAdWithMedia:(id)media sponsoredInfoProvider:(id)provider adPlacementType:(long long)type;
+ (id)reportWebsiteWithUrl:(id)url;
+ (id)sharedMediaSettingsWithMedia:(id)media sponsoredInfoProvider:(id)provider adPlacementType:(long long)type;
+ (id)tagsAndMentionSettingsWithMedia:(id)media sponsoredInfoProvider:(id)provider adPlacementType:(long long)type;
+ (id)updateAdExperienceWithMedia:(id)media sponsoredInfoProvider:(id)provider adPlacementType:(long long)type;

/* instance methods */
@end

#endif /* IGMoreOptionsActionModelType_h */
