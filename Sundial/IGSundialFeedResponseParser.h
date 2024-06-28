//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialFeedResponseParser_h
#define IGSundialFeedResponseParser_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol IGSundialFeedResponseParserDelegate;

@interface IGSundialFeedResponseParser : NSObject<NSObject> {
  /* instance variables */
  id /* block */ _sundialItemsParser;
  NSObject<IGSundialFeedResponseParserDelegate> *_parserDelegate;
  BOOL _useParsedTargetPosition;
  BOOL _fixTargetPositionWithDup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSundialItemsParser:(id /* block */)parser sundialAdInsertionHandler:(id)handler parserDelegate:(id)delegate featureSets:(id)sets useParsedTargetPosition:(BOOL)position fixTargetPositionWithDup:(BOOL)dup;
- (id)parseResponse:(id)response responseMetadata:(id)metadata chunkIndex:(unsigned long long)index config:(id)config;
@end

#endif /* IGSundialFeedResponseParser_h */