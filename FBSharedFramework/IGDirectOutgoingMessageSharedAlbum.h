//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectOutgoingMessageSharedAlbum_h
#define IGDirectOutgoingMessageSharedAlbum_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGDirectOutgoingMessageSharedAlbum : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSArray *mediaList;
@property (readonly, copy, nonatomic) NSString *uploadId;
@property (readonly, copy, nonatomic) NSString *originalMessageClientContext;
@property (readonly, copy, nonatomic) NSString *originalMessageId;
@property (readonly, copy, nonatomic) NSString *sharedAlbumId;
@property (readonly, nonatomic) unsigned long long actionType;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithMediaList:(id)list uploadId:(id)id originalMessageClientContext:(id)context originalMessageId:(id)id sharedAlbumId:(id)id actionType:(unsigned long long)type;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectOutgoingMessageSharedAlbum_h */
