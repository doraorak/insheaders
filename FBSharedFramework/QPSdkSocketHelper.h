//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef QPSdkSocketHelper_h
#define QPSdkSocketHelper_h
@import Foundation;

@interface QPSdkSocketHelper : NSObject {
  /* instance variables */
  const struct QPSdkClashUnitSocketPluginData * _pluginData;
  const struct QPSdkClashSessionPersisterSocketPluginData * _persisterPluginData;
  const struct QPSdkClashSessionFetcherSocketPluginData * _fetcherData;
}

/* instance methods */
- (id)initForApp:(long long)app;
- (id)getClashUnits;
- (id)createEligibilityFetcherForClashUnits:(id)units session:(id)session;
- (id)createPersisterForLocation:(id)location;
@end

#endif /* QPSdkSocketHelper_h */
