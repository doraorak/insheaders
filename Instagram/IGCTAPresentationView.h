//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCTAPresentationView_h
#define IGCTAPresentationView_h
@import Foundation;

#include "UIView.h"
#include "IGSponsoredInfoProviding-Protocol.h"
#include "NSObject-Protocol.h"

@class IGALButton, IGImageView, NSString, UIImageView, UILabel, UIView;
@protocol IGCTAPresentationConfigurationType, IGCTAPresentationViewDelegate, IGUserSession<IGUserLauncherSetProviding;

@interface IGCTAPresentationView : UIView<NSObject> {
  /* instance variables */
  IGALButton *_directResponseButton;
  UIView *_chevronView;
}

@property (readonly, weak, nonatomic) NSObject<IGCTAPresentationViewDelegate> *delegate;
@property (readonly, copy, nonatomic) NSObject<IGCTAPresentationConfigurationType> *configuration;
@property (readonly, nonatomic) IGImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UILabel *ctaLabel;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *increaseTappableAreaView;
@property (readonly, nonatomic) UIImageView *rightAccessoryImageView;
@property (readonly, nonatomic) IGUserSession<IGUserLauncherSetProviding> *userSession;
@property (readonly, nonatomic) NSObject<IGSponsoredInfoProviding> *sponsoredInfoProvider;
@property (readonly, nonatomic) unsigned long long increaseTappableAreaTestGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate configuration:(id)configuration userSession:(id)session sponsoredInfoProvider:(id)provider;
- (id)initWithDelegate:(id)delegate configuration:(id)configuration;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_didTapDirectResponseButton:(id)button;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
@end

#endif /* IGCTAPresentationView_h */