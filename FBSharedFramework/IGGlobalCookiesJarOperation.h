//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGlobalCookiesJarOperation_h
#define IGGlobalCookiesJarOperation_h
@import Foundation;

#include "NSOperation.h"
#include "IGCookieOperationEnumerator.h"
#include "NSObject-Protocol.h"

@class NSArray, NSString, NSTimer;
@protocol IGCookieOperationDelegate, OS_dispatch_queue;

@interface IGGlobalCookiesJarOperation : NSOperation<NSObject> {
  /* instance variables */
  NSObject<IGCookieOperationDelegate> *_delegate;
  NSTimer *_executionTimer;
  long long _currentIndex;
  unsigned long long _batchSize;
  double _delayBetweenSteps;
  double _delayBetweenBatches;
  IGCookieOperationEnumerator *_currentEnumerator;
  BOOL _stopEumeration;
  NSObject<OS_dispatch_queue> *_workQueue;
  BOOL _triggeredOnFocus;
  NSString *_jarIdentifier;
}

@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (readonly, nonatomic) NSArray *cookies;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithJarIdentifier:(id)identifier cookies:(id)cookies operationType:(long long)type triggeredOnFocus:(BOOL)focus delegate:(id)delegate;
- (void)didFinishEnumeration:(long long)enumeration;
- (void)start;
- (void)cancel;
- (BOOL)isFinished;
- (BOOL)isExecuting;
@end

#endif /* IGGlobalCookiesJarOperation_h */
