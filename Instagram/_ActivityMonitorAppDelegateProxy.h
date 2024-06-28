//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _ActivityMonitorAppDelegateProxy_h
#define _ActivityMonitorAppDelegateProxy_h
@import Foundation;

#include "NSProxy.h"
#include "UIApplicationDelegate-Protocol.h"

@class NSString, UIWindow;

@interface _ActivityMonitorAppDelegateProxy : NSProxy<UIApplicationDelegate> {
  /* instance variables */
  struct { unsigned int x :1 willFinishLaunching; unsigned int x :1 didFinishLaunching; unsigned int x :1 didBecomeActive; unsigned int x :1 willResignActive; unsigned int x :1 willEnterForeground; unsigned int x :1 didEnterBackground; unsigned int x :1 willTerminate; unsigned int x :1 didReceiveMemoryWarning; } _respondsToFlags;
}

@property (retain, nonatomic) NSObject<UIApplicationDelegate> *delegate;
@optional
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)respondsToSelector:(SEL)selector;
- (BOOL)isProxy;
- (id)forwardingTargetForSelector:(SEL)selector;
- (BOOL)isKindOfClass:(Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
- (BOOL)isMemberOfClass:(Class)class;
- (void)forwardInvocation:(id)invocation;
- (id)methodSignatureForSelector:(SEL)selector;
- (BOOL)application:(id)application willFinishLaunchingWithOptions:(id)options;
- (BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
- (void)applicationDidBecomeActive:(id)active;
- (void)applicationWillResignActive:(id)active;
- (void)applicationWillEnterForeground:(id)foreground;
- (void)applicationDidEnterBackground:(id)background;
- (void)applicationDidReceiveMemoryWarning:(id)warning;
- (void)applicationWillTerminate:(id)terminate;
@end

#endif /* _ActivityMonitorAppDelegateProxy_h */