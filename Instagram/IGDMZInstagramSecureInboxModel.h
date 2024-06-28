//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDMZInstagramSecureInboxModel_h
#define IGDMZInstagramSecureInboxModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol MBQInstagramSecureInboxModelProtocol;

@interface IGDMZInstagramSecureInboxModel : NSObject<NSObject> {
  /* instance variables */
  NSObject<MBQInstagramSecureInboxModelProtocol> *_resultSet;
}

@property (readonly, nonatomic) long long featureLimitsExpirationTimestampSeconds;
@property (readonly, nonatomic) int pendingThreadCount;
@property (readonly, nonatomic) int spamThreadCount;
@property (readonly, nonatomic) int pendingThreadUnreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCQLResultSet:(id)set;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGDMZInstagramSecureInboxModel_h */