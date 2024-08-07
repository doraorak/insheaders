//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKObjectDecoder_h
#define FBSDKObjectDecoder_h
@import Foundation;

#include "FBSDKObjectDecoding-Protocol.h"

@class NSKeyedUnarchiver, NSString;

@interface FBSDKObjectDecoder : NSObject<FBSDKObjectDecoding>

@property (retain, nonatomic) NSKeyedUnarchiver *unarchiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWith:(id)with;
- (id)decodeObjectOfClass:(Class)class forKey:(id)key;
- (id)decodeObjectOfClasses:(id)classes forKey:(id)key;
@end

#endif /* FBSDKObjectDecoder_h */
