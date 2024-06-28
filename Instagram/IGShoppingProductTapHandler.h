//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingProductTapHandler_h
#define IGShoppingProductTapHandler_h
@import Foundation;

@class IGSessionTracker, IGUserSession, NSString, UIViewController;
@protocol IGShoppingProductTapHandlerDelegate;

@interface IGShoppingProductTapHandler : NSObject {
  /* instance variables */
  BOOL _didStartProductAppealsBloksSurface;
  NSString *_feedAnalyticsModule;
}

@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) NSString *entryPoint;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;
@property (weak, nonatomic) NSObject<IGShoppingProductTapHandlerDelegate> *delegate;

/* instance methods */
- (id)initWithViewController:(id)controller entryPoint:(id)point feedAnalyticsModule:(id)module userSession:(id)session shoppingSessionTracker:(id)tracker;
- (void)dealloc;
@end

#endif /* IGShoppingProductTapHandler_h */
