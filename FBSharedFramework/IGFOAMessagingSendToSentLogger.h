//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFOAMessagingSendToSentLogger_h
#define IGFOAMessagingSendToSentLogger_h
@import Foundation;

#include "FOAMessagingSendToSentLogger.h"

@interface IGFOAMessagingSendToSentLogger : FOAMessagingSendToSentLogger
/* class methods */
+ (id)createLoggerWithUserSession:(id)session isMedia:(BOOL)media isInstamadillo:(BOOL)instamadillo;
+ (id)loggerWithInstanceKey:(int)key userSession:(id)session;
+ (id)loggerWithLoggingId:(id)id userSession:(id)session;

/* instance methods */
- (void)startTraceWithLoggingId:(id)id isInstamadillo:(BOOL)instamadillo isE2EE:(BOOL)ee threadOpenId:(id)id oneTraceTraceId:(id)id productType:(long long)type threadType:(unsigned long long)type;
- (void)logDirectMutationExecute;
- (void)logDirectMutationSuccess;
- (void)logDirectMutationFailure;
- (void)logDirectMutationCancel;
- (void)logSendServerAuthoritative;
- (void)addIsInstamadillo:(BOOL)instamadillo;
- (void)addOpenThreadId:(id)id;
- (void)addIsDisappearingMode:(BOOL)mode;
- (void)addIsVanishMode:(BOOL)mode;
- (void)addMessageTypeInt:(id)int;
- (void)addMessageId:(id)id;
- (void)addThreadType:(unsigned long long)type;
- (void)addIsE2EE:(BOOL)ee;
- (void)addDirectMutationType:(id)type;
- (void)addBootstrapReadinessIsMemContextReady:(BOOL)ready;
- (void)addAttachmentTypeIfNotZero:(int)zero;
- (void)addAttachmentCountIfNotZero:(id)zero;
- (void)addVisualTypeIfNotNull:(id)null;
@end

#endif /* IGFOAMessagingSendToSentLogger_h */
