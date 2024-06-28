//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationEarningsInsightsViewModel_h
#define IGMonetizationEarningsInsightsViewModel_h
@import Foundation;

@class IGUserSession;
@protocol FBPayUPLLoggerWrapper;

@interface IGMonetizationEarningsInsightsViewModel : NSObject {
  /* instance variables */
  long long _productType;
  IGUserSession *_userSession;
  NSObject<FBPayUPLLoggerWrapper> *_contentAppreciationLogger;
}

/* instance methods */
- (id)initWithUserSession:(id)session logger:(id)logger productType:(long long)type;
- (id)analyticsModule;
@end

#endif /* IGMonetizationEarningsInsightsViewModel_h */