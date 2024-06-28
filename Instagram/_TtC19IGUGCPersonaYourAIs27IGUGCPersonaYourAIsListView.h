//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC19IGUGCPersonaYourAIs27IGUGCPersonaYourAIsListView_h
#define _TtC19IGUGCPersonaYourAIs27IGUGCPersonaYourAIsListView_h
@import Foundation;

#include "IGBaseView.h"
#include "IGDSHeadlineViewDelegate-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@interface _TtC19IGUGCPersonaYourAIs27IGUGCPersonaYourAIsListView : IGBaseView<UICollectionViewDelegate, IGDSHeadlineViewDelegate> { // (Swift)
  /* instance variables */
   onCellSelect;
   onCreateAITapped;
   $__lazy_storage_$_dataSource;
   $__lazy_storage_$_collectionView;
   $__lazy_storage_$_emptyView;
   userSession;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)headlineTextButtonWasTapped;
- (void)headlineProfileImageWasTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC19IGUGCPersonaYourAIs27IGUGCPersonaYourAIsListView_h */
