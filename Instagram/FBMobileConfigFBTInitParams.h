//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMobileConfigFBTInitParams_h
#define FBMobileConfigFBTInitParams_h
@import Foundation;

@class NSString;

@interface FBMobileConfigFBTInitParams : NSObject {
  /* instance variables */
  int _universeType;
  NSString *_containerPath;
  double _syncFetchTimeoutSecs;
}

@property (nonatomic) int unitType;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *locale;
@property (nonatomic) BOOL readOnly;
@property (copy, nonatomic) id /* block */ fetcherSetter;
@property (copy, nonatomic) id /* block */ contextManagerCreator;
@property (nonatomic) BOOL skipFetch;

/* instance methods */
- (id)init;
@end

#endif /* FBMobileConfigFBTInitParams_h */
