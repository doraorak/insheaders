//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectUnifiedComposerPollsModel_h
#define IGDirectUnifiedComposerPollsModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"
#include "IGSmartStickerModelType-Protocol.h"
#include "IGStickerModelType-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface IGDirectUnifiedComposerPollsModel : NSObject<IGListDiffable, IGStickerModelType, IGSmartStickerModelType, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, nonatomic) BOOL includeInRecent;
@property (nonatomic) BOOL isBoostEligible;
@property (copy, nonatomic) NSString *stickerSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (unsigned long long)smartStickerType;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectUnifiedComposerPollsModel_h */
