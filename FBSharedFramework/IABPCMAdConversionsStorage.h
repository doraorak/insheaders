//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABPCMAdConversionsStorage_h
#define IABPCMAdConversionsStorage_h
@import Foundation;

#include "FBStash-Protocol.h"

@interface IABPCMAdConversionsStorage : NSObject {
  /* instance variables */
  NSObject<FBStash> *_stash;
}

/* class methods */
+ (id)defaultStorage;

/* instance methods */
- (id)initWithStash:(id)stash;
- (BOOL)saveConversion:(id)conversion forKey:(id)key error:(id *)error;
- (id)fetchConversionForKey:(id)key error:(id *)error;
- (id)fetchConsumptionReadyConversionsAndReturnError:(id *)error;
- (id)fetchUnsyncedConversionsAndReturnError:(id *)error;
- (BOOL)deleteConversionForKey:(id)key error:(id *)error;
- (void)deleteConversionAsyncForKey:(id)key completion:(id /* block */)completion;
- (BOOL)deleteAllConversionsAndReturnError:(id *)error;
- (long long)numberOfStoredConversionsAndReturnError:(id *)error;
@end

#endif /* IABPCMAdConversionsStorage_h */
