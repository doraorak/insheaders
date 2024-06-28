//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMediaPileMessageCell_h
#define IGDirectMediaPileMessageCell_h
@import Foundation;

#include "IGDirectMessageCell.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGDirectMediaPileMessageViewModel.h"
#include "IGDirectMediaPileView.h"
#include "NSObject-Protocol.h"

@class IGCoreTextView, IGTapButton, NSString, UIView;
@protocol IGDirectMediaPileMessageCellDelegate;

@interface IGDirectMediaPileMessageCell : IGDirectMessageCell<NSObject> {
  /* instance variables */
  IGDirectMediaPileMessageViewModel *_model;
  IGDirectMediaPileView *_mediaPileView;
  IGCoreTextView *_adminMessage;
  UIView *_expandStackContainerView;
  UIView *_expandStackShortcutView;
  IGTapButton *_expandStackShortcutIcon;
  NSObject<IGDirectMediaPileMessageCellDelegate> *_messageCellDelegate;
  NSObject<IGCoreTextLinkHandler> *_coreTextHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model ringViewSpecFactory:(id)factory launcherSet:(id)set;
- (struct CGSize { double x0; double x1; })messageContentSize;
- (void)didTapBubbleView:(id)view;
- (void)didDoubleTapBubbleView:(id)view;
- (id)previewImage;
- (void)_layoutExpandStackShortcutView;
- (void)_configureExpandShortcutButtonIfNeeded:(BOOL)needed;
- (void)_didTapExpandShortcutButton;
@end

#endif /* IGDirectMediaPileMessageCell_h */