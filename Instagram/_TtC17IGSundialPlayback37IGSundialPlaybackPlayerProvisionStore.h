//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGSundialPlayback37IGSundialPlaybackPlayerProvisionStore_h
#define _TtC17IGSundialPlayback37IGSundialPlaybackPlayerProvisionStore_h
@import Foundation;

@interface _TtC17IGSundialPlayback37IGSundialPlaybackPlayerProvisionStore : NSObject { // (Swift)
  /* instance variables */
   sponsoredPlayerStore;
   organicPlayerStore;
}

/* instance methods */
- (id)playerProviderFor:(id)for isSponsored:(BOOL)sponsored videoPlayerManager:(id)manager userSession:(id)session;
- (void)performOrganicPlayerStoreEviction;
- (void)performSponsoredPlayerStoreEviction;
- (id)init;
@end

#endif /* _TtC17IGSundialPlayback37IGSundialPlaybackPlayerProvisionStore_h */
