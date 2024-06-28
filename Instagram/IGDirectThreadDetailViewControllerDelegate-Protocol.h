//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadDetailViewControllerDelegate_Protocol_h
#define IGDirectThreadDetailViewControllerDelegate_Protocol_h
@import Foundation;

@protocol IGDirectThreadDetailViewControllerDelegate <NSObject>
/* instance methods */
- (void)threadDetailViewControllerDidLeaveThread:(id)thread;
- (void)threadDetailViewControllerDidRenameThread:(id)thread;
- (void)threadDetailViewControllerDidDismissThread:(id)thread;
- (void)threadDetailViewControllerDidCreateaNewXACThread:(id)xacthread didCreateThread:(id)thread;
- (void)threadDetailViewControllerDidEndThread:(id)thread;
@end

#endif /* IGDirectThreadDetailViewControllerDelegate_Protocol_h */