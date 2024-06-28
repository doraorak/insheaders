//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRoomsInvitedParticipantDataSourceContext_h
#define IGRoomsInvitedParticipantDataSourceContext_h
@import Foundation;

#include "IGVideoCallUserKey.h"
#include "NSCopying-Protocol.h"

@interface IGRoomsInvitedParticipantDataSourceContext : NSObject<NSCopying> // (Swift)

@property (nonatomic, readonly) IGVideoCallUserKey *userKey;
@property (nonatomic, readonly) unsigned long long trailingButtonType;
@property (nonatomic, readonly) unsigned long long leftTrailingButtonType;

/* instance methods */
- (id)initWithUserKey:(id)key trailingButtonType:(unsigned long long)type leftTrailingButtonType:(unsigned long long)type;
- (id)copyWithZone:(void *)zone;
- (id)init;
@end

#endif /* IGRoomsInvitedParticipantDataSourceContext_h */