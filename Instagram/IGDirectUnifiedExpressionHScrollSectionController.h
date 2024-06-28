//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectUnifiedExpressionHScrollSectionController_h
#define IGDirectUnifiedExpressionHScrollSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "NSObject-Protocol.h"

@class IGDirectAnimatedMediaLogger, IGUserSession, NSString;
@protocol IGDirectUnifiedExpressionHScrollSectionControllerDelegate;

@interface IGDirectUnifiedExpressionHScrollSectionController : IGListGenericSectionController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDirectAnimatedMediaLogger *_animatedMediaLogger;
  NSString *_analyticsModule;
  double _messageListHeight;
  double _composerHeight;
}

@property (weak, nonatomic) NSObject<IGDirectUnifiedExpressionHScrollSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session animatedMediaLogger:(id)logger analyticsModule:(id)module messageListHeight:(double)height composerHeight:(double)height;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)unifiedExpressionHScrollCellDidSelectLike:(id)like;
- (void)unifiedExpressionHScrollCell:(id)cell didSelectAnimatedModelId:(id)id;
- (void)unifiedExpressionHScrollCell:(id)cell didSelectMessageEffect:(id)effect text:(id)text;
- (void)unifiedExpressionHScrollCell:(id)cell didSelectStickerWithID:(id)id atIndex:(long long)index;
- (void)unifiedExpressionHScrollCell:(id)cell willDisplaySticker:(id)sticker atIndex:(long long)index;
@end

#endif /* IGDirectUnifiedExpressionHScrollSectionController_h */
