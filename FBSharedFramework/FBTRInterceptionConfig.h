//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBTRInterceptionConfig_h
#define FBTRInterceptionConfig_h
@import Foundation;

@interface FBTRInterceptionConfig : NSObject

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL useWebViewForTrInterceptionRequest;
@property (readonly, nonatomic) BOOL preferBeacon;
@property (readonly, nonatomic) BOOL interceptAll;
@property (readonly, nonatomic) BOOL interceptImgSrc;
@property (readonly, nonatomic) BOOL interceptInnerHTML;
@property (readonly, nonatomic) BOOL interceptDocumentWrite;
@property (readonly, nonatomic) BOOL interceptSendBeacon;

/* class methods */
+ (id)newWithEnabled:(BOOL)enabled useWebViewForTrInterceptionRequest:(BOOL)request preferBeacon:(BOOL)beacon interceptAll:(BOOL)all interceptImgSrc:(BOOL)src interceptInnerHTML:(BOOL)html interceptDocumentWrite:(BOOL)write interceptSendBeacon:(BOOL)beacon;
@end

#endif /* FBTRInterceptionConfig_h */