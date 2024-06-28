//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenAdsConsumerFormBuilderConfig_h
#define IGLeadGenAdsConsumerFormBuilderConfig_h
@import Foundation;

#include "IGFeedItemDirectResponseLoggingProviderDelegate-Protocol.h"
#include "IGFeedItemPageCellState.h"
#include "IGLeadGenAdsConsumerFormExitDelegate-Protocol.h"
#include "IGLeadGenMultiSubmitAdsResponse.h"

@class IGDirectResponseInfo, IGFeedItemTracker, IGMedia, IGSponsoredSupportConfiguration, IGUserSession, NSString;

@interface IGLeadGenAdsConsumerFormBuilderConfig : NSObject {
  /* instance variables */
  IGUserSession *_session;
  BOOL _isFormExtensionForm;
  BOOL _isFirstQuestionExposed;
  NSString *_firstQuestionOption;
  NSObject<IGLeadGenAdsConsumerFormExitDelegate> *_exitDelegate;
  NSString *_adPlacementName;
  NSString *_deepLinkDataModel;
  IGFeedItemTracker *_feedItemTracker;
  double _viewWidth;
}

@property (retain, nonatomic) NSString *ctaText;
@property (nonatomic) long long launchMethod;
@property (retain, nonatomic) NSString *adId;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) IGDirectResponseInfo *directResponseInfo;
@property (readonly, nonatomic) NSString *dynamicItemId;
@property (readonly, nonatomic) NSString *formId;
@property (readonly, nonatomic) IGMedia *media;
@property (readonly, nonatomic) IGFeedItemPageCellState *pageCellState;
@property (readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration;
@property (readonly, weak, nonatomic) NSObject<IGFeedItemDirectResponseLoggingProviderDelegate> *loggingDelegate;
@property (retain, nonatomic) NSString *trackingToken;
@property (readonly, nonatomic) IGLeadGenMultiSubmitAdsResponse *multiSubmitAdsResponse;

/* instance methods */
- (id)_selectedAswerFrstQuestionOption;
- (BOOL)_didSelectFirstQuestionOption;
@end

#endif /* IGLeadGenAdsConsumerFormBuilderConfig_h */
