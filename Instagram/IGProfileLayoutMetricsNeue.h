//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileLayoutMetricsNeue_h
#define IGProfileLayoutMetricsNeue_h
@import Foundation;

#include "IGProfileLayoutMetrics-Protocol.h"

@class NSString;

@interface IGProfileLayoutMetricsNeue : NSObject<IGProfileLayoutMetrics>

@property (readonly, nonatomic) double profileAvatarSize;
@property (readonly, nonatomic) double profileAvatarPadding;
@property (readonly, nonatomic) double profileAvatarStoryRingPadding;
@property (readonly, nonatomic) double profileStatsYInset;
@property (readonly, nonatomic) double profileStatsHeight;
@property (readonly, nonatomic) BOOL useSecondaryTextColorForStatNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* IGProfileLayoutMetricsNeue_h */
