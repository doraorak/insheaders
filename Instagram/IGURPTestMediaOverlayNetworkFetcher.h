//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGURPTestMediaOverlayNetworkFetcher_h
#define IGURPTestMediaOverlayNetworkFetcher_h
@import Foundation;

#include "_TtP23ShowreelSwiftExtensions30URPMediaOverlayNetworkFetching_-Protocol.h"

@class IGUserSession;

@interface IGURPTestMediaOverlayNetworkFetcher : NSObject<_TtP23ShowreelSwiftExtensions30URPMediaOverlayNetworkFetching_> {
  /* instance variables */
  IGUserSession *_userSession;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)fetchWithOverlayType:(id)type onError:(id /* block */)error onSuccess:(id /* block */)success;
@end

#endif /* IGURPTestMediaOverlayNetworkFetcher_h */
