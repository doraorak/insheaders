//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKAppEventsDeviceInfo_h
#define FBSDKAppEventsDeviceInfo_h
@import Foundation;

#include "FBSDKDeviceInformationProviding-Protocol.h"
#include "FBSDKSettings-Protocol.h"

@class NSString;

@interface FBSDKAppEventsDeviceInfo : NSObject<FBSDKDeviceInformationProviding>

@property (retain, nonatomic) NSString *carrierName;
@property (retain, nonatomic) NSString *timeZoneAbbrev;
@property (retain, nonatomic) NSString *timeZoneName;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *longVersion;
@property (retain, nonatomic) NSString *shortVersion;
@property (retain, nonatomic) NSString *sysVersion;
@property (retain, nonatomic) NSString *machine;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) unsigned long long coreCount;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double density;
@property (nonatomic) long long lastGroup1CheckTime;
@property (nonatomic) BOOL isEncodingDirty;
@property (retain, nonatomic) NSObject<FBSDKSettings> *settings;
@property (readonly, nonatomic) NSString *storageKey;
@property (readonly, nonatomic) NSString *encodedDeviceInfo;

/* class methods */
+ (id)shared;
+ (unsigned int)_readCoreCount;
+ (id)_getCarrier;

/* instance methods */
- (void)configureWithSettings:(id)settings;
- (void)_collectPersistentData;
- (BOOL)_isGroup1Expired;
- (void)_collectGroup1Data;
- (id)_generateEncoding;
- (double)unixTimeNow;
@end

#endif /* FBSDKAppEventsDeviceInfo_h */
