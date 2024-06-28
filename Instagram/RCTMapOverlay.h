//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTMapOverlay_h
#define RCTMapOverlay_h
@import Foundation;

#include "MKShape.h"
#include "MKOverlay-Protocol.h"

@class NSString, UIColor;
@protocol MKMultiPoint<MKOverlay;

@interface RCTMapOverlay : MKShape<MKOverlay>

@property (retain, nonatomic) MKMultiPoint<MKOverlay> *shape;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double lineWidth;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;
@optional
@property (readonly, copy, nonatomic) NSString *title;
@optional
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)initWithCoordinates:(struct CLLocationCoordinate2D *)coordinates count:(unsigned long long)count;

/* instance methods */
- (BOOL)intersectsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })rect;
@end

#endif /* RCTMapOverlay_h */