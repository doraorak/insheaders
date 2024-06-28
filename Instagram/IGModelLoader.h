//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGModelLoader_h
#define IGModelLoader_h
@import Foundation;

@class FBGraphQLService, NSString;
@protocol OS_dispatch_queue, struct shared_ptr<facebook::tigon::TigonService> { struct TigonService * x0; struct __shared_weak_count * x1; }, {shared_ptr<facebook::tigon::TigonService>="__ptr_"^{TigonService}"__cntrl_"^{__shared_weak_count}};

@interface IGModelLoader : NSObject {
  /* instance variables */
  FBGraphQLService *_graphServices;
}

@property (nonatomic) struct shared_ptr<facebook::tigon::TigonService> { struct TigonService * x0; struct __shared_weak_count * x1; } tigonService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *scope;

/* instance methods */
- (id)initWithUserScopedObject:(id)object;
@end

#endif /* IGModelLoader_h */
