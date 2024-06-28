//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UIViewControllerPreviewing_Protocol_h
#define UIViewControllerPreviewing_Protocol_h
@import Foundation;

@protocol UIViewControllerPreviewing <NSObject>

@property (readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (readonly, nonatomic) NSObject<UIViewControllerPreviewingDelegate> *delegate;
@property (readonly, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;

@end

#endif /* UIViewControllerPreviewing_Protocol_h */
