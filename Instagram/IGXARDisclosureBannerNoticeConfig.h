//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGXARDisclosureBannerNoticeConfig_h
#define IGXARDisclosureBannerNoticeConfig_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGUserSession, NSString;

@interface IGXARDisclosureBannerNoticeConfig : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session;
- (BOOL)isEnabled;
- (BOOL)isServerSyncEnabled;
- (long long)maxImpressionCount;
- (long long)sequenceNumber;
@end

#endif /* IGXARDisclosureBannerNoticeConfig_h */