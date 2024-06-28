//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectNotesTrayRowSectionController_h
#define IGDirectNotesTrayRowSectionController_h
@import Foundation;

#include "IGListBindingSingleSectionController.h"
#include "IGDirectNotesFullscreenConsumptionTransitionDelegate-Protocol.h"
#include "IGDirectNotesModelsDataSource.h"
#include "IGDirectNotesServiceListener-Protocol.h"
#include "IGDirectNotesTrayRowSectionControllerDelegate-Protocol.h"
#include "IGFriendsMapBadgeServiceListener-Protocol.h"
#include "IGFriendsMapPresenceServiceListener-Protocol.h"
#include "IGListDisplayDelegate-Protocol.h"
#include "_TtC18IGMotionTranslator18IGMotionTranslator.h"

@class IGDirectNotesService, IGUserSession, NSString;

@interface IGDirectNotesTrayRowSectionController : IGListBindingSingleSectionController<IGDirectNotesServiceListener, IGListDisplayDelegate, IGFriendsMapPresenceServiceListener, IGFriendsMapBadgeServiceListener, IGDirectNotesFullscreenConsumptionTransitionDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDirectNotesModelsDataSource *_dataSource;
  IGDirectNotesService *_notesService;
  BOOL _hasReceivedNotesFetch;
  NSString *_containerModule;
  BOOL _shouldScrollToFront;
}

@property (retain, nonatomic) _TtC18IGMotionTranslator18IGMotionTranslator *motionTranslator;
@property (weak, nonatomic) NSObject<IGDirectNotesTrayRowSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)preferredContentHeightShouldUseTopInset:(BOOL)inset activeNowOnlyTray:(BOOL)tray;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate containerModule:(id)module;
- (void)dealloc;
- (void)scrollNotesTrayToFrontAnimated:(BOOL)animated;
- (void)_scrollToFrontNotesTrayCell:(id)cell animated:(BOOL)animated;
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (void)notesTrayRowCell:(id)cell didSelectViewModel:(id)model itemPosition:(long long)position avatarRectOnScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screen pogCell:(id)cell;
- (void)notesTrayRowCell:(id)cell didLongTapViewModel:(id)model userCellNoteView:(id)view itemPosition:(long long)position;
- (void)notesTrayRowCell:(id)cell didShowNoteCell:(id)cell viewModel:(id)model;
- (void)notesTrayRowCell:(id)cell didTapNoteBubbleWithViewModel:(id)model avatarRectOnScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screen;
- (void)notesTrayRowCell:(id)cell didDoubleTapViewModel:(id)model itemPosition:(long long)position pogCell:(id)cell;
- (void)notesTrayRowCell:(id)cell didTapNoteBirthdayDotWithViewModel:(id)model;
- (void)didBeginDraggingNotesTrayRowCell:(id)cell;
- (void)didEndDraggingNotesTrayRowCell:(id)cell;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)notesServiceDidReceiveUpdate:(id)update updatedNotes:(id)notes didFetchNewNotes:(BOOL)notes;
- (void)notesServiceNotesFetchDidComplete:(id)complete isFetchFromNewMobileConfigUpdate:(BOOL)update;
- (void)fullscreenConsumptionTransitionControllerWillBegin:(id)begin isPresenting:(BOOL)presenting animationIdentifier:(id)identifier transitioningIdentifiers:(id)identifiers;
- (void)fullscreenConsumptionTransitionControllerDidFinish:(id)finish isPresenting:(BOOL)presenting animationIdentifier:(id)identifier transitioningIdentifiers:(id)identifiers;
- (id)transitionViewModelsForAnimationIdentifier:(id)identifier;
- (id /* block */)fullscreenConsumptionTransitionAnimationBlockForPresentation:(BOOL)presentation animationIdentifier:(id)identifier;
- (void)didUpdateBadgeCount:(long long)count;
- (void)didAddPresence:(id)presence;
- (void)didRemovePresence:(id)presence;
- (void)didUpdatePresence:(id)presence;
- (void)didUpdateLocationAudience;
- (void)didUpdateCurrentLocation:(id)location;
@end

#endif /* IGDirectNotesTrayRowSectionController_h */
