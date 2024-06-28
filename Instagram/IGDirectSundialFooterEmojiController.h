//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSundialFooterEmojiController_h
#define IGDirectSundialFooterEmojiController_h
@import Foundation;

#include "IGDirectSundialFooterEmojiDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@class IGDirectThreadKey, IGUserSession, NSString;

@interface IGDirectSundialFooterEmojiController : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  IGDirectThreadKey *_threadKey;
}

@property (weak, nonatomic) NSObject<IGDirectSundialFooterEmojiDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module threadKey:(id)key;
- (void)messageReactionSelectionViewController:(id)controller didToggleEmoji:(id)emoji isSelected:(BOOL)selected isSuperReact:(BOOL)react actionSource:(long long)source;
- (void)messageReactionSelectionViewController:(id)controller didToggleEmoji:(id)emoji isSelected:(BOOL)selected;
- (void)messageReactionShouldAnimate:(id)animate forCell:(id)cell;
- (void)messageReactionSelectionViewControllerWillDismissAndCleanUp:(id)up;
- (void)messageReactionSelectionViewControllerWillPresentOrAdjustEmojiPickerTray:(id)tray selectionMode:(long long)mode;
- (void)messageReactionSelectionViewControllerWillDismissEmojiPickerTray:(id)tray;
- (void)messageReactionSelectionViewControllerWillResetOpacity:(id)opacity;
- (void)messageReactionSelectionViewControllerWillAdjustOpacityToFocusMessage:(id)message;
@end

#endif /* IGDirectSundialFooterEmojiController_h */