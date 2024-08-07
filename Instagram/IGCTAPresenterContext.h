//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCTAPresenterContext_h
#define IGCTAPresenterContext_h
@import Foundation;

#include "IGDirectResponseLogging-Protocol.h"
#include "IGFeedItemDirectResponseLoggingProviderDelegate-Protocol.h"
#include "IGFeedItemPageCellState.h"
#include "IGMediaAndCanvasConfiguration.h"
#include "IGReconOnProfileAdCTAConfiguration.h"
#include "IGStoryItemType-Protocol.h"

@class IGDirectResponseInfo, IGFeedItemTracker, IGMedia, IGSessionTracker, IGSponsoredSupportConfiguration, IGUserSession, NSString, UIViewController;

@interface IGCTAPresenterContext : NSObject {
  /* instance variables */
  BOOL _shouldForceUseOfDirectResponseInfo;
  IGFeedItemTracker *_feedItemTracker;
  unsigned long long _directResponseCTAContext;
  IGMediaAndCanvasConfiguration *_mediaAndCanvasConfiguration;
  IGReconOnProfileAdCTAConfiguration *_reconAdCtaConfiguration;
  long long _mediaPosition;
  NSString *_profileUserPk;
}

@property (readonly, nonatomic) IGMedia *media;
@property (readonly, nonatomic) NSObject<IGStoryItemType> *storyItem;
@property (readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;
@property (readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration;
@property (readonly, nonatomic) IGFeedItemPageCellState *pageCellState;
@property (readonly, nonatomic) IGDirectResponseInfo *directResponseInfo;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) NSObject<IGDirectResponseLogging> *logger;
@property (readonly, weak, nonatomic) NSObject<IGFeedItemDirectResponseLoggingProviderDelegate> *loggingDelegate;
@property (weak, nonatomic) UIViewController *viewController;

/* instance methods */
- (id)initWithMedia:(id)media storyItem:(id)item feedItemTracker:(id)tracker shoppingSessionTracker:(id)tracker sponsoredSupportConfiguration:(id)configuration mediaPosition:(long long)position profileUserPk:(id)pk mediaAndCanvasConfiguration:(id)configuration reconAdCtaConfiguration:(id)configuration userSession:(id)session pageCellState:(id)state directResponseInfo:(id)info directResponseCTAContext:(unsigned long long)ctacontext logger:(id)logger loggingDelegate:(id)delegate;
- (id)initWithCTAPresenterContext:(id)context directResponseCTAContext:(unsigned long long)ctacontext;
@end

#endif /* IGCTAPresenterContext_h */
