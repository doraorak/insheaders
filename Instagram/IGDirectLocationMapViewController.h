//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectLocationMapViewController_h
#define IGDirectLocationMapViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDirectLiveLocationBottomSheetViewController.h"
#include "IGDirectLiveLocationDataFetcher.h"
#include "IGDiscoveryMapOverlayView.h"
#include "IGPartialModalSheetCustomInteractionDelegate-Protocol.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "MKMapViewDelegate-Protocol.h"

@class FBGraphQLServiceToken, IGDirectThreadKey, IGPartialModalSheetViewController, IGUserSession, MKMapView, NSMutableDictionary, NSString, NSURL, UIView;

@interface IGDirectLocationMapViewController : IGViewController<MKMapViewDelegate, IGPartialModalSheetCustomInteractionDelegate, IGPartialModalSheetListener> {
  /* instance variables */
  UIView *_contentView;
  IGDirectLiveLocationDataFetcher *_dataFetcher;
  IGUserSession *_userSession;
  IGDirectThreadKey *_threadKey;
  NSString *_threadId;
  struct CLLocationCoordinate2D { double latitude; double longitude; } _centerCoordinate;
  MKMapView *_mapView;
  IGDiscoveryMapOverlayView *_overlayView;
  long long _mapType;
  NSURL *_targetURL;
  NSString *_addressString;
  BOOL _isDisappearingModeActive;
  IGDirectLiveLocationBottomSheetViewController *_liveLocationBottomSheetVC;
  IGPartialModalSheetViewController *_bottomSheet;
  IGPartialModalSheetViewController *_focusedBottomSheet;
  NSString *_focusedBottomSheetIdentifier;
  long long _presentationState;
  NSMutableDictionary *_userIdToMapAnnotationDict;
  FBGraphQLServiceToken *_token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session threadKey:(id)key coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate targetURL:(id)url addressString:(id)string mapType:(long long)type isDisappearingModeActive:(BOOL)active;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (double)partialModalSheetViewControllerAlphaForDimmingView:(id)view;
- (id)partialModalSheetViewController:(id)controller delegateView:(id)view hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)overlayView:(id)view didTapBackButton:(id)button;
- (void)overlayView:(id)view didTapLocationButton:(id)button;
- (void)overlayView:(id)view didTapSearchButton:(id)button;
- (void)overlayView:(id)view didTapShowModalButton:(id)button;
- (void)overlayViewDidSwipeUp:(id)up;
- (id)mapView:(id)view viewForAnnotation:(id)annotation;
- (void)mapView:(id)view didSelectAnnotation:(id)annotation;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)directLiveLocationBottomSheetViewController:(id)controller didSelectCellWithViewModel:(id)model;
- (void)directLiveLocationBottomSheetViewControllerDidStartSharingLocation:(id)location;
- (void)directLiveLocationBottomSheetViewControllerDidStopSharingLocation:(id)location;
- (void)_didTapMap:(id)map;
@end

#endif /* IGDirectLocationMapViewController_h */