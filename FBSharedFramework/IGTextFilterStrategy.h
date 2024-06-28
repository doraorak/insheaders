//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTextFilterStrategy_h
#define IGTextFilterStrategy_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol IGContentFilterLogger, LSTextMatchAlgorithmProtocol;

@interface IGTextFilterStrategy : NSObject<NSObject> {
  /* instance variables */
  NSObject<LSTextMatchAlgorithmProtocol> *_algorithm;
  id /* block */ _algorithmFactory;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _algorithmLock;
  NSObject<IGContentFilterLogger> *_logger;
}

@property (readonly, nonatomic) long long numberOfPatterns;
@property (readonly, nonatomic) unsigned long long strategyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStrategyType:(unsigned long long)type logger:(id)logger algorithmFactory:(id /* block */)factory;
- (void)activateWithDictionary:(id)dictionary;
- (void)onDictionaryUpdate:(id)update toAdd:(id)add toRemove:(id)remove operationString:(id)string;
- (id)findFirstMatchInInput:(id)input;
- (id)findAllMatchesInInput:(id)input;
@end

#endif /* IGTextFilterStrategy_h */
