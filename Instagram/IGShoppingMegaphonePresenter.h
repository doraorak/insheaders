//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingMegaphonePresenter_h
#define IGShoppingMegaphonePresenter_h
@import Foundation;

#include "IGGenericMegaphoneLogger-Protocol.h"
#include "IGMegaphonePresenterProtocol-Protocol.h"

@class IGGenericMegaphone, IGUserSession, NSString, UIView;
@protocol IGMegaphonePresenterDelegate;

@interface IGShoppingMegaphonePresenter : NSObject<IGMegaphonePresenterProtocol> {
  /* instance variables */
  NSString *_module;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) IGGenericMegaphone *megaphone;
@property (readonly, nonatomic) NSObject<IGGenericMegaphoneLogger> *logger;
@property (weak, nonatomic) NSObject<IGMegaphonePresenterDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *viewForMegaphone;

/* class methods */
+ (BOOL)canPresentMegaphone:(id)megaphone context:(id)context;

/* instance methods */
- (id)initWithMegaphone:(id)megaphone context:(id)context;
- (id)initWithMegaphone:(id)megaphone logger:(id)logger userSession:(id)session module:(id)module;
- (void)logMegaphoneSeen;
- (void)megaphoneViewDidDismiss:(id)dismiss;
- (void)megaphoneView:(id)view didSelectButton:(id)button;
- (void)megaphoneViewNeedsResize:(id)resize;
@end

#endif /* IGShoppingMegaphonePresenter_h */