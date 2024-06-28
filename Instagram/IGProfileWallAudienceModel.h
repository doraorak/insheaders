//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileWallAudienceModel_h
#define IGProfileWallAudienceModel_h
@import Foundation;

@class NSArray;

@interface IGProfileWallAudienceModel : NSObject

@property (readonly, nonatomic) long long audienceSize;
@property (readonly, nonatomic) NSArray *audienceFacepileUsers;

/* instance methods */
- (id)initWithAudienceSize:(long long)size audienceFacepileUsers:(id)users;
@end

#endif /* IGProfileWallAudienceModel_h */
