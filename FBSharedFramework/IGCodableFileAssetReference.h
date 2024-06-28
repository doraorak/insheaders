//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCodableFileAssetReference_h
#define IGCodableFileAssetReference_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class AVURLAsset;

@interface IGCodableFileAssetReference : NSObject<NSSecureCoding>

@property (readonly, nonatomic) AVURLAsset *asset;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFileAsset:(id)asset;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGCodableFileAssetReference_h */
