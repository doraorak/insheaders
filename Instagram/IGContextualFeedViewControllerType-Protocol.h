//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContextualFeedViewControllerType_Protocol_h
#define IGContextualFeedViewControllerType_Protocol_h
@import Foundation;

@protocol IGContextualFeedViewControllerType <NSObject>

@property (readonly, nonatomic) NSObject<IGContextualFeedService> *contextualFeedService;
@property (weak, nonatomic) NSObject<IGContextualFeedViewControllerTypeDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGContextualFeedViewControllerTypeDataSource> *dataSource;

@end

#endif /* IGContextualFeedViewControllerType_Protocol_h */