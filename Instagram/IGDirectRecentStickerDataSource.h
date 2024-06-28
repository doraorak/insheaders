//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecentStickerDataSource_h
#define IGDirectRecentStickerDataSource_h
@import Foundation;

#include "IGDirectRecentStickerService.h"
#include "IGGiphyDataStoreUpdating-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGDirectRecentStickerDataSourceDelegate;

@interface IGDirectRecentStickerDataSource : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGGiphyDataStoreUpdating> *_giphyDataStoreUpdater;
  IGDirectRecentStickerService *_recentStickerService;
}

@property (weak, nonatomic) NSObject<IGDirectRecentStickerDataSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithGiphyDataStoreUpdater:(id)updater recentStickerService:(id)service;
- (void)didUpdateRecentStickers:(id)stickers;
@end

#endif /* IGDirectRecentStickerDataSource_h */
