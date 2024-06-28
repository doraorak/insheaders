//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstamadilloDiskStorePostProcessorAdapter_h
#define IGDirectInstamadilloDiskStorePostProcessorAdapter_h
@import Foundation;

#include "IGDirectE2EEDiskStore.h"

@interface IGDirectInstamadilloDiskStorePostProcessorAdapter : NSObject {
  /* instance variables */
  IGDirectE2EEDiskStore *_diskStore;
}

/* instance methods */
- (id)initWithDirectE2EEDiskStore:(id)store;
- (void)loadMessageMetadataWithThread:(id)thread messageKey:(id)key uuid:(id)uuid targetTimestamp:(id)timestamp completion:(id /* block */)completion;
- (void)loadReplyPreviewsWithRepliedToMessageKey:(id)key repliedToMessageTimestamp:(id)timestamp publishedThread:(id)thread userPk:(id)pk uuid:(id)uuid completion:(id /* block */)completion;
- (void)processUnreactionWithMessageKey:(id)key targetMessageMetadata:(id)metadata messageUpdateBlock:(id /* block */)block;
@end

#endif /* IGDirectInstamadilloDiskStorePostProcessorAdapter_h */
