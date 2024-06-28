//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMediaRestorationContextBuilder_h
#define IGDirectMediaRestorationContextBuilder_h
@import Foundation;

@class NSDate, NSString;

@interface IGDirectMediaRestorationContextBuilder : NSObject {
  /* instance variables */
  NSString *_threadJid;
  NSString *_messageOtid;
  NSString *_objectId;
  NSDate *_serverTimestamp;
  BOOL _isTTLC;
}

/* class methods */
+ (id)directMediaRestorationContextFromExistingDirectMediaRestorationContext:(id)context;

/* instance methods */
- (id)initWithThreadJid:(id)jid messageOtid:(id)otid objectId:(id)id serverTimestamp:(id)timestamp;
- (id)build;
- (id)withThreadJid:(id)jid;
- (id)withMessageOtid:(id)otid;
- (id)withObjectId:(id)id;
- (id)withServerTimestamp:(id)timestamp;
- (id)withIsTTLC:(BOOL)ttlc;
@end

#endif /* IGDirectMediaRestorationContextBuilder_h */
