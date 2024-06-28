//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallLoggingContext_h
#define IGVideoCallLoggingContext_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGVideoCallAverageCounter.h"
#include "NSObject-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString;
@protocol FBTimeMachine;

@interface IGVideoCallLoggingContext : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  NSObject<FBTimeMachine> *_timeMachine;
  NSMutableArray *_cachedPeerIds;
}

@property (nonatomic) long long lastCallFunnelStep;
@property (nonatomic) double initialHttpJoinStartTimestamp;
@property (nonatomic) double startTimestamp;
@property (nonatomic) double joinTimestamp;
@property (nonatomic) double streamStartTimestamp;
@property (nonatomic) double rejoinStartTimestamp;
@property (nonatomic) double videoStallTimestamp;
@property (readonly, nonatomic) NSMutableDictionary *lastTimestampForScreenMode;
@property (readonly, nonatomic) NSMutableDictionary *lastCoWatchTimestampForScreenMode;
@property (readonly, nonatomic) NSMutableDictionary *lastCoWatchReelsTimestampForScreenMode;
@property (nonatomic) long long joinSequenceNumber;
@property (nonatomic) double audioFocusLostTimestamp;
@property (nonatomic) double disconnectedTimestamp;
@property (nonatomic) long long videoStallTimeInMs;
@property (nonatomic) long long numberOfVideoStalled;
@property (nonatomic) long long numberOfParticipant;
@property (nonatomic) long long numberOfParticipantsAdded;
@property (nonatomic) long long streamTimeInMs;
@property (nonatomic) double coWatchStartTimestamp;
@property (nonatomic) double coWatchReelsStartTimestamp;
@property (nonatomic) double coWatchTotalDuration;
@property (nonatomic) double coWatchReelsTotalDuration;
@property (readonly, nonatomic) NSMutableDictionary *durationInMsForScreenMode;
@property (readonly, nonatomic) NSMutableDictionary *coWatchDurationInMsForScreenMode;
@property (readonly, nonatomic) NSMutableDictionary *coWatchReelsDurationInMsForScreenMode;
@property (copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSMutableSet *allParticipantsPk;
@property (readonly, nonatomic) NSMutableDictionary *participantsStreamAddedTimestamp;
@property (nonatomic) BOOL isBatteryCharging;
@property (nonatomic) double joinBatteryLevel;
@property (copy, nonatomic) NSString *joinThermalStateName;
@property (nonatomic) long long criticalThermalStateDurationInMs;
@property (nonatomic) double lastCriticalThermalStateStartTimestamp;
@property (copy, nonatomic) NSString *rsysLocalCallId;
@property (copy, nonatomic) NSString *rsysSharedCallId;
@property (readonly, copy, nonatomic) NSString *waterfallId;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, nonatomic) long long trigger;
@property (readonly, nonatomic) long long callType;
@property (readonly, copy, nonatomic) NSString *userPk;
@property (readonly, copy, nonatomic) NSString *threadId;
@property (readonly, copy, nonatomic) NSString *openThreadId;
@property (readonly, copy, nonatomic) NSString *armadilloThreadId;
@property (readonly, copy, nonatomic) NSString *occamadilloThreadId;
@property (readonly, nonatomic) long long xmaType;
@property (readonly, copy, nonatomic) NSNumber *threadMemberCount;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) unsigned long long ttrcInteractionType;
@property (retain, nonatomic) NSString *lastFaceFilterEffectId;
@property (retain, nonatomic) NSString *lastFaceFilterEffectType;
@property (nonatomic) double totalFaceFilterAppliedDuration;
@property (nonatomic) double faceFilterAppliedTimestamp;
@property (retain, nonatomic) NSString *lastLightingFilterName;
@property (nonatomic) double lightingFilterAppliedTimestamp;
@property (retain, nonatomic) NSString *lastTouchupBucketLoggingEvent;
@property (nonatomic) double touchupFilterChangedTimestamp;
@property (nonatomic) double generalAREffectAppliedTimestamp;
@property (nonatomic) long long effectsLayered;
@property (nonatomic) double totalScreenSharingDuration;
@property (nonatomic) double totalScreenViewingDuration;
@property (nonatomic) double totalScreenSharingConnectedDuration;
@property (nonatomic) double screenSharingTimestamp;
@property (nonatomic) double screenViewingTimestamp;
@property (nonatomic) double screenSharingConnectedTimestamp;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL videoEnabled;
@property (nonatomic) BOOL isInitiatingCall;
@property (nonatomic) long long screenMode;
@property (nonatomic) long long lastForegroundedScreenMode;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *serverInfoData;
@property (copy, nonatomic) NSString *cameraPosition;
@property (copy, nonatomic) NSString *notificationId;
@property (nonatomic) BOOL isColdStart;
@property (nonatomic) long long capturedFramesFailingPrivacy;
@property (nonatomic) long long totalCapturedFrames;
@property (nonatomic) long long totalLocalAudioPacketSent;
@property (nonatomic) long long totalLocalAudioPacketLoss;
@property (nonatomic) long long totalLocalVideoPacketSent;
@property (nonatomic) long long totalLocalVideoPacketLoss;
@property (readonly, nonatomic) IGVideoCallAverageCounter *localAudioRttCounter;
@property (readonly, nonatomic) IGVideoCallAverageCounter *localVideoRttCounter;
@property (copy, nonatomic) NSString *sendAudioCodec;
@property (copy, nonatomic) NSString *sendVideoCodec;
@property (copy, nonatomic) NSString *receivedAudioCodec;
@property (copy, nonatomic) NSString *receivedVideoCodec;
@property (copy, nonatomic) NSString *initialCoWatchContentId;
@property (copy, nonatomic) NSString *initialCowatchContentSource;
@property (copy, nonatomic) NSString *initialCoWatchContentType;
@property (readonly, nonatomic) BOOL isE2EEMandated;
@property (readonly, nonatomic) BOOL isCutoverThread;
@property (nonatomic) long long totalNumberOfReconnections;
@property (nonatomic) double totalDurationSpentReconnecting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAnalyticsLogger:(id)logger waterfallId:(id)id eventName:(id)name trigger:(long long)trigger callType:(long long)type userPk:(id)pk threadId:(id)id openThreadId:(id)id armadilloThreadId:(id)id occamadilloThreadId:(id)id xmaType:(long long)type sessionId:(id)id serverInfoData:(id)data threadMemberCount:(id)count isE2EEMandated:(BOOL)eemandated isCutoverThread:(BOOL)thread;
- (id)logger;
- (void)coWatchStarted;
- (void)coWatchMediaStartPlaying:(BOOL)playing;
- (void)coWatchSwitchedToScreenMode:(long long)mode;
- (void)coWatchEnded;
- (void)recordBatteryAtStartOfCall;
- (void)updatePeerIds:(id)ids;
- (id)peerIds;
- (void)_batteryStateDidChange:(id)change;
- (void)_thermalStateChanged:(id)changed;
- (void)_incrementCoWatchReelsDuration;
- (double)currentMediaTime;
- (double)currentUnixTime;
@end

#endif /* IGVideoCallLoggingContext_h */
