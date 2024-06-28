//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUsageInsightsReminderSettingsIntentTarget_h
#define IGUsageInsightsReminderSettingsIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSString;

@interface IGUsageInsightsReminderSettingsIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) long long reminderType;
@property (readonly, nonatomic) NSString *entryPoint;
@property (readonly, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithReminderType:(long long)type entryPoint:(id)point completion:(id /* block */)completion;
@end

#endif /* IGUsageInsightsReminderSettingsIntentTarget_h */
