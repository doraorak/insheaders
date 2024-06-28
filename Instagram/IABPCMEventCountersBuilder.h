//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABPCMEventCountersBuilder_h
#define IABPCMEventCountersBuilder_h
@import Foundation;

@class NSString;

@interface IABPCMEventCountersBuilder : NSObject {
  /* instance variables */
  NSString *_pcmAdDestination;
  NSString *_pcmCampaignID;
  long long _totalEventsNumber;
  long long _totalNonJSEventsNumber;
  long long _totalEventsFromMainFrameNumber;
  long long _totalEventsFromLevel1FrameNumber;
  long long _totalEventsFromLevelMoreThan1FrameNumber;
  long long _totalEventsFromUnknownLevelFrameNumber;
  long long _totalEventsXFExpControlGroupNumber;
  long long _totalEventsXFExpTestGroupNumber;
  long long _totalEventsXFExpUnallocatedNumber;
  long long _invalidDataEventsNumber;
  long long _validConversionDataEventsNumber;
  long long _validConversionDataEventsFromJSNumber;
  long long _validConversionDataNonJSNumber;
  long long _validConversionDataFromMainFrameNumber;
  long long _validConversionDataFromLevel1FrameNumber;
  long long _validConversionDataFromLevelMoreThan1FrameNumber;
  long long _validConversionDataFromUnknownLevelFrameNumber;
  long long _invalidConversionDataEventsNumber;
  long long _failedToFetchConversionDataEventsNumber;
  long long _receivedConversionDataBeforeCampaignDataEventsNumber;
  long long _ccpaRestrictedEventsNumber;
  long long _sentConversionsNumber;
  long long _sentConversionsNonJSNumber;
  long long _sentConversionsFromMainFrameNumber;
  long long _sentConversionsFromLevel1FrameNumber;
  long long _sentConversionsFromLevelMoreThan1FrameNumber;
  long long _sentConversionsFromUnknownLevelFrame;
  long long _successfulConversionSendingsNumber;
  long long _failedConversionSendingsNumber;
  long long _initializationJSEventsNumber;
  long long _nonceRequestEventsNumber;
  long long _invalidNonceEventsNumber;
  long long _receivedPixelDataBeforeNonceIsSetEventsNumber;
  long long _receivedJSMessageWithoutCallbackIDEventsNumber;
  long long _nonceSendingFailedEventsNumber;
  long long _invalidCallbackHandlerNameEventsNumber;
}

/* class methods */
+ (id)eventCounters;
+ (id)eventCountersFromExistingEventCounters:(id)counters;

/* instance methods */
- (id)build;
- (id)withPcmAdDestination:(id)destination;
- (id)withPcmCampaignID:(id)id;
- (id)withTotalEventsNumber:(long long)number;
- (id)withTotalNonJSEventsNumber:(long long)number;
- (id)withTotalEventsFromMainFrameNumber:(long long)number;
- (id)withTotalEventsFromLevel1FrameNumber:(long long)number;
- (id)withTotalEventsFromLevelMoreThan1FrameNumber:(long long)number;
- (id)withTotalEventsFromUnknownLevelFrameNumber:(long long)number;
- (id)withTotalEventsXFExpControlGroupNumber:(long long)number;
- (id)withTotalEventsXFExpTestGroupNumber:(long long)number;
- (id)withTotalEventsXFExpUnallocatedNumber:(long long)number;
- (id)withInvalidDataEventsNumber:(long long)number;
- (id)withValidConversionDataEventsNumber:(long long)number;
- (id)withValidConversionDataEventsFromJSNumber:(long long)jsnumber;
- (id)withValidConversionDataNonJSNumber:(long long)jsnumber;
- (id)withValidConversionDataFromMainFrameNumber:(long long)number;
- (id)withValidConversionDataFromLevel1FrameNumber:(long long)number;
- (id)withValidConversionDataFromLevelMoreThan1FrameNumber:(long long)number;
- (id)withValidConversionDataFromUnknownLevelFrameNumber:(long long)number;
- (id)withInvalidConversionDataEventsNumber:(long long)number;
- (id)withFailedToFetchConversionDataEventsNumber:(long long)number;
- (id)withReceivedConversionDataBeforeCampaignDataEventsNumber:(long long)number;
- (id)withCcpaRestrictedEventsNumber:(long long)number;
- (id)withSentConversionsNumber:(long long)number;
- (id)withSentConversionsNonJSNumber:(long long)jsnumber;
- (id)withSentConversionsFromMainFrameNumber:(long long)number;
- (id)withSentConversionsFromLevel1FrameNumber:(long long)number;
- (id)withSentConversionsFromLevelMoreThan1FrameNumber:(long long)number;
- (id)withSentConversionsFromUnknownLevelFrame:(long long)frame;
- (id)withSuccessfulConversionSendingsNumber:(long long)number;
- (id)withFailedConversionSendingsNumber:(long long)number;
- (id)withInitializationJSEventsNumber:(long long)number;
- (id)withNonceRequestEventsNumber:(long long)number;
- (id)withInvalidNonceEventsNumber:(long long)number;
- (id)withReceivedPixelDataBeforeNonceIsSetEventsNumber:(long long)number;
- (id)withReceivedJSMessageWithoutCallbackIDEventsNumber:(long long)number;
- (id)withNonceSendingFailedEventsNumber:(long long)number;
- (id)withInvalidCallbackHandlerNameEventsNumber:(long long)number;
@end

#endif /* IABPCMEventCountersBuilder_h */