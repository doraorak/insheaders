//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraToolsMenu_h
#define IGCameraToolsMenu_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGCameraToolsMenuHandednessController.h"
#include "IGCameraToolsMenuOpenCloseButton.h"
#include "IGCameraToolsMenuPresentationViewController.h"
#include "IGCameraToolsMenuSwapButton.h"
#include "IGEDRViewType-Protocol.h"

@class IGGradientView, IGPassthroughView, NSArray, NSMapTable, NSMutableSet, NSString, NSUUID, UIImpactFeedbackGenerator;
@protocol IGCameraToolsMenuDelegate;

@interface IGCameraToolsMenu : IGPassthroughView<IGEDRViewType> {
  /* instance variables */
  IGCameraToolsMenuPresentationViewController *_expandedViewController;
  IGPassthroughView *_contentView;
  IGGradientView *_protectionGradient;
  IGPassthroughView *_toolsContainerView;
  IGCameraToolsMenuOpenCloseButton *_openCloseButton;
  IGCameraToolsMenuSwapButton *_swapButton;
  IGCameraToolsMenuHandednessController *_handednessController;
  double _expansionPercentage;
  NSArray *_tools;
  NSMapTable *_toolToStateMap;
  NSMapTable *_toolToSubmenuBackgroundMap;
  NSMapTable *_subtoolsForTool;
  NSMutableSet *_selectedTools;
  NSMutableSet *_overflowTools;
  NSUUID *_toolsTimerIdentifier;
  NSMapTable *_toolToSubtoolsTimerIdentifierMap;
  UIImpactFeedbackGenerator *_impactGenerator;
  BOOL _topAligned;
  BOOL _permanentLabels;
  BOOL _showGradientWhenCollapsed;
  BOOL _showSubmenuBackground;
}

@property (weak, nonatomic) NSObject<IGCameraToolsMenuDelegate> *delegate;
@property (nonatomic) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTools:(id)tools userSession:(id)session;
- (void)dealloc;
- (void)setHidden:(BOOL)hidden;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)attribute;
- (void)_didTapSwapButton:(id)button;
- (void)cameraToolsMenuHandednessController:(id)controller didUpdateHandedness:(unsigned long long)handedness;
- (void)_didTapOpenCloseButton:(id)button;
- (void)setEDR:(BOOL)edr;
- (id)accessibilityElementsForCameraToolsMenuPresentationViewController:(id)controller;
- (void)cameraToolsMenuPresentationViewControllerDidTapBackground:(id)background;
- (void)cameraToolsMenuPresentationViewControllerWillDismiss:(id)dismiss;
@end

#endif /* IGCameraToolsMenu_h */
