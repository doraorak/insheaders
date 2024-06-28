//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayEmailOptInComponentDataModel_h
#define FBPayEmailOptInComponentDataModel_h
@import Foundation;

#include "FBValueObject.h"
#include "FBPayTextWithEntities.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface FBPayEmailOptInComponentDataModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) BOOL isDefaultToggleStateOn;
@property (readonly, copy, nonatomic) FBPayTextWithEntities *toggleContent;

/* instance methods */
- (id)initWithIsDefaultToggleStateOn:(BOOL)on toggleContent:(id)content;
@end

#endif /* FBPayEmailOptInComponentDataModel_h */