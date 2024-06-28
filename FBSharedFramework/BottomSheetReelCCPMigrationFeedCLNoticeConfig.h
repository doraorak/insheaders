//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BottomSheetReelCCPMigrationFeedCLNoticeConfig_h
#define BottomSheetReelCCPMigrationFeedCLNoticeConfig_h
@import Foundation;

#include "CLNoticeConfig-Protocol.h"
#include "CLNoticeSnoozeConfig.h"

@class NSString;

@interface BottomSheetReelCCPMigrationFeedCLNoticeConfig : NSObject<CLNoticeConfig>

@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) long long xpostingVariant_DEPRECATED;
@property (readonly, nonatomic) long long noticeType;
@property (retain, nonatomic) CLNoticeSnoozeConfig *snoozeConfig;
@property (retain, nonatomic) NSString *clientSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)isEligibleAndExpose;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* BottomSheetReelCCPMigrationFeedCLNoticeConfig_h */
