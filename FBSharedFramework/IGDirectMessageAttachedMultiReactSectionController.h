//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageAttachedMultiReactSectionController_h
#define IGDirectMessageAttachedMultiReactSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGDirectMessageAttachedMultiReactCellViewModel.h"
#include "IGDirectMessageCellAttachedBubbleViewLayoutSpec.h"
#include "IGDirectMessageReactionsViewThemeable-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGDirectMessageAttachedMultiReactSectionControllerDelegate;

@interface IGDirectMessageAttachedMultiReactSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  NSString *_previousReactionCount;
}

@property (readonly, nonatomic) IGDirectMessageAttachedMultiReactCellViewModel *viewModel;
@property (readonly, nonatomic) IGDirectMessageCellAttachedBubbleViewLayoutSpec *layoutSpec;
@property (readonly, nonatomic) NSObject<IGDirectMessageReactionsViewThemeable> *theme;
@property (readonly, nonatomic) BOOL shouldAnimate;
@property (weak, nonatomic) NSObject<IGDirectMessageAttachedMultiReactSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model layoutSpec:(id)spec theme:(id)theme shouldAnimate:(BOOL)animate previousReactionCount:(id)count;
- (id)cellForItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)supplementaryViewSource;
- (void)didSelectItemAtIndex:(long long)index;
- (void)didDeselectItemAtIndex:(long long)index;
- (void)didLongPressOnMultiReactCell:(id)cell withViewModel:(id)model;
- (void)willAnimateMultiReactCell:(id)cell withEmojiUnicode:(id)unicode;
@end

#endif /* IGDirectMessageAttachedMultiReactSectionController_h */
