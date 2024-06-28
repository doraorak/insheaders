//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAREffectAttributionStoryViewModel_h
#define IGAREffectAttributionStoryViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGAPIProductItemWithARDict.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface IGAREffectAttributionStoryViewModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *attributionUserID;
@property (readonly, copy, nonatomic) NSString *attributionUsername;
@property (readonly, copy, nonatomic) NSString *effectID;
@property (readonly, copy, nonatomic) NSString *effectName;
@property (readonly, copy, nonatomic) NSString *effectThumbnailURL;
@property (readonly, copy, nonatomic) IGAPIProductItemWithARDict *effectProduct;
@property (readonly, copy, nonatomic) NSString *failureReason;
@property (readonly, copy, nonatomic) NSString *formatModelTitle;
@property (readonly, copy, nonatomic) NSArray *primaryActions;
@property (readonly, copy, nonatomic) NSArray *secondaryActions;
@property (readonly, nonatomic) BOOL shouldShowSwitcherModeAttribution;
@property (readonly, nonatomic) long long preferredCameraFacingPosition;
@property (readonly, nonatomic) long long switcherMode;
@property (readonly, copy, nonatomic) NSDictionary *effectPersistedMetadata;
@property (readonly, nonatomic) unsigned long long saveState;
@property (readonly, nonatomic) BOOL isAgeRestricted;

/* instance methods */
- (id)initWithAttributionUserID:(id)id attributionUsername:(id)username effectID:(id)id effectName:(id)name effectThumbnailURL:(id)url effectProduct:(id)product failureReason:(id)reason formatModelTitle:(id)title primaryActions:(id)actions secondaryActions:(id)actions shouldShowSwitcherModeAttribution:(BOOL)attribution preferredCameraFacingPosition:(long long)position switcherMode:(long long)mode effectPersistedMetadata:(id)metadata saveState:(unsigned long long)state isAgeRestricted:(BOOL)restricted;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGAREffectAttributionStoryViewModel_h */
