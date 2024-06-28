//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCreatorToolsProCategorySelectionIntentTarget_h
#define IGCreatorToolsProCategorySelectionIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class IGBusinessConversionPrepareService, IGProConversionCategoriesPreloader, NSString;
@protocol IGInterestAccountLoggingProviding, IGProCategorySelectionViewControllerDelegate;

@interface IGCreatorToolsProCategorySelectionIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSObject<IGProCategorySelectionViewControllerDelegate> *delegate;
@property (readonly, nonatomic) NSObject<IGInterestAccountLoggingProviding> *loggingProvider;
@property (readonly, nonatomic) IGProConversionCategoriesPreloader *categoryPreloader;
@property (readonly, nonatomic) IGBusinessConversionPrepareService *quickConversionSettingPrepareService;
@property (readonly, nonatomic) long long preFillCategoryAccountType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate loggingProvider:(id)provider categoryPreloader:(id)preloader quickConversionSettingPrepareService:(id)service preFillCategoryAccountType:(long long)type;
@end

#endif /* IGCreatorToolsProCategorySelectionIntentTarget_h */