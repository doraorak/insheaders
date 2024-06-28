//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrandedContentPartnerCell_h
#define IGBrandedContentPartnerCell_h
@import Foundation;

#include "IGGroupedTableViewCell.h"
#include "_TtP22IGUserContentViewSwift25IGUserContentViewDelegate_-Protocol.h"

@class IGBrandedContentTag, IGTableLayoutSpec, IGTapButton, _TtC22IGUserContentViewSwift17IGUserContentView;
@protocol IGBrandedContentPartnerCellDelegate;

@interface IGBrandedContentPartnerCell : IGGroupedTableViewCell<_TtP22IGUserContentViewSwift25IGUserContentViewDelegate_> {
  /* instance variables */
  IGTableLayoutSpec *_tableInterface;
  _TtC22IGUserContentViewSwift17IGUserContentView *_userContentView;
  IGBrandedContentTag *_user;
  IGTapButton *_removeButton;
}

@property (weak, nonatomic) NSObject<IGBrandedContentPartnerCellDelegate> *delegate;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)_onRemoveButtonTapped;
- (void)userContentView:(id)view didTapStoryViewerEntryView:(id)view;
@end

#endif /* IGBrandedContentPartnerCell_h */
