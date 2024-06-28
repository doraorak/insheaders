//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11BCNSettings25BCNSettingsViewController_BCNSettings2_h
#define _TtC11BCNSettings25BCNSettingsViewController_BCNSettings2_h
@import Foundation;

@interface _TtC11BCNSettings25BCNSettingsViewController (BCNSettings2) <IGDSListSectionControllerDelegate>
/* instance methods */
- (void)listSectionController:(id)controller didSelectItemAtIndex:(long long)index viewModel:(id)model;
- (void)listSectionController:(id)controller didDeselectItemAtIndex:(long long)index viewModel:(id)model;
- (void)listSectionController:(id)controller didTapLinkAtIndex:(long long)index viewModel:(id)model linkText:(id)text url:(id)url;
- (void)listSectionController:(id)controller didTapHeaderButtonWithViewModel:(id)model;
- (void)listSectionController:(id)controller didTapFooterLinkWithViewModel:(id)model linkText:(id)text url:(id)url;
- (void)listSectionController:(id)controller didSwitchSelectItemAtIndex:(long long)index value:(BOOL)value viewModel:(id)model;
@end

#endif /* _TtC11BCNSettings25BCNSettingsViewController_BCNSettings2_h */
