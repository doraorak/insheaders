//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC25IGSundialFeedDirectHeader25IGSundialFeedDirectHeader_h
#define _TtC25IGSundialFeedDirectHeader25IGSundialFeedDirectHeader_h
@import Foundation;

#include "IGBaseView.h"

@class IGProfileImage, NSString;

@interface _TtC25IGSundialFeedDirectHeader25IGSundialFeedDirectHeader : IGBaseView { // (Swift)
  /* instance variables */
   $__lazy_storage_$_profilePictureView;
   $__lazy_storage_$_textLabel;
   $__lazy_storage_$_subtextLabel;
}

@property (nonatomic, retain) IGProfileImage *profileImage;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *subtext;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* _TtC25IGSundialFeedDirectHeader25IGSundialFeedDirectHeader_h */
