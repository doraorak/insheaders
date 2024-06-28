//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFanClubMemberListUserConfiguration_h
#define IGFanClubMemberListUserConfiguration_h
@import Foundation;

#include "IGUserListItemConfigurationProtocol-Protocol.h"

@class IGUser, IGUserListItemSectionConfiguration, NSArray, NSString;

@interface IGFanClubMemberListUserConfiguration : NSObject<IGUserListItemConfigurationProtocol>

@property (readonly, nonatomic) BOOL isSelected;
@property (readonly, nonatomic) BOOL isDisabled;
@property (readonly, nonatomic) IGUser *user;
@property (readonly, nonatomic) BOOL showBottomSeparator;
@property (readonly, nonatomic) IGUserListItemSectionConfiguration *sectionConfig;
@property (readonly, nonatomic) NSArray *userMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUser:(id)user isSelected:(BOOL)selected isDisabled:(BOOL)disabled;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGFanClubMemberListUserConfiguration_h */