//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCasperPredictionRequest_h
#define IGCasperPredictionRequest_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface IGCasperPredictionRequest : NSObject {
  /* instance variables */
  id /* block */ _requestBlock;
  NSObject<OS_dispatch_queue> *_completionQueue;
}

/* instance methods */
- (id)initWithRequestBlock:(id /* block */)block completionQueue:(id)queue;
- (void)completePrediction:(id)prediction;
@end

#endif /* IGCasperPredictionRequest_h */
