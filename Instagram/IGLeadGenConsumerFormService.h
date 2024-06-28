//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenConsumerFormService_h
#define IGLeadGenConsumerFormService_h
@import Foundation;

@class IGActionSheetController, IGUser, IGUserSession, NSMutableArray, NSString;
@protocol IGLeadGenConsumerFormServiceDelegate;

@interface IGLeadGenConsumerFormService : NSObject {
  /* instance variables */
  IGUserSession *_session;
  NSString *_formId;
  NSString *_entrypoint;
  BOOL _isStandardForm;
  IGUser *_businessUser;
  IGActionSheetController *_discardConfirmationActionSheetController;
  NSMutableArray *_loggingBacklog;
  BOOL _didDismissThankYouDialog;
  BOOL _showThankYouDialog;
  BOOL _didShowThankYouScreen;
}

@property (weak, nonatomic) NSObject<IGLeadGenConsumerFormServiceDelegate> *delegate;

/* instance methods */
- (id)initWithSession:(id)session formId:(id)id entrypoint:(id)entrypoint isStandardForm:(BOOL)form businessUser:(id)user;
@end

#endif /* IGLeadGenConsumerFormService_h */