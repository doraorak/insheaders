//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC12IGFriendsMap16IGFriendsMapView_IGFriendsMap_h
#define _TtC12IGFriendsMap16IGFriendsMapView_IGFriendsMap_h
@import Foundation;

@interface _TtC12IGFriendsMap16IGFriendsMapView (IGFriendsMap) <MKMapViewDelegate>
/* instance methods */
- (id)mapView:(id)view viewForAnnotation:(id)annotation;
- (void)mapView:(id)view regionWillChangeAnimated:(BOOL)animated;
- (void)mapViewDidChangeVisibleRegion:(id)region;
- (void)mapView:(id)view regionDidChangeAnimated:(BOOL)animated;
- (void)mapView:(id)view didAddAnnotationViews:(id)views;
- (id)mapView:(id)view rendererForOverlay:(id)overlay;
- (void)mapView:(id)view didAddOverlayRenderers:(id)renderers;
@end

#endif /* _TtC12IGFriendsMap16IGFriendsMapView_IGFriendsMap_h */
