//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentThreadUpdateListener_Protocol_h
#define IGCommentThreadUpdateListener_Protocol_h
@import Foundation;

@protocol IGCommentThreadUpdateListener <NSObject>
/* instance methods */
- (void)didUpdateComment:(id)comment operation:(unsigned long long)operation;
- (void)didUpdateComment:(id)comment updatedCommentCount:(long long)count operation:(unsigned long long)operation;
- (void)updateTranslationStateForCommentIds:(id)ids isUndoingTranslations:(BOOL)translations;
- (void)updateTranslationStateForCommentIds:(id)ids isUndoingTranslations:(BOOL)translations;
- (void)didTranslateCommentsWithTranslations:(id)translations;
- (void)didTranslateCommentsWithTranslations:(id)translations;
- (void)didFailToTranslateForCommentIds:(id)ids;
- (void)didFailToTranslateForCommentIds:(id)ids;
@end

#endif /* IGCommentThreadUpdateListener_Protocol_h */