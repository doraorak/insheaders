//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC33IGAvatarStickerSuggestionsManager33IGAvatarStickerSuggestionsManager_h
#define _TtC33IGAvatarStickerSuggestionsManager33IGAvatarStickerSuggestionsManager_h
@import Foundation;

@class NSString;

@interface _TtC33IGAvatarStickerSuggestionsManager33IGAvatarStickerSuggestionsManager : NSObject { // (Swift)
  /* instance variables */
   userSession;
   entryPoint;
   avatarStickerPack;
   avatarStickersCacheHelper;
   avatarStickerNetworProvider;
   avatarRefreshStickerManager;
   impressionLimitHelper;
   logger;
   aiStickerSuggestionsProvider;
   includeAIStickers;
   includeAIStickersWithNoAvatar;
   mantleManager;
   mantleConfigStringInit;
   mantleConfigString;
   mantleConfigId;
   mantleConfigIdInit;
   lexiconVersion;
   textLengthLimit;
   $__lazy_storage_$_lexiconCacheKey;
   avatarInstructionKeyIdToSticker;
   unfinishedMantleRequestHandler;
   isMantleInitialized;
   lastTextQuery;
   lastMatchedStickerURL;
   lastSugggestedSticker;
   lastSuggestedStickerIDs;
   lastRecommendationSessionId;
   didOpenTrayByTappingHint;
   didShowHintForLastTextQuery;
   textInputSessionId;
   avatarStickersMap;
}

@property (nonatomic, copy) NSString *composerSessionId;

/* instance methods */
- (id)initWithUserSession:(id)session threadKey:(id)key;
- (id)init;
@end

#endif /* _TtC33IGAvatarStickerSuggestionsManager33IGAvatarStickerSuggestionsManager_h */
