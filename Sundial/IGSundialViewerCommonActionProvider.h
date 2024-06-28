//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerCommonActionProvider_h
#define IGSundialViewerCommonActionProvider_h
@import Foundation;

#include "IGFeedItemLogger.h"
#include "IGNetegoItem-Protocol.h"
#include "IGSeenStateStore.h"
#include "IGSundialViewerMediaPrefetchManager.h"
#include "IGVPVDImpressionHelper.h"

@class FBMerlinManager, IGAdPodMediaLoggingManager, IGMedia, IGSponsoredSupportConfiguration, IGUserSession, NSDictionary, NSString, UIViewController;

@interface IGSundialViewerCommonActionProvider : NSObject {
  /* instance variables */
  IGVPVDImpressionHelper *_impressionHelper;
  IGVPVDImpressionHelper *_merlinImpressionHelper;
  IGMedia *_media;
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  IGSundialViewerMediaPrefetchManager *_mediaPrefetchManager;
  IGFeedItemLogger *_feedItemLogger;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfig;
  NSString *_surface;
  NSString *_product;
  NSString *_viewerSessionID;
  NSString *_chainingSessionID;
  NSString *_parentMPk;
  NSObject<IGNetegoItem> *_netegoItem;
  NSDictionary *_loggingExtras;
  NSString *_mediaHit50ActionName;
  UIViewController *_viewController;
  BOOL _isImmersiveLoggingEnabled;
  FBMerlinManager *_feedMerlinManager;
  BOOL _isImmersiveMerlinLoggingEnabled;
  BOOL _trackVPVDMerlin;
  IGAdPodMediaLoggingManager *_adPodMediaLoggingManager;
  IGSeenStateStore *_mainFeedSeenState;
}

/* instance methods */
- (id)initWithMedia:(id)media userSession:(id)session analyticsModule:(id)module sponsoredSupportConfig:(id)config mediaPrefetchManager:(id)manager feedItemLogger:(id)logger surface:(id)surface product:(id)product viewerSessionID:(id)id chainingSessionID:(id)id parentMPk:(id)mpk netegoItem:(id)item viewController:(id)controller isImmersiveLoggingEnabled:(BOOL)enabled isImmersiveMerlinLoggingEnabled:(BOOL)enabled loggingExtras:(id)extras adPodMediaLoggingManager:(id)manager;
@end

#endif /* IGSundialViewerCommonActionProvider_h */