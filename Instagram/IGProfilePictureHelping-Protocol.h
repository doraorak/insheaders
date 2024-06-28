//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfilePictureHelping_Protocol_h
#define IGProfilePictureHelping_Protocol_h
@import Foundation;

@protocol IGProfilePictureHelping <NSObject>

@property (nonatomic, weak) NSObject<IGProfilePictureHelperDelegate> *delegate;

/* instance methods */
- (void)showActionSheetWithMode:(long long)mode hasAnonymousProfilePicture:(BOOL)picture entryPoint:(long long)point initialTab:(long long)tab isIGNUXScreen:(BOOL)ignuxscreen isMsysThread:(BOOL)thread threadId:(id)id;
- (void)showActionSheetWithMode:(long long)mode hasAnonymousProfilePicture:(BOOL)picture entryPoint:(long long)point initialTab:(long long)tab isIGNUXScreen:(BOOL)ignuxscreen isMsysThread:(BOOL)thread threadId:(id)id;
@end

#endif /* IGProfilePictureHelping_Protocol_h */