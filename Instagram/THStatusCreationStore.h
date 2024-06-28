//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef THStatusCreationStore_h
#define THStatusCreationStore_h
@import Foundation;

@class IGObjectDiskStorage, NSArray;
@protocol FBProxyAnnouncer<THStatusCreationStoreListener;

@interface THStatusCreationStore : NSObject {
  /* instance variables */
  IGObjectDiskStorage *_diskStorage;
  FBProxyAnnouncer<THStatusCreationStoreListener> *_announcer;
}

@property (readonly, nonatomic) NSArray *models;

/* instance methods */
- (id)initWithDiskManager:(id)manager;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* THStatusCreationStore_h */
