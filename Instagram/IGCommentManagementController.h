//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentManagementController_h
#define IGCommentManagementController_h
@import Foundation;

@class IGBottomActionBar, IGBottomActionBarButton, IGCommentBroadcastChannelConfiguration, IGMedia, IGUserSession, IGViewController, NSMutableDictionary, NSString;
@protocol IGBulkCommentDeletionProtocol, IGCommentManagementControllerDelegate;

@interface IGCommentManagementController : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  IGMedia *_media;
  NSObject<IGBulkCommentDeletionProtocol> *_bulkDeleteManager;
  unsigned long long _surfaceType;
  IGViewController *_viewController;
  NSMutableDictionary *_selectedComments;
  NSString *_sessionId;
  IGBottomActionBar *_bottomActionBar;
  IGBottomActionBarButton *_deleteButton;
  IGBottomActionBarButton *_restrictButton;
  IGBottomActionBarButton *_blockButton;
  IGBottomActionBarButton *_approveButton;
  IGBottomActionBarButton *_hideButton;
  IGCommentBroadcastChannelConfiguration *_broadcastChannelConfiguration;
}

@property (nonatomic) unsigned long long status;
@property (weak, nonatomic) NSObject<IGCommentManagementControllerDelegate> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session media:(id)media bulkDeleteManager:(id)manager surfaceType:(unsigned long long)type viewController:(id)controller broadcastChannelConfiguration:(id)configuration;
- (void)reset;
- (void)_didTapBulkDeleteButton;
- (void)_didTapBulkRestrictButton;
- (void)_didTapBulkBlockButton;
- (void)_didTapBulkApproveButton;
- (void)_didTapBulkHideButton;
@end

#endif /* IGCommentManagementController_h */