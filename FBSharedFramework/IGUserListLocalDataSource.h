//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserListLocalDataSource_h
#define IGUserListLocalDataSource_h
@import Foundation;

#include "IGMediaUpdatedListener-Protocol.h"
#include "IGUser.h"
#include "IGUserBootstrapService.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserSearchIndex-Protocol.h"
#include "IGUserTrie.h"

@class NSArray, NSString;

@interface IGUserListLocalDataSource : NSObject<IGMediaUpdatedListener> {
  /* instance variables */
  BOOL _excludesCurrentUser;
  unsigned long long _defaultSet;
  IGUserBootstrapService *_bootstrapService;
  NSObject<IGUserSearchIndex> *_autocompleteUsersStore;
  NSString *_surfaceName;
  IGUserTrie *_additionalUsers;
}

@property (readonly, nonatomic) IGUser *currentUser;
@property (retain, nonatomic) NSArray *filteredResults;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, weak, nonatomic) NSObject<IGUserLauncherSetProviding> *launcherSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAutocompleteUsersStore:(id)store surface:(id)surface currentUser:(id)user launcherSet:(id)set;
- (void)mediaWasUpdated:(id)updated withChange:(long long)change isFromPreview:(BOOL)preview;
- (unsigned long long)numberOfResults;
- (id)allResults;
- (id)resultForRow:(long long)row;
@end

#endif /* IGUserListLocalDataSource_h */