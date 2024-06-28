//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC33IGAvatarStickerSuggestionsManager36IGAvatarStickerSuggestionsDataSource_h
#define _TtC33IGAvatarStickerSuggestionsManager36IGAvatarStickerSuggestionsDataSource_h
@import Foundation;

#include "_TtP33IGAvatarStickerSuggestionsManager44IGAvatarStickerSuggestionsDataSourceDelegate_-Protocol.h"

@interface _TtC33IGAvatarStickerSuggestionsManager36IGAvatarStickerSuggestionsDataSource : NSObject { // (Swift)
  /* instance variables */
   userSession;
   stickerSuggestionsManager;
}

@property (nonatomic, weak) NSObject<_TtP33IGAvatarStickerSuggestionsManager44IGAvatarStickerSuggestionsDataSourceDelegate_> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session stickerSuggestionsManager:(id)manager;
- (void)fetchAvatarStickerSuggestionsWithText:(id)text;
- (id)getAvatarGridStickerForSendingWithStickerID:(id)id;
- (id)getAIStickerForSendingWithStickerID:(id)id;
- (void)willDisplayStickerWithStickerID:(id)id atIndex:(long long)index;
- (void)resetComposerSessionID;
- (id)init;
@end

#endif /* _TtC33IGAvatarStickerSuggestionsManager36IGAvatarStickerSuggestionsDataSource_h */
