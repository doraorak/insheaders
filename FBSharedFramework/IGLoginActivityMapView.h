//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLoginActivityMapView_h
#define IGLoginActivityMapView_h
@import Foundation;

#include "UIView.h"
#include "IGLoginActivityAnnotation.h"
#include "IGLoginActivityAnnotationView.h"
#include "MKMapViewDelegate-Protocol.h"

@class MKMapView, NSString;
@protocol IGLoginActivityMapViewDelegate;

@interface IGLoginActivityMapView : UIView<MKMapViewDelegate> {
  /* instance variables */
  MKMapView *_mapView;
  IGLoginActivityAnnotationView *_annotationView;
  IGLoginActivityAnnotation *_loginActivityAnnotation;
}

@property (weak, nonatomic) NSObject<IGLoginActivityMapViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (id)mapView:(id)view viewForAnnotation:(id)annotation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGLoginActivityMapView_h */