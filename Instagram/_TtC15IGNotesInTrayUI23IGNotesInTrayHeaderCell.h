//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15IGNotesInTrayUI23IGNotesInTrayHeaderCell_h
#define _TtC15IGNotesInTrayUI23IGNotesInTrayHeaderCell_h
@import Foundation;

#include "IGBaseCollectionViewCell.h"

@interface _TtC15IGNotesInTrayUI23IGNotesInTrayHeaderCell : IGBaseCollectionViewCell { // (Swift)
  /* instance variables */
   $__lazy_storage_$_textLabel;
   $__lazy_storage_$_seeAllButton;
   $__lazy_storage_$_moreButton;
   delegate;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)didTapSeeAllButton;
- (void)didTapMoreButton;
@end

#endif /* _TtC15IGNotesInTrayUI23IGNotesInTrayHeaderCell_h */
