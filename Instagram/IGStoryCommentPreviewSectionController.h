//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryCommentPreviewSectionController_h
#define IGStoryCommentPreviewSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGStoryCommentPreviewSectionControllerViewModel.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString;
@protocol IGStoryCommentPreviewSectionControllerDelegate;

@interface IGStoryCommentPreviewSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGStoryCommentPreviewSectionControllerViewModel *_viewModel;
  IGUserSession *_userSession;
  BOOL _centerWithinBounds;
}

@property (weak, nonatomic) NSObject<IGStoryCommentPreviewSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model userSession:(id)session;
- (id)initWithViewModel:(id)model userSession:(id)session centerWithinBounds:(BOOL)bounds;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (BOOL)shouldSelectItemAtIndex:(long long)index;
- (void)storyCommentPreviewCellDidDoubleTap:(id)tap comment:(id)comment;
- (void)storyCommentPreviewCellDidTapHeart:(id)heart comment:(id)comment;
@end

#endif /* IGStoryCommentPreviewSectionController_h */
