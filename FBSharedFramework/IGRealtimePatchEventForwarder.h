//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRealtimePatchEventForwarder_h
#define IGRealtimePatchEventForwarder_h
@import Foundation;

#include "IGRealtimeServerPayloadHandler-Protocol.h"

@class NSString;
@protocol IGRealtimePatchEventAnnouncer;

@interface IGRealtimePatchEventForwarder : NSObject<IGRealtimeServerPayloadHandler> {
  /* instance variables */
  NSObject<IGRealtimePatchEventAnnouncer> *_announcer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRealtimeClient:(id)client;
- (void)handlePayload:(id)payload;
- (void)handlePatchEvent:(id)event;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* IGRealtimePatchEventForwarder_h */