//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UINavigationBarDelegate_Protocol_h
#define UINavigationBarDelegate_Protocol_h
@import Foundation;

@protocol UINavigationBarDelegate <UIBarPositioningDelegate>
@optional
/* instance methods */
- (BOOL)navigationBar:(id)bar shouldPushItem:(id)item;
- (void)navigationBar:(id)bar didPushItem:(id)item;
- (BOOL)navigationBar:(id)bar shouldPopItem:(id)item;
- (void)navigationBar:(id)bar didPopItem:(id)item;
- (long long)navigationBarNSToolbarSection:(id)section;
@end

#endif /* UINavigationBarDelegate_Protocol_h */