//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectEncryptedBackupsOneTimeCodeDevicesViewController_h
#define IGDirectEncryptedBackupsOneTimeCodeDevicesViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGScopedListener-Protocol.h"

@class IGUserSession, NSArray, NSString, UIView;
@protocol IGDirectEncryptedBackupsOneTimeCodeDevicesViewHandlerDelegate;

@interface IGDirectEncryptedBackupsOneTimeCodeDevicesViewController : IGViewController<IGScopedListener> {
  /* instance variables */
  NSObject<IGDirectEncryptedBackupsOneTimeCodeDevicesViewHandlerDelegate> *_delegate;
  NSArray *_availableOTCRestoreDevices;
  long long _source;
  UIView *_devicesContentView;
  IGUserSession *_userSession;
  BOOL _isV2Enabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate availableOTCRestoreDevices:(id)devices source:(long long)source userSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)loadView;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)_didTapBackButton;
- (void)bottomSheetDidDismiss;
@end

#endif /* IGDirectEncryptedBackupsOneTimeCodeDevicesViewController_h */