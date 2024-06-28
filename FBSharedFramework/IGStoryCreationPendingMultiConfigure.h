//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryCreationPendingMultiConfigure_h
#define IGStoryCreationPendingMultiConfigure_h
@import Foundation;

#include "IGAnalyticsUploadWaterfall-Protocol.h"
#include "IGMediaMetadata.h"
#include "IGStoryCreationManagerShareInfo.h"

@interface IGStoryCreationPendingMultiConfigure : NSObject

@property (readonly, nonatomic) IGMediaMetadata *metadata;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) IGStoryCreationManagerShareInfo *shareInfo;
@property (readonly, nonatomic) NSObject<IGAnalyticsUploadWaterfall> *uploadWaterfall;

/* instance methods */
- (id)initWithMetadata:(id)metadata dataType:(long long)type shareInfo:(id)info uploadWaterfall:(id)waterfall;
@end

#endif /* IGStoryCreationPendingMultiConfigure_h */
