//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFollowButton_h
#define IGFollowButton_h
@import Foundation;

#include "IGSpringButton.h"
#include "IGActivityIndicatingViewType-Protocol.h"
#include "IGActivityIndicationState.h"
#include "IGFollowButtonViewConfiguration.h"
#include "IGLazyView.h"

@class NSString;
@protocol IGFollowButtonDelegate;

@interface IGFollowButton : IGSpringButton<IGActivityIndicatingViewType> {
  /* instance variables */
  IGFollowButtonViewConfiguration *_viewConfiguration;
  IGLazyView *_lazyBlurView;
  IGActivityIndicationState *_activityIndicationState;
}

@property (weak, nonatomic) NSObject<IGFollowButtonDelegate> *delegate;
@property (nonatomic) long long buttonState;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } hitTestExpansion;
@property (readonly, nonatomic) IGActivityIndicationState *ig_activityIndicationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewConfiguration:(id)configuration;
- (void)_setPropertiesBasedOnViewConfiguration:(id)configuration;
- (void)traitCollectionDidChange:(id)change;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setEnabled:(BOOL)enabled;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
@end

#endif /* IGFollowButton_h */