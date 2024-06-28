//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKFxImProfilePictureEditorView_h
#define BKFxImProfilePictureEditorView_h
@import Foundation;

#include "UIView.h"
#include "NSObject-Protocol.h"

@class NSDictionary, NSString, UIImage, UIImageView, UIStackView;

@interface BKFxImProfilePictureEditorView : UIView<NSObject> {
  /* instance variables */
  UIImageView *_imageView;
  UIImageView *_frameImageView;
  UIImage *_image;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
  UIStackView *_stackView;
  UIImage *_rotateIconImage;
  BOOL _didEditCropper;
  int _rotations;
  NSString *_mediaFrameURL;
}

@property (copy, nonatomic) NSString *mediaURL;
@property (copy, nonatomic) NSString *rotateIconURL;
@property (copy, nonatomic) NSDictionary *translationsDictionary;
@property (copy, nonatomic) id /* block */ onSaveLocal;
@property (copy, nonatomic) id /* block */ onLoggingEventBlock;
@property (copy, nonatomic) id /* block */ onApplyFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (void)setImage:(id)image;
- (void)editAction;
- (void)saveAction;
- (void)applyFrame:(id)frame;
- (void)cropViewControllerDidUpdateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect rotations:(long long)rotations didEditCropper:(BOOL)cropper;
- (void)saveInContext:(id)context;
@end

#endif /* BKFxImProfilePictureEditorView_h */
