//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryPostCaptureLinksIntentTarget_h
#define IGStoryPostCaptureLinksIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGAPIBrandedContentProjectMetadata.h"
#include "IGIOSLink.h"
#include "IGShoppingStoryCreationContext.h"
#include "IGStoryMediaCompositionState.h"

@class NSOrderedSet, NSString, UIImage;
@protocol IGAddPartnerInStoryWebLinksCreationViewControllerDelegate, IGAudienceRestrictionsStoryLinkCreationViewControllerDelegate, IGStoryLinkCreationViewControllerDelegate;

@interface IGStoryPostCaptureLinksIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) BOOL storyBusinessTransactionLinksEnabled;
@property (readonly, nonatomic) BOOL storyContainsUnsupportedInteractiveElements;
@property (readonly, nonatomic) BOOL storyMultiProductTaggingEnabled;
@property (readonly, nonatomic) long long storyMaxNumMultiProductTags;
@property (readonly, nonatomic) NSOrderedSet *sponsorPartnerOrderedSet;
@property (readonly, nonatomic) BOOL isPaidPartnership;
@property (readonly, nonatomic) IGAPIBrandedContentProjectMetadata *brandedContentProject;
@property (readonly, nonatomic) NSString *mediaId;
@property (readonly, nonatomic) IGIOSLink *storyLink;
@property (readonly, nonatomic) IGShoppingStoryCreationContext *shoppingStoryCreationContext;
@property (readonly, nonatomic) UIImage *storyScreenshot;
@property (readonly, nonatomic) BOOL presentAddPartnerFlowAfterAppearing;
@property (readonly, nonatomic) IGStoryMediaCompositionState *mediaCompositionState;
@property (readonly, nonatomic) NSObject<IGStoryLinkCreationViewControllerDelegate> *delegate;
@property (readonly, nonatomic) NSObject<IGAddPartnerInStoryWebLinksCreationViewControllerDelegate> *addPartnerDelegate;
@property (readonly, nonatomic) NSObject<IGAudienceRestrictionsStoryLinkCreationViewControllerDelegate> *audienceRestrictionsDelegate;
@property (readonly, nonatomic) NSString *priorModule;
@property (readonly, nonatomic) BOOL isBoostStoryModeAvailable;
@property (readonly, nonatomic) BOOL isBoostStoryModeEnabled;
@property (readonly, nonatomic) BOOL isAdCodeToggleOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMode:(unsigned long long)mode storyBusinessTransactionLinksEnabled:(BOOL)enabled storyContainsUnsupportedInteractiveElements:(BOOL)elements storyMultiProductTaggingEnabled:(BOOL)enabled storyMaxNumMultiProductTags:(long long)tags sponsorPartnerOrderedSet:(id)set isPaidPartnership:(BOOL)partnership brandedContentProject:(id)project mediaId:(id)id storyLink:(id)link shoppingStoryCreationContext:(id)context storyScreenshot:(id)screenshot presentAddPartnerFlowAfterAppearing:(BOOL)appearing mediaCompositionState:(id)state delegate:(id)delegate addPartnerDelegate:(id)delegate audienceRestrictionsDelegate:(id)delegate priorModule:(id)module isBoostStoryModeAvailable:(BOOL)available isBoostStoryModeEnabled:(BOOL)enabled isAdCodeToggleOn:(BOOL)on;
@end

#endif /* IGStoryPostCaptureLinksIntentTarget_h */