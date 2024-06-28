//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPollMessageCell_h
#define IGDirectPollMessageCell_h
@import Foundation;

#include "IGDirectMessageCell.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGDirectPollMessageViewModel.h"

@class CAShapeLayer, IGCoreTextView, IGDirectMessageBubbleView, IGProfilePictureImageView, IGSimpleButton, NSArray;
@protocol IGDirectPollMessageCellDelegate;

@interface IGDirectPollMessageCell : IGDirectMessageCell {
  /* instance variables */
  struct CGSize { double width; double height; } _contentSize;
  IGCoreTextView *_adminMessageTextView;
  IGProfilePictureImageView *_authorProfilePictureImageView;
  IGDirectMessageBubbleView *_bubbleView;
  IGCoreTextView *_descriptionTextView;
  IGCoreTextView *_secondaryDescriptionTextView;
  NSArray *_listItemViews;
  CAShapeLayer *_avatarBackRing;
  IGSimpleButton *_ctaButton;
  IGDirectPollMessageViewModel *_pollMessageViewModel;
  NSObject<IGCoreTextLinkHandler> *_coreTextHandler;
}

@property (weak, nonatomic) NSObject<IGDirectPollMessageCellDelegate> *actionDelegate;

/* class methods */
+ (BOOL)needsContainerStyling;
+ (BOOL)needsToPassTouchEvents;
+ (BOOL)needsDoubleTapGesture;
+ (BOOL)needsLongPressGesture;
+ (BOOL)needsSingleTapGesture;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_didTapCtaButton:(id)button;
- (void)_didTapMessageBubble:(id)bubble;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })messageContentSize;
@end

#endif /* IGDirectPollMessageCell_h */
