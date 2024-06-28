//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocationOverlayView_h
#define IGLocationOverlayView_h
@import Foundation;

#include "UIView.h"
#include "MKMapViewDelegate-Protocol.h"

@class CLLocation, MKMapView, NSString, UIImageView, UIView;

@interface IGLocationOverlayView : UIView<MKMapViewDelegate> {
  /* instance variables */
  UIView *_wrapperView;
  UIImageView *_frameView;
}

@property (retain, nonatomic) MKMapView *map;
@property (retain, nonatomic) CLLocation *centerLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithCenterLocation:(id)location;
- (void)showInView:(id)view;
- (void)_dismiss;
@end

#endif /* IGLocationOverlayView_h */