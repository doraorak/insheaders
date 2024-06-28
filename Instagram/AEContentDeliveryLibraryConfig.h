//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AEContentDeliveryLibraryConfig_h
#define AEContentDeliveryLibraryConfig_h
@import Foundation;

#include "AEEmbodimentQualityConfig.h"

@class NSNumber, NSString;
@protocol AEEmbodimentCDLConfig;

@interface AEContentDeliveryLibraryConfig : NSObject

@property (readonly, nonatomic) NSObject<AEEmbodimentCDLConfig> *mobileConfig;
@property (readonly, nonatomic) NSString *cdlProfileName;
@property (readonly, nonatomic) NSString *cdlDeliverySpecId;
@property (readonly, nonatomic) BOOL shouldRenderUsingLegacyAssets;
@property (readonly, nonatomic) NSString *avatarRevisionId;
@property (readonly, nonatomic) AEEmbodimentQualityConfig *qualityConfig;
@property (readonly, nonatomic) NSNumber *aleFeatureLevel;
@property (readonly, nonatomic) BOOL shouldUseBloksProvidedMemoryConfig;
@property (readonly, nonatomic) BOOL useLowNetworkPriorityBehavior;

/* instance methods */
- (id)initWithMobileConfig:(id)config cdlProfileName:(id)name cdlDeliverySpecId:(id)id shouldRenderUsingLegacyAssets:(BOOL)assets avatarRevisionId:(id)id qualityConfig:(id)config aleFeatureLevel:(id)level shouldUseBloksProvidedMemoryConfig:(BOOL)config useLowNetworkPriorityBehavior:(BOOL)behavior;
@end

#endif /* AEContentDeliveryLibraryConfig_h */
