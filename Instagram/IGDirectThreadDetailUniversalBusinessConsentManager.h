//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadDetailUniversalBusinessConsentManager_h
#define IGDirectThreadDetailUniversalBusinessConsentManager_h
@import Foundation;

@class PNPandoGraphQLService;

@interface IGDirectThreadDetailUniversalBusinessConsentManager : NSObject {
  /* instance variables */
  PNPandoGraphQLService *_pandoGraphQLService;
}

@property (nonatomic) BOOL hasMadeUbcDecision;
@property (nonatomic) BOOL isBusinessOptedIn;
@property (nonatomic) BOOL isConsumerOptedIn;

/* instance methods */
- (id)initWithDependencies:(id)dependencies;
- (void)maybeQueryUniversalBusinessConsentSettings:(id)settings consumerIgId:(id)id;
- (void)updateConsumerOptInStatus:(id)status consumerId:(id)id optInStatus:(BOOL)status;
- (BOOL)shouldQueryUniversalBusinessConsentSettings:(id)settings;
@end

#endif /* IGDirectThreadDetailUniversalBusinessConsentManager_h */