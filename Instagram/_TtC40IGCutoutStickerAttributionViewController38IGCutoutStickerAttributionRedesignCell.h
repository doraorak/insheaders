//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC40IGCutoutStickerAttributionViewController38IGCutoutStickerAttributionRedesignCell_h
#define _TtC40IGCutoutStickerAttributionViewController38IGCutoutStickerAttributionRedesignCell_h
@import Foundation;

#include "UITableViewCell.h"

@interface _TtC40IGCutoutStickerAttributionViewController38IGCutoutStickerAttributionRedesignCell : UITableViewCell { // (Swift)
  /* instance variables */
   delegate;
   stickerModel;
   $__lazy_storage_$_scissorIcon;
   $__lazy_storage_$_scissorIconLayout;
   mediaIcon;
   $__lazy_storage_$_saveButton;
   $__lazy_storage_$_stickerCreatorLabel;
   $__lazy_storage_$_sourceMediaOwnerLabel;
   $__lazy_storage_$_thumbnailView;
   $__lazy_storage_$_vStack;
   $__lazy_storage_$_hStackForSourceMediaOwner;
   $__lazy_storage_$_hStackForStickerCreator;
   $__lazy_storage_$_hStack;
   actionLogger;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)tapMediaUrlItem;
- (void)saveSticker;
@end

#endif /* _TtC40IGCutoutStickerAttributionViewController38IGCutoutStickerAttributionRedesignCell_h */
