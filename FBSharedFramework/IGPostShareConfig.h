//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPostShareConfig_h
#define IGPostShareConfig_h
@import Foundation;

#include "FBValueObject.h"
#include "IGPostPendingShareMetadata.h"
#include "IGPostRetryBehavior.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;

@interface IGPostShareConfig : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *postId;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) long long shareType;
@property (readonly, copy, nonatomic) NSString *uploadUserPk;
@property (readonly, copy, nonatomic) NSString *configureUserPk;
@property (readonly, copy, nonatomic) IGPostPendingShareMetadata *pendingShareMetadata;
@property (readonly, copy, nonatomic) IGPostRetryBehavior *retryBehavior;
@property (readonly, copy, nonatomic) NSString *navChain;
@property (readonly, copy, nonatomic) NSDate *mediaCreationTime;
@property (readonly, nonatomic) BOOL isAsyncConfigure;
@property (readonly, nonatomic) BOOL disableUploadStatusLiveActivity;
@property (readonly, copy, nonatomic) NSArray *noRetryErrorCodes;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithPostId:(id)id metadata:(id)metadata shareType:(long long)type uploadUserPk:(id)pk configureUserPk:(id)pk pendingShareMetadata:(id)metadata retryBehavior:(id)behavior navChain:(id)chain mediaCreationTime:(id)time isAsyncConfigure:(BOOL)configure disableUploadStatusLiveActivity:(BOOL)activity noRetryErrorCodes:(id)codes;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGPostShareConfig_h */