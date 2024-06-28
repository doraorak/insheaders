//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef EBFetchBackupGQLQueryResponse_h
#define EBFetchBackupGQLQueryResponse_h
@import Foundation;

@protocol GQLModel<EBFetchBackupFragment, GQLModel<EBUserFragment, GQLModel<EBUserPreferencesFragment;

@interface EBFetchBackupGQLQueryResponse : NSObject

@property (readonly, nonatomic) GQLModel<EBUserFragment> *user;
@property (readonly, nonatomic) GQLModel<EBFetchBackupFragment> *encryptedBackup;
@property (readonly, nonatomic) GQLModel<EBUserPreferencesFragment> *userPreferences;

/* instance methods */
- (id)initWithUser:(id)user encryptedBackup:(id)backup userPreferences:(id)preferences;
@end

#endif /* EBFetchBackupGQLQueryResponse_h */