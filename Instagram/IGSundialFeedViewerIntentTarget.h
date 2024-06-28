//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialFeedViewerIntentTarget_h
#define IGSundialFeedViewerIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGReelsItemConfigurationType-Protocol.h"
#include "IGSundialFeedInitialState.h"
#include "IGSundialFeedLoggingContext.h"
#include "IGSundialFeedNavBarConfig.h"
#include "IGSundialFeedNetworkManager.h"
#include "IGSundialPlaybackDelegate-Protocol.h"
#include "IGSundialSurfaceNUXPresenter-Protocol.h"
#include "IGSundialViewerCTADelegate-Protocol.h"
#include "IGSundialViewerProtocol-Protocol.h"

@class IGSundialMidCardModel, NSArray, NSDictionary, NSMutableArray, NSString;

@interface IGSundialFeedViewerIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGSundialFeedNetworkManager *feedManager;
@property (readonly, nonatomic) IGSundialFeedLoggingContext *loggingContext;
@property (readonly, nonatomic) long long cameraEntryPoint;
@property (readonly, nonatomic) IGSundialFeedInitialState *initialState;
@property (readonly, nonatomic) NSObject<IGReelsItemConfigurationType> *reelsItemConfiguration;
@property (readonly, nonatomic) NSObject<IGSundialViewerProtocol> *delegate;
@property (readonly, nonatomic) NSObject<IGSundialPlaybackDelegate> *playbackDelegate;
@property (readonly, nonatomic) BOOL autoAdvanceToNextItem;
@property (readonly, nonatomic) BOOL tabBarHidden;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) IGSundialFeedNavBarConfig *navBarConfig;
@property (readonly, nonatomic) long long ctaButtonType;
@property (readonly, nonatomic) NSObject<IGSundialViewerCTADelegate> *ctaDelegate;
@property (readonly, nonatomic) NSMutableArray *mediaList;
@property (readonly, nonatomic) unsigned long long presentationContext;
@property (readonly, nonatomic) BOOL swipeToDismissAtFeedEnd;
@property (readonly, nonatomic) BOOL shouldForceDressDown;
@property (readonly, nonatomic) NSString *momentId;
@property (readonly, nonatomic) NSArray *queuedMedias;
@property (readonly, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) BOOL advanceToNextItemDisabled;
@property (readonly, nonatomic) long long yourActivityScreenEntryPoint;
@property (readonly, nonatomic) long long midcardEligibilityType;
@property (readonly, nonatomic) NSString *customTooltipSeenStateKey;
@property (readonly, nonatomic) NSObject<IGSundialSurfaceNUXPresenter> *surfaceNUXPresenter;
@property (readonly, nonatomic) NSString *sourceMediaPk;
@property (readonly, nonatomic) IGSundialMidCardModel *queuedMidCardModel;
@property (readonly, nonatomic) NSString *externalLinkShareId;
@property (readonly, nonatomic) BOOL shouldPresentAsModal;
@property (readonly, nonatomic) NSDictionary *mediaIdToRiffId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFeedManager:(id)manager loggingContext:(id)context cameraEntryPoint:(long long)point initialState:(id)state reelsItemConfiguration:(id)configuration delegate:(id)delegate playbackDelegate:(id)delegate autoAdvanceToNextItem:(BOOL)item tabBarHidden:(BOOL)hidden title:(id)title navBarConfig:(id)config ctaButtonType:(long long)type ctaDelegate:(id)delegate mediaList:(id)list presentationContext:(unsigned long long)context swipeToDismissAtFeedEnd:(BOOL)end shouldForceDressDown:(BOOL)down momentId:(id)id queuedMedias:(id)medias completionBlock:(id /* block */)block advanceToNextItemDisabled:(BOOL)disabled yourActivityScreenEntryPoint:(long long)point midcardEligibilityType:(long long)type customTooltipSeenStateKey:(id)key surfaceNUXPresenter:(id)nuxpresenter sourceMediaPk:(id)pk queuedMidCardModel:(id)model externalLinkShareId:(id)id shouldPresentAsModal:(BOOL)modal mediaIdToRiffId:(id)id;
@end

#endif /* IGSundialFeedViewerIntentTarget_h */
