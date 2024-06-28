//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAsyncTask_h
#define IGAsyncTask_h
@import Foundation;

@class NSError, NSMutableArray;

@interface IGAsyncTask : NSObject {
  /* instance variables */
  id _lock;
  NSMutableArray *_onSuccessBlocks;
  NSMutableArray *_onFailureBlocks;
  NSMutableArray *_onCancelBlocks;
  NSMutableArray *_onProgressChangeBlocks;
}

@property (retain, nonatomic) id result;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double progress;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL isCancelled;

/* class methods */
+ (id)taskWithResult:(id)result;
+ (id)taskWithError:(id)error;
+ (id)taskForCompletionOfTasks:(id)tasks;

/* instance methods */
- (id)init;
- (void)cancel;
- (id)onSuccess:(id /* block */)success;
- (id)onFailure:(id /* block */)failure;
- (id)onCancel:(id /* block */)cancel;
- (id)onProgressChange:(id /* block */)change;
- (void)forwardResultsFromTask:(id)task;
- (void)copyResultsFromTask:(id)task;
- (BOOL)mergedTask:(id)task;
- (id)debugDescription;
@end

#endif /* IGAsyncTask_h */
