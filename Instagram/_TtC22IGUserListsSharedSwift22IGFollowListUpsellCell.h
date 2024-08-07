//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGUserListsSharedSwift22IGFollowListUpsellCell_h
#define _TtC22IGUserListsSharedSwift22IGFollowListUpsellCell_h
@import Foundation;

#include "IGBaseCollectionViewCell.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "_TtP22IGUserListsSharedSwift30IGFollowListUpsellCellDelegate_-Protocol.h"

@interface _TtC22IGUserListsSharedSwift22IGFollowListUpsellCell : IGBaseCollectionViewCell<IGCoreTextLinkHandler> { // (Swift)
  /* instance variables */
   $__lazy_storage_$_profileImageView;
   $__lazy_storage_$_upsellTextLabel;
   $__lazy_storage_$_followController;
   viewModel;
   analyticsModule;
}

@property (nonatomic, weak) NSObject<_TtP22IGUserListsSharedSwift30IGFollowListUpsellCellDelegate_> *delegate;

/* class methods */
+ (double)heightForViewWithViewModel:(id)model width:(double)width;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureWith:(id)with userSession:(id)session;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* _TtC22IGUserListsSharedSwift22IGFollowListUpsellCell_h */
