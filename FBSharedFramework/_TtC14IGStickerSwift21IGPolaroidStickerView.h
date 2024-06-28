//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC14IGStickerSwift21IGPolaroidStickerView_h
#define _TtC14IGStickerSwift21IGPolaroidStickerView_h
@import Foundation;

#include "IGBaseView.h"

@interface _TtC14IGStickerSwift21IGPolaroidStickerView : IGBaseView { // (Swift)
  /* instance variables */
   image;
   imageView;
   creationDate;
   containerView;
   $__lazy_storage_$_fontAttributes;
   $__lazy_storage_$_captionAttributes;
   $__lazy_storage_$_attributedPlaceholder;
   $__lazy_storage_$_captionTextContainer;
   $__lazy_storage_$_captionTextView;
   $__lazy_storage_$_timestampLabel;
   $__lazy_storage_$_dateFormatter;
   $__lazy_storage_$_timeFormatter;
}

/* instance methods */
- (id)initWithImage:(id)image creationDate:(id)date userSession:(id)session;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC14IGStickerSwift21IGPolaroidStickerView_h */
