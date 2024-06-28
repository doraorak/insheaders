//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC23ShowreelSwiftExtensions43URPMediaInteractivityNetworkPayloadProvider_h
#define _TtC23ShowreelSwiftExtensions43URPMediaInteractivityNetworkPayloadProvider_h
@import Foundation;

#include "_TtP23ShowreelSwiftExtensions37URPMediaInteractivityPayloadProviding_-Protocol.h"

@interface _TtC23ShowreelSwiftExtensions43URPMediaInteractivityNetworkPayloadProvider : NSObject<_TtP23ShowreelSwiftExtensions37URPMediaInteractivityPayloadProviding_> { // (Swift)
  /* instance variables */
   overlayFetcher;
   overlayType;
}

/* instance methods */
- (id)initWithOverlayFetcher:(id)fetcher overlayType:(id)type;
- (void)provideInteractivityPayloadOnCompletion:(id /* block */)completion;
- (id)init;
@end

#endif /* _TtC23ShowreelSwiftExtensions43URPMediaInteractivityNetworkPayloadProvider_h */