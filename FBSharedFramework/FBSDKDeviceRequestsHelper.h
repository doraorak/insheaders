//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKDeviceRequestsHelper_h
#define FBSDKDeviceRequestsHelper_h
@import Foundation;

@interface FBSDKDeviceRequestsHelper : NSObject
/* class methods */
+ (void)initialize;
+ (id)getDeviceInfo;
+ (BOOL)startAdvertisementService:(id)service withDelegate:(id)delegate;
+ (BOOL)isDelegate:(id)delegate forAdvertisementService:(id)service;
+ (void)cleanUpAdvertisementService:(id)service;
@end

#endif /* FBSDKDeviceRequestsHelper_h */
