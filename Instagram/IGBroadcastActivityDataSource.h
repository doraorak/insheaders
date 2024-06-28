//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBroadcastActivityDataSource_h
#define IGBroadcastActivityDataSource_h
@import Foundation;

@class IGUserSession, NSNumber, NSString;
@protocol IGBroadcastActivityDataSourceDelegate;

@interface IGBroadcastActivityDataSource : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_sessionId;
  NSNumber *_lastCursorTimestamp;
  NSString *_lastCursorThreadId;
  NSString *_fetchTypeInProgress;
}

@property BOOL fetchInProgress;
@property (weak, nonatomic) NSObject<IGBroadcastActivityDataSourceDelegate> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session sessionId:(id)id;
@end

#endif /* IGBroadcastActivityDataSource_h */
