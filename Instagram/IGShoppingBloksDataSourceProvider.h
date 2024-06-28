//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingBloksDataSourceProvider_h
#define IGShoppingBloksDataSourceProvider_h
@import Foundation;

#include "NSObject-Protocol.h"

@class BKBloksHostingView, IGUserSession, NSDictionary, NSString, UIViewController;
@protocol IGShoppingBloksDataSourceProviderDelegate;

@interface IGShoppingBloksDataSourceProvider : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_bloksAppID;
  NSDictionary *_bloksParams;
  UIViewController *_viewController;
  BKBloksHostingView *_bloksView;
  long long _inflightRequests;
}

@property (weak, nonatomic) NSObject<IGShoppingBloksDataSourceProviderDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session bloksAppID:(id)id bloksParams:(id)params viewController:(id)controller;
- (void)bloksHostingViewDidInvalidateSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* IGShoppingBloksDataSourceProvider_h */