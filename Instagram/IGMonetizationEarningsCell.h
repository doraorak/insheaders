//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationEarningsCell_h
#define IGMonetizationEarningsCell_h
@import Foundation;

#include "IGTableViewCell.h"
#include "IGCoreTextLinkHandler-Protocol.h"

@class IGCoreTextView, NSString, UIButton, UILabel, UIView;
@protocol IGMonetizationEarningsCellDelegate;

@interface IGMonetizationEarningsCell : IGTableViewCell<IGCoreTextLinkHandler> {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_creationDateLabel;
  UILabel *_earningsTitleLabel;
  UILabel *_earningsAmountLabel;
  IGCoreTextView *_matchInfoTextView;
  IGCoreTextView *_milestoneBonusTextView;
  UILabel *_badgesTitleLabel;
  UILabel *_badgesCountLabel;
  UIButton *_supporterListButton;
  UILabel *_supporterListLabel;
  UIView *_supporterListRightChevron;
  UIView *_bottomSeparator;
  BOOL _shouldShowMilestoneBonus;
}

@property (weak, nonatomic) NSObject<IGMonetizationEarningsCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_didTapSupporterListButton:(id)button;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGMonetizationEarningsCell_h */
