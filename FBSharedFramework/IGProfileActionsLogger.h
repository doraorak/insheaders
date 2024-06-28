//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileActionsLogger_h
#define IGProfileActionsLogger_h
@import Foundation;

@interface IGProfileActionsLogger : NSObject
/* class methods */
+ (void)logProfileAction:(id)action forProfile:(id)profile isSelfProfile:(BOOL)profile clickPoint:(id)point module:(id)module navState:(id)state mediaAttribution:(id)attribution trackingToken:(id)token sourceMediaRankingInfoToken:(id)token userSession:(id)session;
+ (void)logProfileAction:(id)action user:(id)user isSelfProfile:(BOOL)profile clickPoint:(id)point module:(id)module navState:(id)state followStatus:(long long)status mediaAttribution:(id)attribution trackingToken:(id)token sourceMediaRankingInfoToken:(id)token userSession:(id)session;
+ (void)logProfileAction:(id)action user:(id)user isSelfProfile:(BOOL)profile clickPoint:(id)point module:(id)module navState:(id)state followStatus:(long long)status mediaAttribution:(id)attribution trackingToken:(id)token userSession:(id)session;
+ (void)logProfileAction:(id)action user:(id)user isSelfProfile:(BOOL)profile clickPoint:(id)point module:(id)module navState:(id)state productID:(id)id userSession:(id)session;
+ (void)logProfileAction:(id)action user:(id)user isSelfProfile:(BOOL)profile followStatus:(long long)status clickPoint:(id)point module:(id)module navState:(id)state productID:(id)id productCollectionType:(id)type userSession:(id)session;
+ (void)logProfileAction:(id)action user:(id)user isSelfProfile:(BOOL)profile clickPoint:(id)point module:(id)module navState:(id)state productCollectionType:(id)type userSession:(id)session;
+ (void)logProfileAction:(id)action user:(id)user isSelfProfile:(BOOL)profile clickPoint:(id)point module:(id)module directThreadInfo:(id)info requestID:(id)id userSession:(id)session;
+ (void)logProfileAction:(id)action forProfile:(id)profile isSelfProfile:(BOOL)profile clickPoint:(id)point module:(id)module navState:(id)state mediaAttribution:(id)attribution trackingToken:(id)token userSession:(id)session tabPosition:(id)position subscribedStatus:(long long)status startingClipsMediaId:(id)id startingClipsMediaRankingToken:(id)token sourceMediaRankingInfoToken:(id)token timeOnProfile:(long long)profile highlightReelId:(id)id highlightHasSeenStateRing:(BOOL)ring highlightCoverSize:(id)size;
+ (void)logProfileAction:(id)action user:(id)user isSelfProfile:(BOOL)profile clickPoint:(id)point module:(id)module userSession:(id)session badgeNumNotifs:(long long)notifs;
+ (void)_logProfileAction:(id)action isSelfProfile:(BOOL)profile profileUserId:(struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; })id profileUserType:(struct optional<StructuredLogger::IguserinteropusertypeEnum> { union { char x0; long long x1; } x0; BOOL x1; })type clickPoint:(id)point module:(id)module navState:(id)state followStatus:(long long)status mediaAttribution:(id)attribution trackingToken:(id)token productID:(id)id directThreadID:(id)id requestID:(id)id productCollectionType:(id)type userSession:(id)session source:(unsigned long long)source sourceType:(unsigned long long)type clientPosition:(struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; })position subscribedStatus:(id)status startingClipsMediaId:(id)id startingClipsMediaRankingToken:(id)token sourceMediaRankingInfoToken:(id)token timeOnProfile:(long long)profile highlightReelId:(id)id highlightHasSeenStateRing:(BOOL)ring badgeNumNotifs:(long long)notifs highlightCoverSize:(id)size numBanners:(long long)banners;
+ (void)logProfileAction:(id)action userSession:(id)session clickPoint:(id)point module:(id)module numBanners:(long long)banners;
@end

#endif /* IGProfileActionsLogger_h */