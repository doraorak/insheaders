//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPartnershipLabelAdsIntentTarget_h
#define IGPartnershipLabelAdsIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGBCMediaAdapter.h"
#include "IGBrandedContentDisclosurePresenterDelegate-Protocol.h"

@class NSString;

@interface IGPartnershipLabelAdsIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) unsigned long long entryPoint;
@property (readonly, nonatomic) IGBCMediaAdapter *bcMedia;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) NSString *priorModule;
@property (readonly, nonatomic) unsigned long long presentationMethod;
@property (readonly, nonatomic) BOOL areProjectsAvailable;
@property (readonly, nonatomic) NSObject<IGBrandedContentDisclosurePresenterDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEntryPoint:(unsigned long long)point bcMedia:(id)media mediaType:(long long)type priorModule:(id)module presentationMethod:(unsigned long long)method areProjectsAvailable:(BOOL)available delegate:(id)delegate;
@end

#endif /* IGPartnershipLabelAdsIntentTarget_h */
