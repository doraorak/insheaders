//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteAudienceLocationMapViewCell_h
#define IGPromoteAudienceLocationMapViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGPromoteAudienceLocationMapViewModel.h"
#include "MKMapViewDelegate-Protocol.h"

@class MKMapView, NSMutableDictionary, NSString;
@protocol _TtP12IGCLGeocoder12IGCLGeocoder_;

@interface IGPromoteAudienceLocationMapViewCell : UICollectionViewCell<MKMapViewDelegate> {
  /* instance variables */
  MKMapView *_mapView;
  NSMutableDictionary *_locationAnnotations;
  NSObject<_TtP12IGCLGeocoder12IGCLGeocoder_> *_geocoder;
}

@property (copy, nonatomic) IGPromoteAudienceLocationMapViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)heightThatFitsWithViewModel:(id)model width:(double)width;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame geocoder:(id)geocoder;
- (id)mapView:(id)view viewForAnnotation:(id)annotation;
- (id)mapView:(id)view viewForOverlay:(id)overlay;
@end

#endif /* IGPromoteAudienceLocationMapViewCell_h */
