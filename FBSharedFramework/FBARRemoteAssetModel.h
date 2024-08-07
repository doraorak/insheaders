//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARRemoteAssetModel_h
#define FBARRemoteAssetModel_h
@import Foundation;

#include "FBValueObject.h"
#include "FBARAssetModel.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface FBARRemoteAssetModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) FBARAssetModel *assetModel;
@property (readonly, copy, nonatomic) NSURL *remoteUrl;
@property (readonly, nonatomic) long long fetchOrder;
@property (readonly, nonatomic) long long compressionType;
@property (readonly, nonatomic) BOOL encrypted;
@property (readonly, copy, nonatomic) NSString *md5Hash;
@property (readonly, nonatomic) unsigned long long fileSizeInBytes;

/* instance methods */
- (id)initWithAssetModel:(id)model remoteUrl:(id)url fetchOrder:(long long)order compressionType:(long long)type encrypted:(BOOL)encrypted md5Hash:(id)hash fileSizeInBytes:(unsigned long long)bytes;
@end

#endif /* FBARRemoteAssetModel_h */
