//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileHighlightsShareSheetViewCellModel_h
#define IGProfileHighlightsShareSheetViewCellModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"
#include "IGStoryOwnerType-Protocol.h"

@class IGAPIReelCoverMediaClientDict, NSString;

@interface IGProfileHighlightsShareSheetViewCellModel : NSObject<IGListDiffable>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) IGAPIReelCoverMediaClientDict *coverInfo;
@property (readonly, nonatomic) NSObject<IGStoryOwnerType> *owner;

/* instance methods */
- (id)initWithIdentifier:(id)identifier title:(id)title coverInfo:(id)info owner:(id)owner;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGProfileHighlightsShareSheetViewCellModel_h */
