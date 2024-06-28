//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdsProductPageLogger_h
#define IGAdsProductPageLogger_h
@import Foundation;

@class IGAPIProductDetailsProductItemDict, IGShoppingNavigationAnalyticsContext, IGUserSession, NSString;

@interface IGAdsProductPageLogger : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  IGAPIProductDetailsProductItemDict *_productItem;
  NSString *_trackingToken;
  NSString *_analyticsModule;
  NSString *_priorSubmodule;
}

@property (readonly, nonatomic) NSString *mediaId;
@property (readonly, nonatomic) IGShoppingNavigationAnalyticsContext *navigationInfo;

/* instance methods */
- (id)initWithUserSession:(id)session productItem:(id)item mediaId:(id)id trackingToken:(id)token analyticsModule:(id)module priorSubmodule:(id)submodule navigationInfo:(id)info;
@end

#endif /* IGAdsProductPageLogger_h */
