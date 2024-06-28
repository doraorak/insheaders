//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPMegaphoneViewPresenter_h
#define IGQPMegaphoneViewPresenter_h
@import Foundation;

#include "IGQPActionHandlerProtocol-Protocol.h"
#include "IGQPMegaphoneView.h"
#include "IGQPMegaphoneViewDelegate-Protocol.h"

@class IGQPMegaphone, IGUserSession, NSString;
@protocol IGQPViewPresenterDelegate;

@interface IGQPMegaphoneViewPresenter : NSObject<IGQPMegaphoneViewDelegate> {
  /* instance variables */
  IGQPMegaphone *_megaphone;
  IGQPMegaphoneView *_megaphoneView;
  IGUserSession *_userSession;
  NSObject<IGQPActionHandlerProtocol> *_currentActionHandler;
}

@property (weak, nonatomic) NSObject<IGQPViewPresenterDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMegaphone:(id)megaphone userSession:(id)session;
- (id)viewForMegaphone;
- (void)qpMegaphoneView:(id)view didTapButton:(id)button extraQPInfo:(id)qpinfo completion:(id /* block */)completion;
- (void)qpMegaphoneViewDidDismiss:(id)dismiss;
- (void)qpMegaphoneViewDidTapNotNow:(id)now;
- (void)qpMegaphoneViewNeedsResize:(id)resize;
- (void)qpMegaphoneViewDidTapCountryButton:(id)button;
- (void)qpMegaphoneView:(id)view didTapURL:(id)url;
@end

#endif /* IGQPMegaphoneViewPresenter_h */
