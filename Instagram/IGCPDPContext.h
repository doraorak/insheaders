//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCPDPContext_h
#define IGCPDPContext_h
@import Foundation;

@class FBWeakObjectContainer, IGShoppingConsumptionFeedItemLogger;

@interface IGCPDPContext : NSObject

@property (readonly, nonatomic) IGShoppingConsumptionFeedItemLogger *logger;
@property (readonly, nonatomic) FBWeakObjectContainer *viewControllerContainer;

/* instance methods */
- (id)initWithLogger:(id)logger viewControllerContainer:(id)container;
@end

#endif /* IGCPDPContext_h */