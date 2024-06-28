//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC26IGFBCrossPostingDataLogger42IGFBAutoCrossPostingSettingsPlatformLogger_h
#define _TtC26IGFBCrossPostingDataLogger42IGFBAutoCrossPostingSettingsPlatformLogger_h
@import Foundation;

#include "_TtP26IGFBCrossPostingDataLogger50IGFBAutoCrossPostingSettingsPlatformLoggerProtocol_-Protocol.h"

@interface _TtC26IGFBCrossPostingDataLogger42IGFBAutoCrossPostingSettingsPlatformLogger : NSObject<_TtP26IGFBCrossPostingDataLogger50IGFBAutoCrossPostingSettingsPlatformLoggerProtocol_> { // (Swift)
  /* instance variables */
   analyticsLogger;
   user;
   loggingEventConfig;
}

/* instance methods */
- (id)initWithAnalyticsLogger:(id)logger user:(id)user;
- (id)logAutoCrossPostingSettingMutationAttemptWithDataSource:(id)source oldSettings:(id)settings newSettings:(id)settings;
- (void)logAutoCrossPostingSettingMutationFailureWithSessionId:(id)id dataSource:(id)source error:(id)error;
- (id)logAutoCrossPostingSettingFetchAttemptWithDataSource:(id)source;
- (void)logAutoCrossPostingSettingFetchFailureWithSessionId:(id)id dataSource:(id)source error:(id)error;
- (id)init;
@end

#endif /* _TtC26IGFBCrossPostingDataLogger42IGFBAutoCrossPostingSettingsPlatformLogger_h */
