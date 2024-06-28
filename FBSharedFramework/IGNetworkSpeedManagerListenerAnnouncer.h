//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNetworkSpeedManagerListenerAnnouncer_h
#define IGNetworkSpeedManagerListenerAnnouncer_h
@import Foundation;

#include "FBAnnouncerBase.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGNetworkSpeedManagerListenerAnnouncer : FBAnnouncerBase<NSObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)estimatedUploadBandwidthInKilobytesPerSecondDidChange:(double)change lastMeasurement:(id)measurement;
- (void)estimatedDownloadBandwidthInKilobytesPerSecondDidChange:(double)change lastMeasurement:(id)measurement;
@end

#endif /* IGNetworkSpeedManagerListenerAnnouncer_h */