//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrowserChromeCoordinator_h
#define IGBrowserChromeCoordinator_h
@import Foundation;

#include "IGBrowserTitleBar.h"
#include "IGWebViewToolbar.h"

@class UIView;
@protocol UIView<FBWebView;

@interface IGBrowserChromeCoordinator : NSObject {
  /* instance variables */
  IGWebViewToolbar *_toolbar;
  IGBrowserTitleBar *_titleBar;
  UIView *_containingView;
  UIView<FBWebView> *_webView;
  UIView *_bannerView;
  unsigned long long _scrollDirection;
  double _currentContentYOffset;
  double _toolbarMovedDistanceY;
  double _titleBarMovedDistanceY;
  unsigned long long _chromeState;
  BOOL _isBannerViewVisible;
  UIView *_disclaimerView;
  UIView *_callAdButtonView;
  UIView *_formExtensionButtonBannerView;
  UIView *_whatsappAdButtonView;
  BOOL _shouldHideTitleBar;
  BOOL _disableTitleBarInteractiveResizing;
}

/* instance methods */
- (id)initWithToolbar:(id)toolbar titleBar:(id)bar containingView:(id)view webView:(id)view bannerView:(id)view loggingCoordinator:(id)coordinator shouldHideTitleBar:(BOOL)bar;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging;
- (void)scrollViewDidScrollToTop:(id)top;
- (void)_hideChromeUIWithHidingToolbarOnly:(BOOL)only;
- (void)hideToolbarAndShowTitleBar;
@end

#endif /* IGBrowserChromeCoordinator_h */