//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchOriginControllerProtocol_Protocol_h
#define IGSearchOriginControllerProtocol_Protocol_h
@import Foundation;

@protocol IGSearchOriginControllerProtocol <NSObject>
/* instance methods */
- (void)showSearchControllerAnimated:(BOOL)animated;
- (void)dismissSearchControllerAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)refreshSearch:(BOOL)search;
- (BOOL)isSearchShowing;
- (void)showDiscoveryMapAnimated:(BOOL)animated;
@end

#endif /* IGSearchOriginControllerProtocol_Protocol_h */