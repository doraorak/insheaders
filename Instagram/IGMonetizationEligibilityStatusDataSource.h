//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationEligibilityStatusDataSource_h
#define IGMonetizationEligibilityStatusDataSource_h
@import Foundation;

@class IGUserSession;

@interface IGMonetizationEligibilityStatusDataSource : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
}

@property (readonly, nonatomic) long long productType;

/* instance methods */
- (id)initWithUserSession:(id)session productType:(long long)type;
@end

#endif /* IGMonetizationEligibilityStatusDataSource_h */
