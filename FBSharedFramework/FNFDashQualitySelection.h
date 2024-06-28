//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFDashQualitySelection_h
#define FNFDashQualitySelection_h
@import Foundation;

#include "FNFDashSelectionMetadata.h"

@protocol FNFDashRepresentable;

@interface FNFDashQualitySelection : NSObject

@property (readonly, nonatomic) NSObject<FNFDashRepresentable> *selectedRepresentation;
@property (readonly, nonatomic) FNFDashSelectionMetadata *selectionMetadata;
@property (readonly, nonatomic) long long trackType;

/* instance methods */
- (id)initWithSelectedRepresentation:(id)representation trackType:(long long)type;
- (id)initWithSelectedRepresentation:(id)representation qualityMetadata:(id)metadata trackType:(long long)type;
- (id)toMap;
@end

#endif /* FNFDashQualitySelection_h */