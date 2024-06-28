//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileIntentTarget_h
#define IGProfileIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGSessionTracker.h"
#include "IGUserDetailConfiguration.h"

@class IGCTAPresenterContext, NSString, UIBarButtonItem;

@interface IGProfileIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGUserDetailConfiguration *configuration;
@property (readonly, nonatomic) IGCTAPresenterContext *ctaPresenterContextVCProviding;
@property (readonly, nonatomic) BOOL isMainProfileSurface;
@property (readonly, nonatomic) UIBarButtonItem *leftBarButtonItem;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration ctaPresenterContextVCProviding:(id)vcproviding isMainProfileSurface:(BOOL)surface leftBarButtonItem:(id)item presentationStyle:(long long)style shoppingSessionTracker:(id)tracker;
@end

#endif /* IGProfileIntentTarget_h */
