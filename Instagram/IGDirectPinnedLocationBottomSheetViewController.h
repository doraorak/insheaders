//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPinnedLocationBottomSheetViewController_h
#define IGDirectPinnedLocationBottomSheetViewController_h
@import Foundation;

#include "IGViewController.h"

@class IGTextButton, IGUserSession, NSString, NSURL, UILabel;

@interface IGDirectPinnedLocationBottomSheetViewController : IGViewController {
  /* instance variables */
  IGUserSession *_userSession;
  UILabel *_titleLabel;
  UILabel *_locationLabel;
  NSString *_addressString;
  UILabel *_distanceLabel;
  IGTextButton *_getDirectionsButton;
  NSURL *_targetURL;
  struct CLLocationCoordinate2D { double latitude; double longitude; } _coordinate;
}

/* instance methods */
- (id)initWithUserSession:(id)session targetURL:(id)url addressString:(id)string coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (double)contentHeight;
- (void)_didTapBottomButton;
@end

#endif /* IGDirectPinnedLocationBottomSheetViewController_h */