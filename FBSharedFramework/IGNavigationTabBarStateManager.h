//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNavigationTabBarStateManager_h
#define IGNavigationTabBarStateManager_h
@import Foundation;

@class NSMapTable, UIViewController;
@protocol IGNavigationTabBarStateContextProvider;

@interface IGNavigationTabBarStateManager : NSObject {
  /* instance variables */
  NSObject<IGNavigationTabBarStateContextProvider> *_contextProvider;
  UIViewController *_topViewController;
  NSMapTable *_viewControllerAttributeMap;
}

/* instance methods */
- (id)initWithContextProvider:(id)provider;
@end

#endif /* IGNavigationTabBarStateManager_h */
