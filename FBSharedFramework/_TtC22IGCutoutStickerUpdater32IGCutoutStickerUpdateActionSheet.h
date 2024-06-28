//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGCutoutStickerUpdater32IGCutoutStickerUpdateActionSheet_h
#define _TtC22IGCutoutStickerUpdater32IGCutoutStickerUpdateActionSheet_h
@import Foundation;

#include "_TtP22IGCutoutStickerUpdater40IGCutoutStickerUpdateActionSheetDelegate_-Protocol.h"

@interface _TtC22IGCutoutStickerUpdater32IGCutoutStickerUpdateActionSheet : NSObject { // (Swift)
  /* instance variables */
   stickerUpdater;
   stickerId;
   logger;
   stickerTraySessionId;
   $__lazy_storage_$_actionSheet;
}

@property (nonatomic, weak) NSObject<_TtP22IGCutoutStickerUpdater40IGCutoutStickerUpdateActionSheetDelegate_> *delegate;

/* instance methods */
- (id)initWithApiClient:(id)client stickerId:(id)id logger:(id)logger stickerTraySessionId:(id)id;
- (void)show;
- (id)init;
@end

#endif /* _TtC22IGCutoutStickerUpdater32IGCutoutStickerUpdateActionSheet_h */