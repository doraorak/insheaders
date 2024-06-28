//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecipientListViewControllerViewDidLoadActionConfig_h
#define IGDirectRecipientListViewControllerViewDidLoadActionConfig_h
@import Foundation;

@class FacebookDatingXPostingLogger, IGStoryCreationModel, IGUserSession;
@protocol IGDirectRecipientListViewControllerHandling;

@interface IGDirectRecipientListViewControllerViewDidLoadActionConfig : NSObject

@property (readonly, nonatomic) NSObject<IGDirectRecipientListViewControllerHandling> *recipientListVCHandler;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) FacebookDatingXPostingLogger *facebookDatingLogger;
@property (readonly, nonatomic) IGStoryCreationModel *storyCreationModel;

/* instance methods */
- (id)initWithRecipientListVCHandler:(id)vchandler userSession:(id)session facebookDatingLogger:(id)logger storyCreationModel:(id)model;
@end

#endif /* IGDirectRecipientListViewControllerViewDidLoadActionConfig_h */