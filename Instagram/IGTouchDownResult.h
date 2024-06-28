//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTouchDownResult_h
#define IGTouchDownResult_h
@import Foundation;

#include "IGTouchDownQueuedProxy.h"

@interface IGTouchDownResult : NSObject

@property (readonly, nonatomic) id dataController;
@property (readonly, nonatomic) IGTouchDownQueuedProxy *proxy;

/* instance methods */
- (id)initWithDataController:(id)controller proxy:(id)proxy;
@end

#endif /* IGTouchDownResult_h */