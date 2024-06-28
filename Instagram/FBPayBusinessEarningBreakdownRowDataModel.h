//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayBusinessEarningBreakdownRowDataModel_h
#define FBPayBusinessEarningBreakdownRowDataModel_h
@import Foundation;

@class NSString;

@interface FBPayBusinessEarningBreakdownRowDataModel : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *formattedAmount;
@property (readonly, nonatomic) NSString *currency;

/* instance methods */
- (id)initWithLabel:(id)label formattedAmount:(id)amount currency:(id)currency;
@end

#endif /* FBPayBusinessEarningBreakdownRowDataModel_h */
