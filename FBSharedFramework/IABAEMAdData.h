//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABAEMAdData_h
#define IABAEMAdData_h
@import Foundation;

@class NSArray, NSNumber, NSString;

@interface IABAEMAdData : NSObject

@property (readonly, nonatomic) NSString *adDestination;
@property (readonly, nonatomic) NSArray *campaignIDs;
@property (readonly, nonatomic) NSString *advertiserID;
@property (readonly, nonatomic) NSNumber *optimizedConversionBit;
@property (readonly, nonatomic) NSString *securityToken;
@property (readonly, nonatomic) BOOL userIsInScopeOfCCPA;

/* instance methods */
- (id)initWithAdDestination:(id)destination campaignIDs:(id)ids advertiserID:(id)id optimizedConversionBit:(id)bit securityToken:(id)token userIsInScopeOfCCPA:(BOOL)ccpa;
@end

#endif /* IABAEMAdData_h */
