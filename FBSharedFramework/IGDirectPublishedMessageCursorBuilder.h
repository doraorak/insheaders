//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPublishedMessageCursorBuilder_h
#define IGDirectPublishedMessageCursorBuilder_h
@import Foundation;

@class NSDate, NSString;

@interface IGDirectPublishedMessageCursorBuilder : NSObject {
  /* instance variables */
  NSDate *_serverTimestamp;
  NSString *_serverId;
}

/* class methods */
+ (id)directPublishedMessageCursorFromExistingDirectPublishedMessageCursor:(id)cursor;

/* instance methods */
- (id)initWithServerTimestamp:(id)timestamp serverId:(id)id;
- (id)build;
- (id)withServerTimestamp:(id)timestamp;
- (id)withServerId:(id)id;
@end

#endif /* IGDirectPublishedMessageCursorBuilder_h */
