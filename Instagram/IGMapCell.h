//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMapCell_h
#define IGMapCell_h
@import Foundation;

#include "IGFeedItemMediaCell.h"

@class IGUserSession, MKMapView, UITapGestureRecognizer, UIView;
@protocol IGMapCellDelegate;

@interface IGMapCell : IGFeedItemMediaCell {
  /* instance variables */
  BOOL _isSponsored;
  IGUserSession *_userSession;
  double _ctaExtensionHeight;
  UITapGestureRecognizer *_doubleTapRecognizer;
  UITapGestureRecognizer *_singleTapRecognizer;
}

@property (readonly, nonatomic) MKMapView *mapView;
@property (weak, nonatomic) NSObject<IGMapCellDelegate> *delegate;
@property (retain, nonatomic) UIView *ctaExtensionView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_onTap:(id)tap;
- (void)_onDoubleTap:(id)tap;
- (void)_didTapCTAExtension:(id)ctaextension;
@end

#endif /* IGMapCell_h */
