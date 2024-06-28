//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDataProviderFetchConfig_h
#define IGDataProviderFetchConfig_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDataProviderContext.h"
#include "IGDataProviderPageInfo-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface IGDataProviderFetchConfig : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) BOOL isRefresh;
@property (readonly, nonatomic) NSObject<IGDataProviderPageInfo> *pageInfo;
@property (readonly, copy, nonatomic) IGDataProviderContext *context;

/* instance methods */
- (id)initWithIsRefresh:(BOOL)refresh pageInfo:(id)info context:(id)context;
@end

#endif /* IGDataProviderFetchConfig_h */