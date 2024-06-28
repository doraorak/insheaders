//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectXMAStackableModel_h
#define IGDirectXMAStackableModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDirectUIMessageProviding-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface IGDirectXMAStackableModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) long long startIdx;
@property (readonly, nonatomic) long long stackSize;
@property (readonly, nonatomic) NSObject<IGDirectUIMessageProviding> *messageProvider;

/* instance methods */
- (id)initWithStartIdx:(long long)idx stackSize:(long long)size messageProvider:(id)provider;
@end

#endif /* IGDirectXMAStackableModel_h */