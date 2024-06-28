//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUploadTaskQueue_h
#define IGUploadTaskQueue_h
@import Foundation;

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IGUploadTaskQueue : NSObject {
  /* instance variables */
  long long _maxConcurrentTaskCount;
  NSObject<OS_dispatch_queue> *_underlyingQueue;
  BOOL _shouldCancelTaskWithBadDependencies;
}

@property (readonly, copy, nonatomic) NSArray *tasks;

/* instance methods */
- (id)initWithMaxConcurrentTaskCount:(long long)count underlyingQueue:(id)queue shouldCancelTaskWithBadDependencies:(BOOL)dependencies;
@end

#endif /* IGUploadTaskQueue_h */
