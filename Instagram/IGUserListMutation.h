//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserListMutation_h
#define IGUserListMutation_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGUserList.h"

@class NSArray, NSSet;

@interface IGUserListMutation : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGUserList *_create_list;
  IGUserList *_update_list;
  IGUserList *_delete_list;
  IGUserList *_addAccounts_list;
  NSSet *_addAccounts_userIDs;
  IGUserList *_removeAccounts_list;
  NSSet *_removeAccounts_userIDs;
  NSArray *_reorder_lists;
}

/* class methods */
+ (id)addAccountsWithList:(id)list userIDs:(id)ids;
+ (id)createWithList:(id)list;
+ (id)deleteWithList:(id)list;
+ (id)removeAccountsWithList:(id)list userIDs:(id)ids;
+ (id)reorderWithLists:(id)lists;
+ (id)updateWithList:(id)list;

/* instance methods */
@end

#endif /* IGUserListMutation_h */