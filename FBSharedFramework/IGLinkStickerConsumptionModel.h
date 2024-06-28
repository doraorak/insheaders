//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLinkStickerConsumptionModel_h
#define IGLinkStickerConsumptionModel_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSString;

@interface IGLinkStickerConsumptionModel : NSObject<NSCoding>

@property (readonly, nonatomic) NSString *linkType;
@property (readonly, nonatomic) NSString *customCTA;
@property (readonly, nonatomic) NSString *clickID;
@property (readonly, nonatomic) NSString *displayURL;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) long long tapState;
@property (readonly, nonatomic) NSString *tapStateId;
@property (readonly, nonatomic) BOOL isUniversalLink;
@property (nonatomic) BOOL shouldReadCreatorDynamicDwellEnabled;
@property (nonatomic) BOOL isDynamicDwellEnabled;
@property (nonatomic) BOOL shouldShowLinkStickerTooltip;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
- (id)initWithLinkType:(id)type customCTA:(id)cta clickID:(id)id displayURL:(id)url url:(id)url tapState:(long long)state tapStateId:(id)id isUniversalLink:(BOOL)link shouldReadCreatorDynamicDwellEnabled:(BOOL)enabled isDynamicDwellEnabled:(BOOL)enabled shouldShowLinkStickerTooltip:(BOOL)tooltip;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGLinkStickerConsumptionModel_h */