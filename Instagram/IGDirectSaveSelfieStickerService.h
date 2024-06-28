//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSaveSelfieStickerService_h
#define IGDirectSaveSelfieStickerService_h
@import Foundation;

#include "FBCancelable-Protocol.h"
#include "IGAPIClient-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGUserLauncherSet-Protocol.h"

@class IGDirectMutationMediaUploadObserver, IGLContext, IGPostCreationManager, NSArray, NSString;
@protocol IGDirectPermanentMediaUploadPreparerProtocol, IGDirectSaveSelfieStickerServiceAnnouncer;

@interface IGDirectSaveSelfieStickerService : NSObject {
  /* instance variables */
  NSObject<IGDirectPermanentMediaUploadPreparerProtocol> *_mediaUploadPreparer;
  NSObject<IGUserLauncherSet> *_launcherSet;
  IGPostCreationManager *_postCreationManager;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  NSObject<IGAPIClient> *_networker;
  IGDirectMutationMediaUploadObserver *_observer;
  NSObject<IGDirectSaveSelfieStickerServiceAnnouncer> *_announcer;
  NSObject<FBCancelable> *_requestToken;
  NSString *_userPk;
  NSArray *_optimisticSavedSelfieStickers;
  NSArray *_serverSavedSelfieStickers;
  IGLContext *_iglContext;
}

/* instance methods */
- (id)initWithMediaUploadPreparer:(id)preparer launcherSet:(id)set postCreationManager:(id)manager analyticsLogger:(id)logger networker:(id)networker userPk:(id)pk iglContext:(id)context;
- (void)start;
- (void)stop;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)_handleSuccessWithResponse:(id)response;
@end

#endif /* IGDirectSaveSelfieStickerService_h */
