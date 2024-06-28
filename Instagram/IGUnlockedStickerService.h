//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUnlockedStickerService_h
#define IGUnlockedStickerService_h
@import Foundation;

@class IGObjectStores, IGUserSessionProvider, NSMutableDictionary, NSMutableSet;
@protocol IGUnlockedStickerServiceAnnouncer;

@interface IGUnlockedStickerService : NSObject {
  /* instance variables */
  NSObject<IGUnlockedStickerServiceAnnouncer> *_announcer;
  NSMutableDictionary *_unlockedStickerModelById;
  NSMutableSet *_optimisticallyUnlockedStickerIds;
  IGUserSessionProvider *_userSessionProvider;
  IGObjectStores *_objectStores;
}

/* instance methods */
- (id)initWithUserSessionProvider:(id)provider objectStores:(id)stores;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* IGUnlockedStickerService_h */
