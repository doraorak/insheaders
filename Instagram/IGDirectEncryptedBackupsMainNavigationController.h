//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectEncryptedBackupsMainNavigationController_h
#define IGDirectEncryptedBackupsMainNavigationController_h
@import Foundation;

#include "IGNavigationController.h"
#include "IGDirectEncryptedBackupsMainFlowHandler.h"
#include "IGPartialModalSheetListener-Protocol.h"

@class IGUserSession, NSString;

@interface IGDirectEncryptedBackupsMainNavigationController : IGNavigationController<IGPartialModalSheetListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDirectEncryptedBackupsMainFlowHandler *_mainFlowHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session forSource:(long long)source availableRestoreTypes:(id)types availableDevices:(id)devices;
- (void)viewDidLoad;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
@end

#endif /* IGDirectEncryptedBackupsMainNavigationController_h */
