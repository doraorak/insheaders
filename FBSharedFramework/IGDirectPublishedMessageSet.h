//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPublishedMessageSet_h
#define IGDirectPublishedMessageSet_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSFastEnumeration-Protocol.h"

@class NSArray, NSDictionary;

@interface IGDirectPublishedMessageSet : NSObject<NSFastEnumeration, NSCopying> {
  /* instance variables */
  BOOL _hasEBMessage;
  NSArray *_sortedMessages;
  NSDictionary *_messagesByServerId;
  NSDictionary *_messagesByClientContext;
}

/* instance methods */
- (id)initWithSortedMessages:(id)messages messagesByServerId:(id)id messagesByClientContext:(id)context hasEBMessage:(BOOL)ebmessage;
- (id)objectAtIndexedSubscript:(unsigned long long)subscript;
- (unsigned long long)count;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)countByEnumeratingWithState:(struct  *)state objects:(id *)objects count:(unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGDirectPublishedMessageSet_h */
