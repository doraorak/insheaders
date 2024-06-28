//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15IGFriendingList39IGFriendingListSearchCollectionViewCell_IGFriendingList_h
#define _TtC15IGFriendingList39IGFriendingListSearchCollectionViewCell_IGFriendingList_h
@import Foundation;

@interface _TtC15IGFriendingList39IGFriendingListSearchCollectionViewCell (IGFriendingList) <IGSearchBarDelegate>
/* instance methods */
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (void)searchBarDidBeginEditing:(id)editing;
- (void)searchBarDidEndEditing:(id)editing;
- (void)searchBarDidTapClearButton:(id)button;
- (BOOL)searchBar:(id)bar shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)searchBar:(id)bar didChangePlaceholder:(id)placeholder;
@end

#endif /* _TtC15IGFriendingList39IGFriendingListSearchCollectionViewCell_IGFriendingList_h */