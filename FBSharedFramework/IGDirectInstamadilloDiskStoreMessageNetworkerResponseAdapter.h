//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstamadilloDiskStoreMessageNetworkerResponseAdapter_h
#define IGDirectInstamadilloDiskStoreMessageNetworkerResponseAdapter_h
@import Foundation;

#include "IGDirectE2EEDiskStore.h"

@protocol IGDirectMessageNetworkerResponseAdapter;

@interface IGDirectInstamadilloDiskStoreMessageNetworkerResponseAdapter : NSObject {
  /* instance variables */
  NSObject<IGDirectMessageNetworkerResponseAdapter> *_innerMessageNetworkerResponseAdapter;
  IGDirectE2EEDiskStore *_diskStore;
}

/* instance methods */
- (id)initWithInnerMessageNetworkerResponseAdapter:(id)adapter directE2EEDiskStore:(id)store;
- (void)parseAndProcessMessagesForResponseObject:(id)object clientContexts:(id)contexts publishedThread:(id)thread uuid:(id)uuid includeReportingData:(BOOL)data successBlock:(id /* block */)block failureBlock:(id /* block */)block;
- (void)parseAndProcessVisualMessagesForResponseObject:(id)object publishedThread:(id)thread cursor:(id)cursor includeReportingData:(BOOL)data completion:(id /* block */)completion;
- (void)_postProcessMessages:(id)messages responseObject:(id)object clientContexts:(id)contexts publishedThread:(id)thread uuid:(id)uuid includeReportingData:(BOOL)data successBlock:(id /* block */)block failureBlock:(id /* block */)block;
- (void)_postProcessVisualMessages:(id)messages forResponseObject:(id)object publishedThread:(id)thread cursor:(id)cursor visualMessageServerCount:(long long)count unseenVisualMessageItemRange:(id)range includeReportingData:(BOOL)data completion:(id /* block */)completion;
@end

#endif /* IGDirectInstamadilloDiskStoreMessageNetworkerResponseAdapter_h */