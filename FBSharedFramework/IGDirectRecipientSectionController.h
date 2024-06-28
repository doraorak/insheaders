//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecipientSectionController_h
#define IGDirectRecipientSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGDirectRecipientCellViewModelProtocol-Protocol.h"
#include "IGDirectRecipientSectionControllerSelectDelegate-Protocol.h"
#include "IGDirectShareSheetOneTapButton.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGDirectRecipientCellStoryRingTapDelegate, IGDirectRecipientSectionControllerDismissibleDelegate, IGDirectRecipientSectionControllerOneTapDelegate;

@interface IGDirectRecipientSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  BOOL _shouldHighlightOnTap;
  BOOL _isChatPreviewMode;
  NSObject<IGDirectRecipientSectionControllerOneTapDelegate> *_oneTapDelegate;
  NSObject<IGDirectRecipientSectionControllerDismissibleDelegate> *_dismissibleDelegate;
  IGDirectShareSheetOneTapButton *_oneTapButton;
}

@property (readonly, nonatomic) NSObject<IGDirectRecipientCellViewModelProtocol> *viewModel;
@property (readonly, copy, nonatomic) id /* block */ impressionTrackingBlock;
@property (readonly, weak, nonatomic) NSObject<IGDirectRecipientSectionControllerSelectDelegate> *selectionDelegate;
@property (readonly, weak, nonatomic) NSObject<IGDirectRecipientCellStoryRingTapDelegate> *storyRingTapDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSelectionDelegate:(id)delegate oneTapSendButtonDelegate:(id)delegate dismissibleDelegate:(id)delegate storyRingTapDelegate:(id)delegate viewPointActionBlock:(id /* block */)block shouldHighlightOnTap:(BOOL)tap isChatPreviewMode:(BOOL)mode;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didHighlightItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (BOOL)directRecipientCellShouldLongPress:(id)press;
- (void)directRecipientCellDidLongPress:(id)press;
- (void)directRecipientCellDidTapSubtitle:(id)subtitle;
- (void)directRecipientCellDidTapChevronAccessoryButton:(id)button;
- (void)directRecipientCellDidTapCameraButton:(id)button;
- (void)directRecipientCellDidDismiss:(id)dismiss;
- (void)directRecipientCellDidTapContextButton:(id)button identifier:(unsigned long long)identifier;
- (void)directRecipientCellDidStartPanGesture:(id)gesture;
- (void)shareSheetOneTapButtonShouldPerformAction:(id)action isSelectableBlock:(id /* block */)block;
- (void)shareSheetOneTapButtonDidTapSend:(id)send withXpostingSettingOneTimeOverrideUponSharing:(id)sharing;
- (void)shareSheetOneTapButtonDidTapUndo:(id)undo;
@end

#endif /* IGDirectRecipientSectionController_h */