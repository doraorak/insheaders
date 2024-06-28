//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC26IGImmersiveEndOfFeedModels16IGImmersiveMedia_h
#define _TtC26IGImmersiveEndOfFeedModels16IGImmersiveMedia_h
@import Foundation;

#include "IGListDiffable-Protocol.h"
#include "IGMedia.h"

@interface _TtC26IGImmersiveEndOfFeedModels16IGImmersiveMedia : NSObject<IGListDiffable> // (Swift)

@property (nonatomic, retain) IGMedia *media;

/* instance methods */
- (id)initWithMedia:(id)media;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (id)init;
@end

#endif /* _TtC26IGImmersiveEndOfFeedModels16IGImmersiveMedia_h */