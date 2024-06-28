//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP18IGAdsCurationSwift40IGFeedItemAdsInterestsPickerCellDelegate__Protocol_h
#define _TtP18IGAdsCurationSwift40IGFeedItemAdsInterestsPickerCellDelegate__Protocol_h
@import Foundation;

@protocol _TtP18IGAdsCurationSwift40IGFeedItemAdsInterestsPickerCellDelegate_ 
/* instance methods */
- (void)adsInterestsPickerCellDidTapDismissButton:(id)button;
- (void)adsInterestsPickerCellDidTapExpandButton:(id)button;
- (void)adsInterestsPickerCell:(id)cell didShowInterestsCount:(long long)count isExpanded:(BOOL)expanded;
- (void)adsInterestsPickerCell:(id)cell didSelectInterestAtIndex:(unsigned long long)index;
- (void)adsInterestsPickerCell:(id)cell didDeselectInterestAtIndex:(unsigned long long)index;
@end

#endif /* _TtP18IGAdsCurationSwift40IGFeedItemAdsInterestsPickerCellDelegate__Protocol_h */