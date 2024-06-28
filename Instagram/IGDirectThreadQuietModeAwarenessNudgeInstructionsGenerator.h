//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadQuietModeAwarenessNudgeInstructionsGenerator_h
#define IGDirectThreadQuietModeAwarenessNudgeInstructionsGenerator_h
@import Foundation;

#include "IGDirectInteropFeatureGating-Protocol.h"
#include "NSObject-Protocol.h"

@class IGUser, IGUserDefaults, NSDate, NSString;

@interface IGDirectThreadQuietModeAwarenessNudgeInstructionsGenerator : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGDirectInteropFeatureGating> *_featureGating;
  IGUser *_currentUser;
  IGUserDefaults *_userDefaults;
  NSDate *_senderOnlyLastSeenDate;
  NSDate *_receiverOnlyLastSeenDate;
  NSDate *_senderAndReceiverInQuietModeLastSeenDate;
  BOOL _isQuietModeConsolidationEnabled;
  double _cooldownTimeInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFeatureGating:(id)gating currentUser:(id)user userDefaults:(id)defaults;
- (id)generateInstructionsForMessages:(id)messages generationInput:(id)input previousGenerationOutput:(id)output;
- (id)_getQuietModeStatusForSenderAndReceiver:(id)receiver;
- (BOOL)_shouldShowSenderInQuietModeOnlyNudge;
- (BOOL)_shouldShowReceiverInQuietModeOnlyNudgeWithCurrentThreadId:(id)id;
- (BOOL)_shouldShowSenderAndReceiverInQuietModeNudgeWithCurrentThreadId:(id)id;
- (id)_getLastSeenDateForUserWithThreadId:(id)id isSenderInQuietMode:(BOOL)mode;
- (BOOL)_userIsInNightTime;
@end

#endif /* IGDirectThreadQuietModeAwarenessNudgeInstructionsGenerator_h */