//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVSeriesFeedItemActionSheetController_h
#define IGTVSeriesFeedItemActionSheetController_h
@import Foundation;

@class IGActionSheetController, IGMedia, IGUserSession, UIViewController;
@protocol IGTVSeriesFeedItemActionSheetControllerDelegate;

@interface IGTVSeriesFeedItemActionSheetController : NSObject {
  /* instance variables */
  IGActionSheetController *_actionSheetController;
  IGUserSession *_userSession;
  UIViewController *_hostingViewController;
  IGMedia *_media;
}

@property (weak, nonatomic) NSObject<IGTVSeriesFeedItemActionSheetControllerDelegate> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session hostingViewController:(id)controller actionType:(unsigned long long)type media:(id)media;
- (void)show;
@end

#endif /* IGTVSeriesFeedItemActionSheetController_h */