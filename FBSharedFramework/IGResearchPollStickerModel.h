//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGResearchPollStickerModel_h
#define IGResearchPollStickerModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGResearchPollStickerModel : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *surveyID;
@property (readonly, nonatomic) long long action;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithSurveyID:(id)id action:(long long)action;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGResearchPollStickerModel_h */
