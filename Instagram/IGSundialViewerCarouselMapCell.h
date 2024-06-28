//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerCarouselMapCell_h
#define IGSundialViewerCarouselMapCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGSundialViewerControlsOverlayLayoutDelegate-Protocol.h"
#include "IGSundialViewerMapView.h"

@class NSString;

@interface IGSundialViewerCarouselMapCell : UICollectionViewCell<IGSundialViewerControlsOverlayLayoutDelegate> {
  /* instance variables */
  IGSundialViewerMapView *_mapView;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)overlayDidLayoutWithMediaLayout:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x2; double x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; })layout;
- (void)overlayDidLayoutWithProgressIndicatorDesiredMinY:(double)y shouldLayout:(BOOL)layout frameMode:(long long)mode;
- (void)overlayDidLayoutWithMinTopYForBottomAFI:(double)afi shouldLayout:(BOOL)layout frameMode:(long long)mode;
@end

#endif /* IGSundialViewerCarouselMapCell_h */
