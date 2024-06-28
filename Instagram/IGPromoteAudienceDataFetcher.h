//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteAudienceDataFetcher_h
#define IGPromoteAudienceDataFetcher_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface IGPromoteAudienceDataFetcher : NSObject<NSObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)fetchAudienceDataWithMediaId:(id)id flowID:(id)id regulatedCategories:(id)categories userSession:(id)session canUseBusinessUser:(BOOL)user destinationType:(long long)type paginationCursor:(long long)cursor paginationCount:(long long)count successBlock:(id /* block */)block failureBlock:(id /* block */)block;
+ (void)fetchCreateAudienceScreenWithMediaId:(id)id flowID:(id)id regulatedCategories:(id)categories destinationType:(long long)type userSession:(id)session canUseBusinessUser:(BOOL)user successBlock:(id /* block */)block failureBlock:(id /* block */)block;
+ (void)fetchEditAudienceScreenWithAudienceId:(id)id flowID:(id)id audienceType:(id)type destinationType:(long long)type userSession:(id)session canUseBusinessUser:(BOOL)user successBlock:(id /* block */)block failureBlock:(id /* block */)block;
+ (void)fetchPrimaryAudienceDataWithFlowID:(id)id userSession:(id)session canUseBusinessUser:(BOOL)user successBlock:(id /* block */)block failureBlock:(id /* block */)block;
+ (void)fetchInferredAudienceDataWithFlowID:(id)id userSession:(id)session canUseBusinessUser:(BOOL)user successBlock:(id /* block */)block failureBlock:(id /* block */)block;
+ (void)fetchAllUnifiedAudienceDataWithFlowID:(id)id userSession:(id)session canUseBusinessUser:(BOOL)user successBlock:(id /* block */)block failureBlock:(id /* block */)block;
+ (void)postEditAudienceWithAudienceId:(id)id audienceName:(id)name flowID:(id)id genders:(id)genders minAge:(id)age maxAge:(id)age hashtagIds:(id)ids interestIds:(id)ids cityKeys:(id)keys countries:(id)countries regionKeys:(id)keys zipKeys:(id)keys latitude:(id)latitude longitude:(id)longitude radius:(id)radius address:(id)address targetRelaxOption:(id)option userSession:(id)session canUseBusinessUser:(BOOL)user successBlock:(id /* block */)block failureBlock:(id /* block */)block;
+ (void)postCreateAudienceWithFlowID:(id)id AudienceName:(id)name genders:(id)genders minAge:(id)age maxAge:(id)age hashtagIds:(id)ids interestIds:(id)ids cityKeys:(id)keys countries:(id)countries regionKeys:(id)keys zipKeys:(id)keys latitude:(id)latitude longitude:(id)longitude radius:(id)radius address:(id)address targetRelaxOption:(id)option userSession:(id)session canUseBusinessUser:(BOOL)user successBlock:(id /* block */)block failureBlock:(id /* block */)block;
+ (void)postUpdateAutoAudienceGeoLocationWithFlowID:(id)id cityKeys:(id)keys countries:(id)countries regionKeys:(id)keys zipKeys:(id)keys latitude:(id)latitude longitude:(id)longitude radius:(id)radius address:(id)address userSession:(id)session canUseBusinessUser:(BOOL)user successBlock:(id /* block */)block failureBlock:(id /* block */)block;
+ (void)postCreateUnifiedAudienceWithAudienceName:(id)name flowID:(id)id minAge:(id)age maxAge:(id)age gender:(long long)gender interestIds:(id)ids locationExpansionType:(long long)type geolocations:(id)geolocations userSession:(id)session canUseBusinessUser:(BOOL)user logger:(id)logger successBlock:(id /* block */)block failureBlock:(id /* block */)block;
+ (void)postEditUnifiedAudienceWithAudienceId:(id)id audienceName:(id)name flowID:(id)id minAge:(id)age maxAge:(id)age gender:(long long)gender interestIds:(id)ids locationExpansionType:(long long)type geolocations:(id)geolocations userSession:(id)session canUseBusinessUser:(BOOL)user logger:(id)logger successBlock:(id /* block */)block failureBlock:(id /* block */)block;
+ (void)postEditInferredAudienceWithAudienceId:(id)id flowID:(id)id locationExpansionType:(long long)type geolocations:(id)geolocations userSession:(id)session canUseBusinessUser:(BOOL)user logger:(id)logger successBlock:(id /* block */)block failureBlock:(id /* block */)block;
+ (void)postDeleteUnifiedAudienceWithAudienceId:(id)id flowID:(id)id userSession:(id)session canUseBusinessUser:(BOOL)user successBlock:(id /* block */)block failureBlock:(id /* block */)block;
@end

#endif /* IGPromoteAudienceDataFetcher_h */