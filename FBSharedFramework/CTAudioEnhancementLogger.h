//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CTAudioEnhancementLogger_h
#define CTAudioEnhancementLogger_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol CreatorToolsEventLogging;

@interface CTAudioEnhancementLogger : NSObject<NSObject> {
  /* instance variables */
  NSMutableDictionary *_extras;
  NSObject<CreatorToolsEventLogging> *_eventLogger;
  NSString *_module;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEventLogger:(id)logger module:(id)module;
- (void)addEntriesFromDictionary:(id)dictionary;
- (void)logWarmupCompleted:(id)completed;
- (void)logAlgoMetricsAfterWarmup:(id)warmup;
- (void)logModelDownloadCompleted:(id)completed;
- (void)logAudioEnhancementError:(id)error errorMessage:(id)message;
- (void)_logEvent:(id)event;
- (void)_logEvent:(id)event extras:(id)extras;
@end

#endif /* CTAudioEnhancementLogger_h */
