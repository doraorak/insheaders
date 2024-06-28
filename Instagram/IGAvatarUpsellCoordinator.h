//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAvatarUpsellCoordinator_h
#define IGAvatarUpsellCoordinator_h
@import Foundation;

#include "IGAvatarUpsellActionHandler.h"
#include "IGAvatarUpsellPresenterLogger.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "_TtP16IGAvatarUpsellUI42IGAvatarUpsellViewControllerActionDelegate_-Protocol.h"

@class IGAvatarUpsellPresentationLoggingConfiguration, IGUserSession, NSString;

@interface IGAvatarUpsellCoordinator : NSObject<_TtP16IGAvatarUpsellUI42IGAvatarUpsellViewControllerActionDelegate_> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_loggingSurface;
  BOOL _hasAvatarCreated;
  IGAvatarUpsellPresenterLogger *_presenterLogger;
  IGAvatarUpsellPresentationLoggingConfiguration *_avatarUpsellPresentationLogConfig;
  IGAvatarUpsellActionHandler *_actionHandler;
  NSObject<IGPartialModalSheetListener> *_partialModalSheetListener;
}

/* instance methods */
- (id)initWithUserSession:(id)session loggingSurface:(id)surface;
- (void)avatarUpsellViewControllerDidTapOnActionButton:(id)button actionType:(long long)type stickerModel:(id)model;
@end

#endif /* IGAvatarUpsellCoordinator_h */