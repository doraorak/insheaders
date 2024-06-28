//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaPreloader_h
#define IGMediaPreloader_h
@import Foundation;

#include "IGMediaPreloaderSessionDeps.h"
#include "IGShowreelBloksAssetPreloader.h"
#include "IGVideoLivePrefetcher.h"

@class NSMutableDictionary;
@protocol IGMediaPreloaderPhotoProgressDelegate, IGMediaPreloaderShowreelPreloader, IGMediaPreloaderVideoProgressDelegate;

@interface IGMediaPreloader : NSObject {
  /* instance variables */
  IGMediaPreloaderSessionDeps *_sessionDeps;
  NSMutableDictionary *_videoToItemMap;
  NSObject<IGMediaPreloaderPhotoProgressDelegate> *_photoProgressDelegate;
  NSObject<IGMediaPreloaderVideoProgressDelegate> *_videoProgressDelegate;
  double _photoWidth;
  NSMutableDictionary *_urlsToItems;
  NSMutableDictionary *_urlsToImageRequests;
  NSObject<IGMediaPreloaderShowreelPreloader> *_showreelNativePreloader;
  IGShowreelBloksAssetPreloader *_showreelBloksAssetPreloader;
  IGVideoLivePrefetcher *_livePrefetcher;
}

/* instance methods */
- (id)initWithPhotoWidth:(double)width sessionDeps:(id)deps;
- (id)initWithPhotoWidth:(double)width showreelPreloader:(id)preloader sessionDeps:(id)deps;
- (void)cancelAllRequestsExcludingItems:(id)items shouldCancelVideoRequests:(BOOL)requests module:(id)module;
- (void)reset;
@end

#endif /* IGMediaPreloader_h */
