//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUnlockedStickerStorySectionController_h
#define IGUnlockedStickerStorySectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString;
@protocol IGUnlockedStickerStorySectionControllerDelegate;

@interface IGUnlockedStickerStorySectionController : IGListGenericSectionController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
}

@property (weak, nonatomic) NSObject<IGUnlockedStickerStorySectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)cellForItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)unlockedStickerStoryCell:(id)cell didTapCreateStoryButton:(id)button;
@end

#endif /* IGUnlockedStickerStorySectionController_h */