//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFacebookXpostingCCPReelsPresenter_h
#define IGFacebookXpostingCCPReelsPresenter_h
@import Foundation;

#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGUserSession.h"

@class NSString, UIViewController;

@interface IGFacebookXpostingCCPReelsPresenter : NSObject<IGPartialModalSheetListener, IGCoreTextLinkHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  id /* block */ _acceptActionHandler;
  id /* block */ _declineActionHandler;
  id /* block */ _dismissHandler;
  UIViewController *_bottomsheetVC;
  BOOL _isDismissedByButtonTapping;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session acceptActionHandler:(id /* block */)handler declineActionHandler:(id /* block */)handler dismissHandler:(id /* block */)handler;
- (void)presentWithViewController:(id)controller variant:(long long)variant entryPoint:(long long)point extra:(id)extra;
- (void)_showReelsCCPUpsellFromViewController:(id)controller entryPoint:(long long)point extra:(id)extra;
- (void)_showReelsCCPShareLaterUpsellFromViewController:(id)controller entryPoint:(long long)point extra:(id)extra;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
@end

#endif /* IGFacebookXpostingCCPReelsPresenter_h */
