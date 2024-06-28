//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGThrottledEvent_h
#define IGThrottledEvent_h
@import Foundation;

@class NSString;

@interface IGThrottledEvent : NSObject {
  /* instance variables */
  NSString *_userDefaultsKey;
  long long _numEvents;
  long long _numDays;
}

/* instance methods */
- (id)initWithUniqueID:(id)id eventsUntilPrompt:(long long)prompt daysUntilPromptAgain:(long long)again firstDate:(id)date;
@end

#endif /* IGThrottledEvent_h */