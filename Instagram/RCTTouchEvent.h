//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTTouchEvent_h
#define RCTTouchEvent_h
@import Foundation;

#include "RCTEvent-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface RCTTouchEvent : NSObject<RCTEvent> {
  /* instance variables */
  NSArray *_reactTouches;
  NSArray *_changedIndexes;
}

@property (readonly, nonatomic) NSNumber *viewTag;
@property (readonly, copy, nonatomic) NSString *eventName;
@optional
@property (readonly, nonatomic) unsigned short coalescingKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)moduleDotMethod;

/* instance methods */
- (id)initWithEventName:(id)name reactTag:(id)tag reactTouches:(id)touches changedIndexes:(id)indexes coalescingKey:(unsigned short)key;
- (id)init;
- (BOOL)canCoalesce;
- (id)coalesceWithEvent:(id)event;
- (id)arguments;
@end

#endif /* RCTTouchEvent_h */