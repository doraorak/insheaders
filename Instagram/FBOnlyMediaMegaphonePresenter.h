//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBOnlyMediaMegaphonePresenter_h
#define FBOnlyMediaMegaphonePresenter_h
@import Foundation;

#include "IGMegaphonePresenterProtocol-Protocol.h"

@class IGGenericMegaphone, NSString, UIView;
@protocol IGMegaphonePresenterDelegate;

@interface FBOnlyMediaMegaphonePresenter : NSObject<IGMegaphonePresenterProtocol> {
  /* instance variables */
  NSString *_module;
  IGGenericMegaphone *_megaphone;
  NSObject<IGMegaphonePresenterDelegate> *_delegate;
}

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
- (id)initWithMegaphone:(id)megaphone userSession:(id)session delegate:(id)delegate module:(id)module;
- (void)logMegaphoneSeen;
- (void)megaphoneViewDidDismiss:(id)dismiss;
- (void)megaphoneView:(id)view didSelectButton:(id)button;
- (void)megaphoneViewNeedsResize:(id)resize;
@end

#endif /* FBOnlyMediaMegaphonePresenter_h */
