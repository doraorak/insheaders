//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIOSLinkIntentTarget_h
#define IGIOSLinkIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGDirectResponseLogging-Protocol.h"

@class FBWeakObjectContainer, IGAdItem, IGSponsoredSupportConfiguration, NSString, UIViewController;

@interface IGIOSLinkIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) UIViewController *hostViewController;
@property (readonly, nonatomic) FBWeakObjectContainer *ctaLinkHandlerDelegate;
@property (readonly, nonatomic) IGAdItem *adItem;
@property (readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration;
@property (readonly, nonatomic) NSObject<IGDirectResponseLogging> *ctaLogger;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHostViewController:(id)controller ctaLinkHandlerDelegate:(id)delegate adItem:(id)item sponsoredSupportConfiguration:(id)configuration ctaLogger:(id)logger analyticsModule:(id)module;
@end

#endif /* IGIOSLinkIntentTarget_h */