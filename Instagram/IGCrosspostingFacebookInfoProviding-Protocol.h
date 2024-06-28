//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCrosspostingFacebookInfoProviding_Protocol_h
#define IGCrosspostingFacebookInfoProviding_Protocol_h
@import Foundation;

@protocol IGCrosspostingFacebookInfoProviding <NSObject>

@property (nonatomic, readonly) IGCrosspostingFacebookInfo *crosspostingFacebookInfo_DEPRECATED;
@property (nonatomic, readonly) NSString *pageID;
@property (nonatomic, readonly) BOOL canCrossPostWithoutFBToken;

/* instance methods */
- (void)updateCrosspostingFacebookLinkageInfo_DEPRECATED:(id)deprecated;
@end

#endif /* IGCrosspostingFacebookInfoProviding_Protocol_h */