//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBVideoAutoImpressionUpdateListener_Protocol_h
#define FBVideoAutoImpressionUpdateListener_Protocol_h
@import Foundation;

@protocol FBVideoAutoImpressionUpdateListener <NSObject>
/* instance methods */
- (BOOL)shouldUpdateFromContextProvider:(id)provider;
- (void)didEnterVideoView:(id)view withPercent:(double)percent impressionLogContext:(id)context videoLogContext:(id)context;
- (void)didUpdateVideoView:(id)view withPercent:(double)percent impressionLogContext:(id)context videoLogContext:(id)context;
- (void)didExitVideoView:(id)view impressionLogContext:(id)context videoLogContext:(id)context;
@end

#endif /* FBVideoAutoImpressionUpdateListener_Protocol_h */
