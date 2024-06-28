//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectEncryptedBackupsHardBlockReleaseContextModel_h
#define IGDirectEncryptedBackupsHardBlockReleaseContextModel_h
@import Foundation;

#include "IGDirectEncryptedBackupsCloudModel.h"
#include "IGDirectEncryptedBackupsSetupNavigationHandler.h"

@class IGUserSession;
@protocol IGDirectEncryptedBackupsCloudModelViewDelegate;

@interface IGDirectEncryptedBackupsHardBlockReleaseContextModel : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  IGDirectEncryptedBackupsSetupNavigationHandler *_navigationHandler;
  IGDirectEncryptedBackupsCloudModel *_cloudModel;
  NSObject<IGDirectEncryptedBackupsCloudModelViewDelegate> *_delegate;
}

@property (readonly, nonatomic) BOOL is3PLeading;
@property (readonly, nonatomic) BOOL hasImplicitBackups;

/* instance methods */
- (id)initWithUserSession:(id)session navigationHandler:(id)handler is3PLeading:(BOOL)pleading hasImplicitBackups:(BOOL)backups;
- (void)turnOnCloudWithDelegate:(id)delegate;
@end

#endif /* IGDirectEncryptedBackupsHardBlockReleaseContextModel_h */