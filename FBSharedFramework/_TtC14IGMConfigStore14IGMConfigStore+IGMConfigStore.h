//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC14IGMConfigStore14IGMConfigStore_IGMConfigStore_h
#define _TtC14IGMConfigStore14IGMConfigStore_IGMConfigStore_h
@import Foundation;

@interface _TtC14IGMConfigStore14IGMConfigStore (IGMConfigStore)
/* instance methods */
- (void)getViperConfigWithForceSync:(BOOL)sync completionHandler:(id /* block */)handler;
- (void)getGNVConfigWithForceSync:(BOOL)sync completionHandler:(id /* block */)handler;
@end

#endif /* _TtC14IGMConfigStore14IGMConfigStore_IGMConfigStore_h */