//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentModerationReactModule_h
#define IGCommentModerationReactModule_h
@import Foundation;

#include "NativeIGCommentModerationReactModuleSpec-Protocol.h"
#include "RCTBridge.h"
#include "RCTBundleManager.h"
#include "RCTCallableJSModules.h"
#include "RCTIGUserSessionModule-Protocol.h"
#include "RCTModuleRegistry.h"
#include "RCTViewRegistry.h"

@class IGUserSession, NSString;
@protocol OS_dispatch_queue;

@interface IGCommentModerationReactModule : NSObject<NativeIGCommentModerationReactModuleSpec, RCTIGUserSessionModule>

@optional
@property (weak, nonatomic) RCTModuleRegistry *moduleRegistry;
@optional
@property (weak, nonatomic) RCTViewRegistry *viewRegistry_DEPRECATED;
@optional
@property (weak, nonatomic) RCTBundleManager *bundleManager;
@optional
@property (weak, nonatomic) RCTCallableJSModules *callableJSModules;
@optional
@property (readonly, weak, nonatomic) RCTBridge *bridge;
@optional
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IGUserSession *userSession;

/* class methods */
+ (id)moduleName;
+ (void)load;
+ (const struct RCTMethodInfo *)__rct_export__280;
+ (const struct RCTMethodInfo *)__rct_export__451;
+ (const struct RCTMethodInfo *)__rct_export__652;
+ (const struct RCTMethodInfo *)__rct_export__853;
+ (const struct RCTMethodInfo *)__rct_export__1054;
+ (const struct RCTMethodInfo *)__rct_export__1265;
+ (const struct RCTMethodInfo *)__rct_export__1576;
+ (const struct RCTMethodInfo *)__rct_export__1807;
+ (const struct RCTMethodInfo *)__rct_export__1948;
+ (const struct RCTMethodInfo *)__rct_export__2079;
+ (const struct RCTMethodInfo *)__rct_export__22110;
+ (const struct RCTMethodInfo *)__rct_export__23111;
+ (const struct RCTMethodInfo *)__rct_export__25112;

/* instance methods */
- (void)fetchBlockedCommenters:(id /* block */)commenters reject:(id /* block */)reject;
- (void)fetchCommentAudienceControlType:(id /* block */)type reject:(id /* block */)reject;
- (void)fetchCommentFilter:(id /* block */)filter reject:(id /* block */)reject;
- (void)fetchCommentFilterKeywords:(id /* block */)keywords reject:(id /* block */)reject;
- (void)fetchCurrentUser:(id /* block */)user reject:(id /* block */)reject;
- (void)setCommentAudienceControlType:(id)type resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)setBlockedCommenters:(id)commenters resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)openCommenterBlockingViewControllerWithReactTag:(double)tag blockedCommentersData:(id)data callback:(id /* block */)callback;
- (void)setUseDefaultKeywords:(BOOL)keywords resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)setCustomKeywords:(id)keywords resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)setCustomKeywordsWithDisabled:(id)disabled manualFilterDisabled:(BOOL)disabled resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (void)fetchCommentCategoryFilterDisabled:(id /* block */)disabled reject:(id /* block */)reject;
- (void)setCommentCategoryFilterDisabled:(BOOL)disabled resolve:(id /* block */)resolve reject:(id /* block */)reject;
- (struct shared_ptr<facebook::react::TurboModule> { struct TurboModule * x0; struct __shared_weak_count * x1; })getTurboModule:(const void *)module;
@end

#endif /* IGCommentModerationReactModule_h */