//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayBusinessTransactionEarningsSupportInfoModel_h
#define FBPayBusinessTransactionEarningsSupportInfoModel_h
@import Foundation;

#include "FBPayTextWithEntities.h"

@class NSString;

@interface FBPayBusinessTransactionEarningsSupportInfoModel : NSObject

@property (readonly, nonatomic) NSString *sectionTitle;
@property (readonly, nonatomic) FBPayTextWithEntities *supportUri;

/* instance methods */
- (id)initWithSectionTitle:(id)title supportUri:(id)uri;
@end

#endif /* FBPayBusinessTransactionEarningsSupportInfoModel_h */