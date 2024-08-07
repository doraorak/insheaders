//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMobileConfigInitParams_h
#define IGMobileConfigInitParams_h
@import Foundation;

@class NSDictionary, NSString;

@interface IGMobileConfigInitParams : NSObject {
  /* instance variables */
  BOOL _readonly;
  BOOL _isInstacrashRecoveryModeEnabled;
  NSString *_containerPath;
  NSDictionary *_extraURLRequestParams;
}

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *familyDeviceId;
@property (nonatomic) int unitType;

/* instance methods */
- (id)initWithSession:(id)session deviceId:(id)id familyDeviceId:(id)id unitType:(int)type containerPath:(id)path isInstacrashRecoveryModeEnabled:(BOOL)enabled;
@end

#endif /* IGMobileConfigInitParams_h */
