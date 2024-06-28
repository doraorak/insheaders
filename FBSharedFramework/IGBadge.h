//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBadge_h
#define IGBadge_h
@import Foundation;

@interface IGBadge : NSObject

@property (readonly, nonatomic) long long useCase;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) BOOL shouldBadge;
@property (readonly, nonatomic) BOOL shouldBadgeHomeDueToInactivity;

/* instance methods */
- (id)initWithUseCase:(long long)case shouldBadge:(BOOL)badge count:(long long)count;
- (id)initWithUseCase:(long long)case shouldBadge:(BOOL)badge count:(int)count shouldBadgeHomeDueToInactivity:(BOOL)inactivity;
@end

#endif /* IGBadge_h */