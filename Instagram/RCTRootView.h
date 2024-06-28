//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTRootView_h
#define RCTRootView_h
@import Foundation;

#include "UIView.h"
#include "RCTBridge.h"
#include "RCTRootContentView.h"
#include "RCTRootViewDelegate-Protocol.h"

@class NSDictionary, NSString, UIView, UIViewController;

@interface RCTRootView : UIView

@property (nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly, copy, nonatomic) NSString *moduleName;
@property (readonly, nonatomic) RCTBridge *bridge;
@property (copy, nonatomic) NSDictionary *appProperties;
@property (nonatomic) long long sizeFlexibility;
@property (nonatomic) struct CGSize { double x0; double x1; } minimumSize;
@property (weak, nonatomic) NSObject<RCTRootViewDelegate> *delegate;
@property (weak, nonatomic) UIViewController *reactViewController;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *loadingView;
@property (nonatomic) BOOL passThroughTouches;
@property (nonatomic) double loadingViewFadeDelay;
@property (nonatomic) double loadingViewFadeDuration;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame bridge:(id)bridge moduleName:(id)name initialProperties:(id)properties;
- (id)initWithBridge:(id)bridge moduleName:(id)name initialProperties:(id)properties;
- (id)initWithBundleURL:(id)url moduleName:(id)name initialProperties:(id)properties launchOptions:(id)options;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (BOOL)canBecomeFirstResponder;
- (void)showLoadingView;
- (void)hideLoadingView;
- (id)reactTag;
- (void)bridgeDidReload;
- (void)javaScriptDidLoad:(id)load;
- (void)bundleFinishedLoading:(id)loading;
- (void)runApplication:(id)application;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)contentViewInvalidated;
- (void)traitCollectionDidChange:(id)change;
- (void)dealloc;
@end

#endif /* RCTRootView_h */