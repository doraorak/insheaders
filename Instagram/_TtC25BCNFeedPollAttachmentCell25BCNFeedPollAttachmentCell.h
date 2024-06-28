//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC25BCNFeedPollAttachmentCell25BCNFeedPollAttachmentCell_h
#define _TtC25BCNFeedPollAttachmentCell25BCNFeedPollAttachmentCell_h
@import Foundation;

#include "_TtC15BCNFeedBaseCell15BCNFeedBaseCell.h"
#include "IGListBindable-Protocol.h"
#include "IGMediaUpdatedListener-Protocol.h"

@interface _TtC25BCNFeedPollAttachmentCell25BCNFeedPollAttachmentCell : _TtC15BCNFeedBaseCell15BCNFeedBaseCell<IGMediaUpdatedListener, IGListBindable> { // (Swift)
  /* instance variables */
   statusView;
   threadline;
   delegate;
   pollOptions;
   viewModel;
   viewPointAction;
   timeSpent;
   lastUpdateTime;
   isVisible;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)bindViewModel:(id)model;
- (void)mediaWasUpdated:(id)updated withChange:(long long)change isFromPreview:(BOOL)preview;
- (void)didSelectOptionView:(id)view;
@end

#endif /* _TtC25BCNFeedPollAttachmentCell25BCNFeedPollAttachmentCell_h */
