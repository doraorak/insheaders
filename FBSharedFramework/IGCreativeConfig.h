//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCreativeConfig_h
#define IGCreativeConfig_h
@import Foundation;

#include "FBValueObject.h"
#include "IGAPIProductItemWithARDict.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface IGCreativeConfig : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *effectID;
@property (readonly, copy, nonatomic) NSString *effectName;
@property (readonly, copy, nonatomic) NSString *effectIconURL;
@property (readonly, copy, nonatomic) NSDictionary *effectPersistedMetadata;
@property (readonly, copy, nonatomic) IGAPIProductItemWithARDict *effectProduct;
@property (readonly, copy, nonatomic) NSArray *primaryActions;
@property (readonly, copy, nonatomic) NSArray *secondaryActions;
@property (readonly, copy, nonatomic) NSString *attributionID;
@property (readonly, copy, nonatomic) NSString *attributionUsername;
@property (readonly, copy, nonatomic) NSString *failureReason;
@property (readonly, copy, nonatomic) NSString *captureType;
@property (readonly, nonatomic) long long preferredCameraFacingPosition;
@property (readonly, nonatomic) unsigned long long saveState;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, copy, nonatomic) NSArray *effectConfigs;
@property (readonly, copy, nonatomic) NSArray *creationToolInfo;
@property (readonly, nonatomic) BOOL isAgeRestricted;
@property (readonly, copy, nonatomic) NSArray *genAiToolInfo;
@property (readonly, copy, nonatomic) NSString *formatVariant;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithEffectID:(id)id effectName:(id)name effectIconURL:(id)url effectPersistedMetadata:(id)metadata effectProduct:(id)product primaryActions:(id)actions secondaryActions:(id)actions attributionID:(id)id attributionUsername:(id)username failureReason:(id)reason captureType:(id)type preferredCameraFacingPosition:(long long)position saveState:(unsigned long long)state actions:(id)actions effectConfigs:(id)configs creationToolInfo:(id)info isAgeRestricted:(BOOL)restricted genAiToolInfo:(id)info formatVariant:(id)variant;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGCreativeConfig_h */